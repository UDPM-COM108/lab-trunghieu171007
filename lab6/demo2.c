#include <stdio.h>

int main() {
    int i = 0, j=0;
    int matran[4][3] = {{1, 2, 3}, {2, 3, 4}, {4, 5, 6}};
    for (i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d", matran[i][j]);
        }
        printf("\n");
    }
    return 0;
}