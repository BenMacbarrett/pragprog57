
#include <iostream>
#include <string>

int main ( void )
{
    std::string line;

    std::cout << "Enter a string: " << line.capacity();

    std::getline( std::cin, line );

    std::cout << "There are " << line.length() << " in the string." << std::endl;

    return 0;
}