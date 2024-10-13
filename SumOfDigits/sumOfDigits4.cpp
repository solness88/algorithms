// Using recursion

#include <iostream>
#include <string>
int aaa(int n) {
    if (n == 0)
        return 0;
    return (n % 10 + aaa(n / 10));
}
int main()
{
    std::cout << aaa(12345);
    return 0;
}



///////////////////////////////////////////////
///////////////////////////////////////////////




#include <iostream>
#include <string>

int sumDigitsRecursive(const std::string& numStr) {
    if (numStr.empty()) {
        return 0;
    }
    return (numStr[0] - '0') + sumDigitsRecursive(numStr.substr(1));
}

int main() {
    int number = 12345;
    std::string numStr = std::to_string(number);
    std::cout << "Sum of digits (Recursive method): " << sumDigitsRecursive(numStr) << std::endl;
    return 0;
}