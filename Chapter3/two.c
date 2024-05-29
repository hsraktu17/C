#include<stdio.h>

int main(){
    int r1, s1;
    printf("enter the age of Ram \t");
    scanf("%d",&r1);
    printf("enter the age of Shyam \t");
    scanf("%d",&s1);
    if(r1 > s1){
        printf("Ram is elder than shyam \n");
    }else{
        printf("Shyam is elder than Ram \n");
    }
}