#include <stdio.h>
void nhapmang(int a[5]);
void xuatmang(int a[5]);
void nhapmang(int a[5]){
    int i = 0;
    for (i = 0; i < 5; i++){
        printf("mang[i]=", i);
        scanf("%d", &a[i]);
    }
}

void xuatmang(int a[5]) {
    int i = 0;
    for (i=0; i<5; i++) {
        printf("%d", a[i]);
    }
}
int main() {
    int a[5];
    printf("nhap mang");
    nhapmang(a);
    printf("xuatmang");
    xuatmang(a);
}