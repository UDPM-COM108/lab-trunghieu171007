#include <stdio.h>
//Bài 1: Tinh trung binh tong cac so chia het cho 3 trong mang
void avg() {
    int i, n;
    printf("\nNhap so gia tri muon tao:");
    scanf("%d", &n);
    printf("\nNhap gia tri cua mang:");
    int mang[n];
    for(i=1; i<n; i++) {
        printf("mang[%d]=", i);
        scanf("%d", &mang[i]);
    }

    //Tim trung binh cong
    float tong = 0, trungbinh;
    int dem = 0;
    for(i=0; i<n; i++) {
        if (mang[i] % 3==0) {
            tong += (float)mang[i];
            dem++;
        }
    }
    trungbinh = tong/(float)dem;
    printf("\nTrung binh tong cac so chia het cho 3 trong mang la %.2f", trungbinh);
}

//Bài 2: Tim gia tri min/max
void minmax() {
    int i, n;
    printf("\nNhap so luong gia tri:");
    scanf("%d", &n);
    int mang[n];
    for(i=0; i<n; i++){
        printf("    mang[%d]=", i);
        scanf("%d", &mang[i]);
    }
    int max=mang[1];
    for(i=0; i<n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
    }
    int min=mang[1];
    for(i=0; i<n; i++) {
        if (mang[i]< min) {
            min = mang[i];
        }
    }
    printf("\nGia tri min la %d, gia tri max la %d", min, max);
}

//Bai 3: Sap xep theo thu tu giam dan
void sapxep() {
    int i, j, n;
    printf("\nVui long nhap so luong gia tri:");
    scanf("%d", &n);
    int mang[n];
    for(i=0; i<n; i++) {
        printf("\nmang[%d]", i);
        scanf("%d", &mang[i]);
    }
    printf("\nDang sap xep");
    for(i=0; i<n -1; i++) {
        for(j=i+1; j<n; j++) {
            if(mang[i]<mang[j]) {
                int temp = mang[j];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
    //xuat mang da sap xep
    printf("\nMang da sap xep");
    for(i=0; i<n; i++) {
        printf("%d", mang[i]);
    }
}
int main() {
    int luachon;
    printf("\nMenu chuong trinh");
    printf("\nBai 1: Tim trung binh cong");
    printf("\nBai 2: Tim gia tri min/max");
    printf("\nBai 3: Sap xep theo thu tu giam dan");
    printf("\nLua chon cua ban la:");
    scanf("%d", &luachon);
    switch(luachon) {
        case 1: {
            printf("\nChuong trinh tinh trung binh cong");
            avg();
            break;
        }
        case 2: {
            printf("\nChuong trinh tim gia tri min/max");
            minmax();
            break;
        }
        case 3: {
            printf("\nChuong trinh sap xep");
            sapxep();
            break;
        }
        default: {
            printf("\nKhong dung dinh dang vui long nhap lai");
        }
    }
    
    return 0;
}