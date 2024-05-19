#include<stdio.h>
#include<math.h>

int main(){
    int x;
    int y;
    printf("enter the coordinate of x and y \n");
    scanf("%d",&x);
    scanf("%d",&y);
    int r = sqrt((x*x)+(y*y));
    int phi = atan(y/x)* (180.0 / 3.14);
    printf("polar coordinates are -------- %d,  %d   \n ",r,phi);
}