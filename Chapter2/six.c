#include<stdio.h>

int main(){
    int a, b, swap;
    printf("enter a ");
    scanf("%d",&a);
    printf("enter b ");
    scanf("%d",&b);
    swap = a;
    a = b;
    b = swap;
    printf("a = %d and b = %d", a,b);
}