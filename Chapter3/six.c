#include<stdio.h>
#include<math.h>

int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("enter the first coordinate \t");
    scanf("%d",&x1);
    scanf("%d",&y1);
    printf("enter the first coordinate \t");
    scanf("%d",&x2);
    scanf("%d",&y2);
    printf("enter the first coordinate \t");
    scanf("%d",&x3);
    scanf("%d",&y3);

    int s1 = abs(x2-x1)/abs(y2-y1);
    int s2 = abs(x3-x1)/abs(y3-y1);
    int s3 = abs(x3-x2)/abs(y3-y2);

    if ( ( s1 == s2 ) && ( s1 == s3 ) )
        printf ( "Points are Co-linear\n" ) ;
    else
        printf ( "Points are NOT Co-linear\n" ) ;
    return 0 ;
}