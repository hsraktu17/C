#include<stdio.h>

int main(){
    float a1, a2, a3;
    printf("Enter the angle 1 \t");
    scanf("%f",&a1);
    printf("Enter the angle 2 \t");
    scanf("%f",&a2);
    printf("Enter the angle 3 \t");
    scanf("%f",&a3);

    if((a1+a2+a3) == 180){
        printf("triangle is possible");
    }else{
        printf("not possible");
    }
}