

#include <iostream>

#define MAX_BUFFER_SIZE ( ( size_t )80 )

int main( void )
{
    char buffer[ MAX_BUFFER_SIZE ];

    std::cout << "What is your name? ";
    std::cin >> buffer;
    std::cout << "Hello " << &buffer[ 0 ] << ", nice to meet you!" << std::endl;

    return 0;
}