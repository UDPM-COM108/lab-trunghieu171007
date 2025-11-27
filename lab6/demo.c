#include <stdio.h>

int mang[4] = {5, 7, 3, 1};
int i, j, temp;
int main() {
    for(i=0; i<3; i++) {
        for(j = i+1; j<4; j++) {
            if (mang[i]>mang[j]) {
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
    for(i=0; i<4; i++) {
        printf("%d", mang[i]);
    }
    return 0;
}
