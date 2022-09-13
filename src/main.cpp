#include <iostream>
#include <string>
#include <fstream>

#include "Test.hpp"

int main()
{
    Test test;
    int a;
    std::cin >> a;
    test.setTest(test.getTest() + a);
    std::cout << test.getTest() << std::endl;
    return 0;
}