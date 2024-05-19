#include<stdio.h>
#include<math.h>

int main(){
    int l1,l2;
    int g1,g2;
    printf("enter the latitude");
    scanf("%d %d", &l1,&l2);
    printf("enter the longitude");
    scanf(" %d %d", &g1,&g2);

    int d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2-g1));
    printf("the is distance is %d", d);
}