#include <stdio.h>
#include <string.h>

int main ( void )
{
    char buffer[80];

    printf("Enter string (max 80 characters): ");

    scanf("%80s", &buffer[ 0 ] );

    printf( "There are %ld character in the string\n", strlen( &buffer[0] ) );

    return 0;
}