#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_BUFFER_SIZE ( ( size_t )80 )

int main ( void )
{
    char buffer[ MAX_BUFFER_SIZE ];


    printf( "What is your name? " );
    scanf( "%80s", &buffer[ 0 ] );
    printf( "Hello %s, nice to meet you!\n", &buffer[ 0 ] );

    return 0;
}