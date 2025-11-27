#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Bài 1: Tính trung bình tổng của các số tự nhiên chia hết cho 2
void avg() {
    int min, max;
    printf("Nhap gia tri min, max: ");
    scanf("%d%d", &min, &max);
    int i = min;
    float tong = 0, trungbinh = 0;
    int biendem = 0;
    while (i <= max) {
        if (i % 2 == 0) {
            tong += (float)i;
            biendem++;
        }
        i++;
    }
    if (biendem > 0) {
        trungbinh = tong / (float)biendem;
        printf("Trung binh tong cac so chia het cho 2 tu %d den %d la: %.2f\n", min, max, trungbinh);
    } else {
        printf("Khong co so nao chia het cho 2 trong khoang da cho.\n");
    }
}

//Bài 2:hàm kiểm tra số nguyên tố
// bool songuyento(int n) {
//     if (n<2) {
//         return false;
//     }
//     if (n==2) {
//         return true;
//     }
//     if (n%2==0) {
//         return false;
//     }

//     int can = (int)sqrt(n);
//     for (int i=3; i<=can; i=i+3) {
//         if (n%i==0) {
//             return false;
//         }
//     }
//     return true;
// }

void songuyento() {
    int x;
    printf("chuong trinh xac dinh so nguyen to");
    printf("vui long nhap so nguyen x:");
    scanf("%d", &x);
    int count=0;
    int i;
    for (i=2; i<x;i++) {
        if(x%i==0) {
            count++;
        }
        if(count==0) {
            printf("so %d la so nguyen to", x);
        } else {
            printf("so %d khon phai la so nguyen to", x);
        }
    }


}

//Bài 3: Xây dụng chương trình số chính phương
void sochinhphuong() {
    int x;
    printf("vui long nhap so:");
    scanf("%d", &x);
    for (int i=1;i<x;i++) {
        if (i*i==x) {
            printf("\nso %d la so chinh phuong", x);
        } else {
            printf("\nso %d khong phai la so chinh phuong", x);
        }
    }
}
int main() {
    int luachon;
    do {
        printf("----------------------------------");
        printf("\nVUI LONG CHO CHUONG TRINH");
        printf("\n1. Tinh trung binh tong so tu nhien");
        printf("\n2. Xac dinh so nguyen to");
        printf("\n3. Xac dinh so chinh phuong");
        printf("\n4. Thoat chuong trinh");
        printf("\n---------------------------------");
        scanf("%d", &luachon);
        
        switch(luachon) {
            case 1: {
                avg();
                break;
            }
            case 2: {
                songuyento();
                break;
            }
            case 3: {
                sochinhphuong();
                break;
            }
            default: {
                printf("vui long nhap lai");
            }
        }
    } while(luachon !=4);
    return 0;
}