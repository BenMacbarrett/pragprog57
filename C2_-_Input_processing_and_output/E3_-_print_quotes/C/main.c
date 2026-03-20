#include <stdio.h>
#include <string.h>

#define STR_LEN     ( ( size_t )80 )
#define MAX_QUOTE_LEN   ( ( size_t )( ( STR_LEN * 80 ) / 100 ) )

static size_t printAndGetResponse( const char *message, char *buffer, const size_t bufferLength );

int main( void )
{
    char buffer[ STR_LEN ];
    char c;

    size_t quoteLen = printAndGetResponse( "What was the quote?: ", &buffer[ 0 ], MAX_QUOTE_LEN );

    size_t nameStart = ( quoteLen + ( size_t )1 );

    ( void )printAndGetResponse( "Who said that?: ", &buffer[ nameStart ], ( STR_LEN - nameStart ) );

    printf("%s says, \"%s\".\n", &buffer[ nameStart ], &buffer[ 0 ] );

    return 0;
}

static size_t printAndGetResponse( const char *message, char *buffer, const size_t bufferLength )
{
    size_t inputCount;
    char query[ 16 ];
    char c;

    printf("%s", message );

    snprintf( &query[ 0 ], sizeof( query ),"%%%zu[^\n]", ( bufferLength - ( size_t )1 ) );
    
    scanf( &query[ 0 ], buffer );

    inputCount = strlen( buffer ); 

    while( ( ( c = getchar() ) != '\n' ) && ( c != EOF ) );

    return inputCount;
}