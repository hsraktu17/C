#include<stdio.h>
#include<math.h>

int main(){
    float t;
    float v;
    printf("enter the temperature and wind");
    scanf("%f",&t);
    scanf("%f",&v);
    float wcf = 35.74 + (0.6215 * t) + (0.4275 * t - 35.75) * pow(v,0.16);
    printf("the wcf is %f ", wcf);
}