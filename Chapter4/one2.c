# include <stdio.h>


int main( )
{
    char ch ;
    printf ( "Enter character: " ) ;
    scanf ( "%c", &ch ) ;

    if  ( ( ch >= 0 && ch <= 47 ) || ( ch >= 58 && ch <= 64 ) ||
    ( ch >= 91 && ch <= 96 ) || ( ch >= 123 ) ){
        printf ( "Character entered is a special symbol\n" ) ;
    }else{
        printf ( "Character entered is not a special symbol\n" ) ;
    }
    return 0 ;
}