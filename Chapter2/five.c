#include<stdio.h>
#include<math.h>

int main(){
    int angle;
    printf("enter the angle");
    scanf("%d",&angle);
    float s = sin(angle);
    float c = cos(angle);
    float t = tan(angle);

    printf("the values are sin = %d, cos = %d, tan = %d ", s,c,t);
}