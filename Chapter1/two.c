#include<stdio.h>

int main(){
    int rl, rb, cr;
    printf("enter the length of rectangle \n");
    scanf("%d",&rl);
    printf("enter the breadth of rectangle \n");
    scanf("%d",&rb);
    printf("radius of a circle \n");
    scanf("%d",&cr);
    int ar = rl * rb;
    int pr = 2 * (rl + rb);
    int cc = 2 * 3.14 * cr;
    int ca = 3.14 * cr * cr;
    printf("area of rectangle is %d and perimeter is %d \n",ar,pr);
    printf("area of circle is %d and circumfrenece is %d \n",ca,cc);
}