#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Bài 1:Kiểm tra số nguyên

//ham kiem tra so nguyen to
bool songuyento(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n%2==0) return false;

    for(int i=3; i<=sqrt(n); i+=2) {
        if (n%i==0) return false;
    }
    return true;
}
//ham kiem tra so chinh phuong
bool sochinhphuong(int n) {
    if (n<0) return false;
    int can = (int)sqrt(n);
    return (can*can==n);
}

void kiemtrasonguyen() {
    int x;
    printf("\nChuong trinh kiem tra so nguyen");
    printf("\nHay nhap so nguyen x:");
    if (scanf("%d", &x) !=1) {
        printf("\nXin vui long nhap so nguyen");
        while (getchar() != '\n');
        return;
    }
    printf("\nKet qua kiem tra\n");

    //1. Kiem tra x co phai so nguyen hay khong
    printf("So %d co phai la so nguyen hay khong?-Co\n", x);

    //2. Kiem tra so nguyen to
    if (songuyento(x)) {
        printf("So %d co phai la so nguyen to hay khong? - Co\n", x);
    } else {
        printf("So %d co phai la so nguyen to hay khong? - Ko\n", x);
    }
    //3. Kiem tra so chinh phuong
    if (sochinhphuong(x)) {
        printf("So %d co phai la so chinh phuong hay khong? - Co\n", x);
    } else {
        printf("So %d co phai la so chinh phuong hay khong? - Ko\n", x);
    }
}
//Bài 2: Tim uoc chung va boi chung cua 2 so
void timucbc() {
    int x, y, ucln, bcnn;
    printf("\nVui long nhap x va y:");
    scanf("%d%d", &x, &y);
    ucln = x;
    while( x % ucln|| y % ucln) ucln--;
    printf("UCLN(%d, %d) la %d\n", x, y, ucln);
    bcnn = (x*y)/ucln;
    printf("BCNN(%d, %d) la: %d\n", x , y, bcnn);
}

//Bài 3: Tinh tien quan karaoke
//Bài 4: Tính tiền điện
void tiendien() {
    double sodien, tiendien;
    printf("\nVui long nhap so dien:");
    scanf("%lf", &sodien);
    if (sodien<=50) tiendien=sodien*1.678;
    else if (sodien<=100) tiendien = 50*1.678 + (sodien-50)*1.734;
    else if (sodien<=200) tiendien = 50*1.678 + 50*1.734+ (sodien-100)*2.014;
    else if (sodien<=300) tiendien = 50*1.678 + 50*1.734+ 100*2.014 + (sodien-200)*2.536;
    else if (sodien<=400) tiendien = 50*1.678 + 50*1.734+ 100*2.014 + 100*2.536 + (sodien-300)*2.834;
    else tiendien = 50*1.678 + 50*1.734+ 100*2.014 + 100*2.536 + 100*2.834 + (sodien-400)*2.927;
    printf("\nTong tien dien phai tra la: %.1f (nghin dong)", tiendien);
}

//Bài 4: Chuong trinh doi tien

void doitien() {
    printf("\nChuong trinh doi tien");
    int menhgia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int sotien;
    int sototien;
    printf("\nNhap vao so tien can doi(k):");
    scanf("%d", &sotien);
    while (sotien) {
        for(int i = 0; i <9; i++) {
            sototien = sotien/menhgia[i];
            if(sototien !=0) {
                printf("Co %d to %d\n", sototien, menhgia[i]);
            }
            sotien = sotien - sototien*menhgia[i];
        }
    }
}

//Bài 6: Tinh lai suat ngan hang
void tinhlaisuat() {
    int thang[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, tienvay;
    double laiphaitra;
    printf("\nNhap so tienvay:");
    scanf("%d", &tienvay);
    int goc = tienvay/12;
    printf("%12s | %10s | %10s | %10s | %12s", "Ky han", "Lai phai tra", "Goc phai tra", "So tien phai tra", "So tien con lai");
    while (tienvay>0) {
        for(int i=0; i<12; i++) {
            laiphaitra = (double)tienvay*0.05;
            tienvay-=goc;
            printf("\n%12d | %12.0lf | %13d| %16.0lf | %15d", thang[i], laiphaitra, goc, laiphaitra, tienvay);
        }
    }
    return 0;
}

//Bài 7: Chuong trinh vay tien mua xe

int main() {
    int luachon;
    do {
        printf("\n------PS49693_TRINH VAN TRUNG HIEU------\n");
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
        printf("10. Chuong trinh tinh toan phan so\n");
        printf("\n0.Thoat chuong trinh");
        printf("\nlua chon cua ban la:\n");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1: {
                kiemtrasonguyen();
                break;
            }
            case 2: {
                timucbc();
                break;
            }
            case 3: {
                
            }
            case 4: {
                tiendien();
                break;
            }
            case 5: {
                doitien();
                break;
            }
            case 6: {
                tinhlaisuat();
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