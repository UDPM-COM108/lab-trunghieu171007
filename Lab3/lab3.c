#include <stdio.h>
#include <math.h>
int main() {
    // Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC    
    int diem, a, b, c;
    double delta, nghiem1, nghiem2;
    printf("nhap diem sinh vien:");
    scanf("%d", &diem);
    if (diem >= 9) {
        printf("hoc luc xuat sac");
    }
    if (diem >= 8 && diem < 9) {
        printf("hoc luc gioi");
    }
    if (diem >= 6.5 && diem < 8) {
        printf("hoc luc trung binh");
    } else {
        printf("hoc luc yeu");
    }

    // BÀI 2: GIẢI PHƯƠNG TRÌNH BẬC NHẤT
    printf("\nnhap gia tri a va b:");
    scanf("%d%d", &a, &b);
    if (a == 0) {
        if (b == 0) {
            printf("phuong trinh vo so nghiem");
        } else {
            printf("phuong trinh vo nghiem");
        }
    } else {
        nghiem1 = -(double)b / a;
        printf("nghiem cua phuong trinh la %f", nghiem1);
    }

    // switch case
    printf("\nviet nam co bao nhieu dan toc anh em\n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("chon dap an abcd: ");
    char dapan;
    scanf(" %c", &dapan);
    switch (dapan) {
        case 'a':
            printf("ban da chon sai");
            break;
        case 'b':
            printf("ban da chon sai");
            break;
        case 'c':
            printf("dap an chinh xac");
            break;
        case 'd':
            printf("ban da chon sai");
            break;
        default:
            printf("vui long chon lai");
    }

    // BÀI 3: GIẢI PHƯƠNG TÌNH BẬC 2
    
    printf("\nnhap gia tri a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
        if (a==0) {
            nghiem1 = -(double)c/b;
            printf("nghiem cua phuong trinh la: %lf", nghiem1);
        }
        else if (a!=0){
            delta = (double)b*(double)b - 4.0*(double)a*(double)c;
            if (delta<0) {
                printf("phuong trinh vo nghiem");
            }
            else if (delta == 0) {
                nghiem1 = -(double)b/(2*a);
                printf("phuong trinh co nghiem kep la: %f", nghiem1);
            }
            else {
                printf("phuong trinh co 2 nghiem rieng biet la:");
                nghiem1 = (-b + sqrt(delta))/(2*a);
                printf("\n%f", nghiem1);
                nghiem2 = (-b - sqrt(delta))/(2*a);
                printf("\n%f", nghiem2);
            }
        }
    return 0;
}
