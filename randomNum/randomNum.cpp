#include <iostream>
#include <cstdlib> // required for rand()
#include <ctime> // required for time()

int main()
{
    int random_number {}; 
    size_t count {10}; // number of random numbers to generate
    int min {1}; // lower bound (inclusive)
    int max {6}; // upper bound (inclusive)

    std::cout << "RAND_MAX on my system is: " << RAND_MAX << std::endl;

    // seed the random number generator
    // If you do not seed the generator you will get the same requence random number every run    
    srand(time(nullptr));

    for(size_t i{1}; i <= count; ++i)
    {
        random_number = rand() % max + min; //generate random number(min, max)
        std::cout << random_number << std::endl;
    }

    std::cout << std::endl;
    return 0;
}