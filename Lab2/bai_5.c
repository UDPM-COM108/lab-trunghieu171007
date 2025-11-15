#include <stdio.h>
#include <math.h>

int main() {
    float a, b, dientich, chuvi;
    printf("Nhap do dai 2 canh vuong: ");
    scanf("%f%f", &a, &b);
    
    dientich = (a * b) / 2;
    chuvi = a + b + sqrt(a * a + b * b);
    
    printf("Dien tich tam giac la: %.2f\n", dientich);
    printf("Chu vi tam giac la: %.2f\n", chuvi);
    return 0;
}

