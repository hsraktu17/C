#include<stdio.h>

int main(){
    int tf, tc;
    printf("enter temp in f \n");
    scanf("%d",&tf);
    tc = (32 * tf) *(5/9);
    printf("temp in c %d \n",tc);
}