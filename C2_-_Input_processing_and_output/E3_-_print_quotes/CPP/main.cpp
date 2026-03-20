
#include <iostream>

int main( void )
{
    std::string quote;
    std::string name;

    std::cout << "What is the quote? : ";
    std::getline( std::cin, quote );
    std::cout << "Who said that? : ";
    std::getline( std::cin, name );

    std::cout << name << " said : \"" << quote << "\"." << std::endl;

    return 0;
}