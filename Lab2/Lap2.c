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
#include <stdio.h>
#define PI 3.14
int main(){
    float r;
    printf("Nhap ban kinh hinh tron:");
    scanf("%f",&r);
    printf("Chu vi hinh tron la: %.2f\n",2*PI*r);
    printf("Dien tich hinh tron la: %.2f\n",PI*r*r);
}