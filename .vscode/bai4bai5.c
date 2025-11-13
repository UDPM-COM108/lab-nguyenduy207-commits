#include <stdio.h>
int main (){
    float toan, ly, hoa;
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem ly: ");
    scanf("%f",&ly);
    printf("Nhap diem hoa: ");
    scanf("%f",&hoa);
    float tong = toan*3 + ly*2 + hoa;
    float diemTB = tong / 6; // Chia cho 6.0
    printf("Diem trung binh la: %.2f\n", diemTB);
    //tinhs chu vi dien tich tam giac vuong
    float chieudai, chieurong, canhhuyen;
    printf("Nhap chieu dai: ");
    scanf("%f", &chieudai);
    printf("Nhap chieu rong: ");
    scanf("%f", &chieurong);
    printf("Nhap canh huyen: ");
    scanf("%f", &canhhuyen);
    float chuvi=(chieudai + chieurong + canhhuyen);
    float dientich = (chieudai * chieurong)/2;
    printf("Chu vi hinh chu nhat la: %.2f\n", chuvi);
    printf("Dien tich hinh chu nhat la: %.2f\n", dientich);
    return 0;
}