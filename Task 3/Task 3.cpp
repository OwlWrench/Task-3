#include <iostream>

int age;

int main()
{
    std::cout << "How old are you? \n";
    std::cin >> age;
    if (age < 20)
    {
        std::cout << "You are young";
    }
    if (age < 40 && age > 19)
    {
        std::cout << "You are a grown up";
    }
    if (age < 60 && age > 39)
    {
        std::cout << "You are old";
    }
    if (age > 59)
    {
        std::cout << "You are very old";
    }
}

