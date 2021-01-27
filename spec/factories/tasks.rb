FactoryBot.define do
  factory :task do
    task_name {'３番目に作成したタスク'}
    detail {'期限が最も遅いタスク'}
    deadline {'002020-01-01'}
    status {'完了'}
    priority {'高'}
  end
  factory :second_task, class: Task do
    task_name {'２番目に作成したタスク'}
    detail {'期限が２番目に早いタスク'}
    deadline {'002019-01-01'}
    status {'着手'}
    priority {'中'}
  end
  factory :third_task, class: Task do
    task_name {'最初に作成したタスク'}
    detail {'期限が最も早いタスク'}
    deadline {'002018-01-01'}
    status {'未着手'}
    priority {'低'}
  end
  factory :fourth_task, class: Task do
    task_name {'タスク1'}
    detail {'タスク1の詳細'}
    deadline {'002017-01-01'}
    status {'完了'}
    priority {'高'}
  end
  factory :fifth_task, class: Task do
    task_name {'タスク2'}
    detail {'タスク2の詳細'}
    deadline {'002016-01-01'}
    status {'未着手'}
    priority {'中'}
  end
  factory :sixth_task, class: Task do
    task_name {'タスク3'}
    detail {'タスク3の詳細'}
    deadline {'002015-01-01'}
    status {'未着手'}
    priority {'低'}
  end
end