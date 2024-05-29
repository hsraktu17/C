#include<stdio.h>

int main(){
    int n;
    printf("enter a number \t");
    scanf("%d", &n);

    if(n < 0){
        n = n * -1;
        printf("the number is %d \n", n);
    }
    else{
        printf("the number is %d \n",n);
    }
}