#include<stdio.h>

int main(){
    int x,y,r;
    int dis, d;
    printf("enter the radius and the coordinates (x,y)");
    scanf("%d%d%d",&r,&x,&y);
    dis = (x*x)+(y*y);
    d = r*r;
    if(dis == d){
        printf("point in the circle");
    }else{
        if ( dis > d )
            printf ( "Point is outside the circle\n" ) ;
        else
            printf ( "Point is inside the circle\n" ) ;
    }
}