#include <stdio.h>
#include <math.h>

int main() {
    int thang[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, tienvay;
    double laiphaitra;
    printf("\nNhap so tienvay:");
    scanf("%d", &tienvay);
    int goc = tienvay/12;
    printf("%12s | %10s | %10s | %10s | %12s", "Ky han", "Lai phai tra", "Goc phai tra", "So tien phai tra", "So tien con lai");
    for(int i=0; i<12; i++) {
        laiphaitra = (double)tienvay*0.05;
        tienvay-=goc;
        printf("\n%12d | %12.0lf | %13d| %16.0lf | %15d", thang[i], laiphaitra, goc, laiphaitra, tienvay);
    }
    return 0;
}