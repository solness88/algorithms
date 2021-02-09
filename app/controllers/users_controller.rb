class UsersController < ApplicationController
before_action :authenticate_user, only: [:new]
  def new
    @user = User.new
  end

  def create
    @user = User.new(user_params)
    if @user.save
      session[:user_id] = @user.id
      redirect_to user_path(@user.id)
    else
      render :new
    end
  end

  def show
    @user = User.find(params[:id])
    unless @user.name == current_user.name
      redirect_to tasks_path
    end
  end

  private

  def user_params
    params.require(:user).permit(:name, :email, :password, :password_confirmation)
  end

  def authenticate_user
    if logged_in?
      flash[:notice] = t('notice.login_needed')
      redirect_to tasks_path
    end
  end

end
