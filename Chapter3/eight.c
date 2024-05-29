#include<stdio.h>

int main(){
    int x,y;
    printf("enter the coordinates, (x,y) \t");
    scanf("%d%d",&x,&y);
    if(x == 0 && y == 0){
        printf("point lies on origin");
    }else{
        if(x != 0 && y == 0){
            printf("point lies at x-axis");
        }else if(x == 0 && y != 0){
            printf("point lies at y-axis");
        }else{
            printf("point neither lies on x-axis nor y-axis");
        }
    }
}