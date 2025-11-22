#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, x;
    printf("\nnhap a:");
    scanf("%d", &a);
    printf("\nnhap b:");
    scanf("%d", &b);
    printf("\nnhap c:");
    scanf("%d", &c);
    printf("nhap x:");
    scanf("%d", &x);
    int max = a;
    x = sqrt(a);
    if (max<b) {
        max = b;
    }
    if (max<c) {
        max =c;
    }
    return 0;
}