#include<stdio.h>

int main(){
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    int sum = 0;
    while (num != 0){
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("printing sum of   %d \n",sum );

}