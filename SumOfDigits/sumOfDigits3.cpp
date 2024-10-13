// Using iteration

#include <iostream>

int aaa(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;  // 最後の桁を加算
        n /= 10;        // 最後の桁を取り除く
    }
    return sum;
}

int main() {
    std::cout << aaa(1234567);
    return 0;
}


///////////////////////////////////////////////
///////////////////////////////////////////////



#include <iostream>
#include <string>

int sumDigitsLoop(int n) {
    std::string numStr = std::to_string(n);
    int sum = 0;
    for (char digit : numStr) {
        sum += digit - '0';
    }
    return sum;
}

int main() {
    int number = 12345;
    std::cout << "Sum of digits (Loop method): " << sumDigitsLoop(number) << std::endl;
    return 0;
}