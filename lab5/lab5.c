#include <stdio.h>
#include <math.h>
//Bài 1: Ham tinh so lon nhat trong 3 so
int somax(int a, int b, int c) {
    int max = a;
    if (b>max) {
        max =b;
    }
    if (c>max) {
        max =c;
    }
    return max;
}
//Bài 2: Tinh nam nhuan
int checkyear(int year) {
    int flag =0;
    if (year % 400==0) {
        flag =1;
    } else if (year %4==0 && year % 100 != 0) {
        flag =1;
    }
    return flag;
}

//Bài 3: Xây dựng hàm hoán vị
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int luachon;
    do {
        printf("Hay chon chuong trinh");
        printf("\n1. tim so lon nhat trong 3 so");
        printf("\n2. Tinh nam nhuan");
        printf("\n3. Ham hoan vi");
        printf("\n0. Thoat chuong trinh");
        printf("\nLuachon cua ban la:");
        scanf("%d", &luachon);
        switch(luachon) {
            case 1: {
                int a, b, c;
                printf("\nNhap vao 3 so bat ki:");
                scanf("%d%d%d", &a, &b, &c);
                
                int max = somax(a, b, c);
                printf("\nSo lon nhat trong 3 so la:%d", max);
                break;
            }
            case 2: {
                int year;
                printf("\nNhap vao nam:");
                scanf("%d", &year);

                if (checkyear(year)) {
                    printf("\nNam %d la nam nhuan", year);
                } else {
                    printf("\nNam %d khong phai la nam nhuan\n", year);
                }
                break;
            }
            case 3: {
                int a, b;
                printf("\nVui long nhap gia tri a va b:");
                scanf("%d%d", &a, &b);
                printf("\nTruoc khi hoan vi:\n");
                printf("a = %d\n", a);
                printf("b = %d\n", b);

                swap(&a, &b);

                printf("\nSau khi hoan vi:");
                printf("a = %d\n", a);
                printf("b = %d\n", b);
                break;
            }
            default: {
                printf("\nvui long chon chuc nang");
            }
        }
    }while(luachon!=0);
    return 0;
}