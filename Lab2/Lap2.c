//BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
/*#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap 2 so nguyen a va b: ");
    scanf("%d%d",&a,&b);
    printf("Tong cua a va b la: %d\n",a + b);
    printf("Hieu cua a va b là: %d\n",a - b);
    return 0;
}*/
//BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
/*#include <stdio.h>
int main(){
    float dai, rong;
    printf("Nhap chieu dai va rong hinh chu nhat: ");
    scanf("%f%f",&dai,&rong);
    printf("Chu vi hinh chu nhat la: %.2f\n",2 * (dai + rong));
    printf("Dien tich hinh chu nhat la: %.2f\n",dai * rong);
    return 0;
}*/
//Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
/*#include <stdio.h>
#define PI 3.14
int main(){
    float r;
    printf("Nhap ban kinh hinh tron:");
    scanf("%f",&r);
    printf("Chu vi hinh tron la: %.2f\n",2*PI*r);
    printf("Dien tich hinh tron la: %.2f\n",PI*r*r);
}*/
//Bài 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
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
//Bai 5: tinhs chu vi dien tich tam giac vuong
    float chieudai, chieurong, canhhuyen;
    printf("Nhap chieu dai: ");
    scanf("%f", &chieudai);
    printf("Nhap chieu rong: ");
    scanf("%f", &chieurong);
    printf("Nhap canh huyen: ");
    scanf("%f", &canhhuyen);
    float chuvi=(chieudai + chieurong + canhhuyen);
    float dientich = (chieudai * chieurong)/2;
    printf("Chu vi hinh chu nhat la: %.2f cm\n", chuvi);
    printf("Dien tich hinh chu nhat la: %.2f cm\n", dientich);
    return 0;
}