#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Bài 1:Kiểm tra số nguyên

//ham kiem tra so tu nhien
bool lasotunhien(int n) {
    return n >= 0;
}
//ham kiem tra so chinh phuong
bool lasochinhphuong(int n) {
    if (n < 0) return false;
    int x = (int)sqrt((double)n);
    return x*x ==n;
}

//hàm kiểm tra số nguyên tố
bool lasonguyento(int n) {
    if (n < 2) return false;
    if (n ==2) return true;
    if (n % 2==0) return false;
    int can = (int)sqrt((double)n);
    for (int i=3; i<=can; i = i+2) {
        if (n % i == 0) return false;
    }
    return true;
}

void kiemtrasonguyen() {
    int x;
    printf("\nVui long nhap so nguyen:");
    scanf("%d", &x);
    if (lasotunhien(x)) printf("\n%d la so tu nhien", x);
    else if (lasochinhphuong(x)) {
        printf("%d la so chinh phuong", x);
    } else {
        printf("%d la so tu nhien", x);
    }
}


int main() {
    int luachon;
    do {
        printf("\n------PS49693_TRINH VAN TRUNG HIEU------");
        printf("Vui long chon chuong trinh\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc chung va boi chung cua 2 so\n");
        printf("3. Tinh tien quan karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat ngan hang\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. game FPOLY-LOTT\n");
        printf("9. Chuong trinh tinh toan phan so\n");
        printf("\n0.Thoat chuong trinh");
        printf("\nlua chon cua ban la:\n");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1: {
                kiemtrasonguyen();
                break;
            }
            case 2: {

            }
            case 3: {
                
            }
            case 4: {
                // tinhtiendien();
                break;
            }
            case 5: {
                // tinhtiendien();
                break;
            }
            case 6: {
                // tinhtiendien();
                break;
            }
            case 7: {
                // tinhtiendien();
                break;
            }
            case 8: {
                // tinhtiendien();
                break;
            }
            case 9: {
                // tinhtiendien();
                break;
            }
            case 10: {
                // tinhtiendien();
                break;
            }
            default: {
                printf("lua chon khong hop le vui long chon lai hihi");
            }
        }
    }while(luachon !=0);
    
    return 0;
}