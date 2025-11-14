#include <stdio.h>
#include <math.h>
int main() {
    int luachon;
    do {
        printf("menu chuong trinh vui long chon:");
        printf("1. Tinh hoc luc");
        printf("2. Giai phuong trinh bac nhat");
        printf("3. Giai phuong trinh bac 2");
        printf("0. Thoat chuong trinh");
        printf("Nhạp lua chon cua ban:");
        scanf("%d", &luachon);
        
        //Bài 1: Tính học lực sinh viên
        switch (luachon) {
            case 1: {
                int diem;
                printf("Hay nhap diem trung binh cua sinh vien:");
                scanf("%d", &diem);
                if (diem>=9)
                    printf("hoc luc xuat sac");
                else if (diem>=8)
                    printf("hoc luc gioi");
                else if (diem>=6.5)
                    printf("hoc luc trung binh");
                else
                    printf("hoc luc yeu");
                break;
            }

        //Bài 2: Giải phương trình bậc nhất
            case 2: {
                int a, b;
                double nghiem;
                printf("hay nhap gia tri a va b");
                scanf("%d%d", &a, &b);
                if (a==0) {
                    if (b==0)
                        printf("phuong trinh vo so nghiem");
                    else
                        printf("phuong trinh vo nghiem");
                } else {
                    nghiem = -(double)b/a;
                    printf("nghiem cua phuong trinh la:%f", nghiem);
                }
                break;
            }

        //Bài 3:Giải phương trình bậc ba
            case 3: {
                int a, b, c;
                double delta, nghiem1, nghiem2;
                printf("nhap gia tri a, b, c,d:");
                scanf("%d%d%d", &a, &b, &c);
                if (a==0) {
                    nghiem1 = -(double)c/b;
                    printf("nghiem cua phuong trinnh la:%f", nghiem1);
                } else {
                    delta = (double)b*b - 4.0*a*c;
                    if (delta <0) {
                        printf("phương trình vô nghiệm:");
                    }
                    else if (delta==0) {
                        nghiem1 = -(double)b/(2*a);
                        printf("phuong trinh co nghiem kep:%f", nghiem1);
                    } else {
                        nghiem1 = (-b + sqrt(delta)/(2*a));
                        nghiem2 = (-b - sqrt(delta)/(2*a));
                        printf("Phuong trinh co 2 nghiem phan biet la %f va %f", nghiem1, nghiem2);
                    }
                }
                break;
            }
            case 0:
                printf("ket thuc chuong trinh");
                break;
            default:
                printf("vui long chon lai");
        }
    } while(luachon !=0);
    return 0;
}
