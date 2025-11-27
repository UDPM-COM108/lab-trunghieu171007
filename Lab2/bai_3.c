#include <stdio.h>
#define pi 3.14
int main () {
    int a, chuvi, dientich;
    printf("nhap ban kinh:");
    scanf("%d", &a);

    chuvi = 2*pi*a;
    dientich = (pi*a)^2;
    printf("chu vi la %d", chuvi);
    printf("\ndien tich la %d", dientich);
    return 0;
    
}