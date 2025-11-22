//Bài 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ:
#include <stdio.h>
#include <math.h>
#define pi 3.1416f
int main () {
    int a, b, tong, hieu;
    float r, chuvi, dientich, toan, ly, hoa, avg, dai, rong, dientich2, chuvi2;
    printf("nhap chieu rong:");
    scanf("%d", &a);
    printf("nhap chieu dai:");
    scanf("%d", &b);
//Bài 2: Hiển thị ra màn hình tổng hiệu 2 số nguyên    
    tong = a + b;
    hieu = a - b;
    printf("tong: %d va hieu la %d", tong, hieu);

//Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    printf("\nnhap ban kinh:");
    scanf("%f", &r);
    chuvi = 2.0f*pi*r;
    dientich = pi*r*r;
    printf("chu vi la %f", chuvi);
    printf("\ndien tich la %f", dientich);
//Bài 4: Tính điểm trung bình
    printf("nhap diem toan:");
    scanf("%f", &toan);
    printf("nhap diem ly:");
    scanf("%f", &ly);
    printf("nhap diem hoa");
    scanf("%f", &hoa);
    avg = (toan*3 + ly*2 + hoa)/6;
    printf("diem trung binh la:%f", avg);
//Bài 5:
    printf("nhap do dai 2 duong tam giac:");
    scanf("%f%f", &dai, &rong);
    dientich2 = (dai*rong)/2;
    chuvi2 = dai + rong + (float)sqrt(dai*dai + rong*rong);
    printf("dien tich la %f va chu vi la %f", dientich2, chuvi2);

    return 0;
}