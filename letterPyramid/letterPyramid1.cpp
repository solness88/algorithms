#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string enteredText{};

    // create left and right side string to create palindrome
    std::string leftSide{};
    std::string rightSide{};
    
    std::cout << "Enter text: " << std::endl;
    std::cin >> enteredText;
 
    size_t enteredTextSize = enteredText.size();
 
    // create palindroe using for loop
    // Extract and process enteredText one character at a time
    for(char i : enteredText)
    {
        // add one character to left side
        leftSide += i;
        
        // adjust space number to create pyramid shape
        std::string space(enteredTextSize - leftSide.size(), ' ');
        
        // Omit the last character of leftSide and copy it to rightSide 
        rightSide = leftSide.substr(0, leftSide.size() - 1);
        
        // reverse the order of the alphabet on the right side
        std::reverse(rightSide.begin(), rightSide.end());
        
        // console out the processed space, left side, right side
        // output space, leftSide, and rightSide in order、creating the pyramid shape
        std::cout << space << leftSide + rightSide << std::endl;
    }
 
    return 0;
}