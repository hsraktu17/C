#include <stdio.h>

int main() {
    int height = 1189;
    int width = 841;
    int sizes[8][2]; 

    
    for (int i = 0; i < 8; i++) {
        sizes[i][0] = width;
        sizes[i][1] = height;
        int newHeight = width;
        width = height / 2;
        height = newHeight;
    }

    
    for (int i = 0; i < 8; i++) {
        printf("Size of A%d is %d mm x %d mm\n", i, sizes[i][1], sizes[i][0]);
    }

    return 0;
}
