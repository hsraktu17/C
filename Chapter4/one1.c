#include<stdio.h>

int main(){
    char c;
    printf("enter the character \t");
    scanf ( "%c", &c ) ;
    if(c >= 97 && c <= 122) 
        printf ( "Character is lowercase\n" );
    else
        printf ( "Character is not lower case\n" ) ;
}