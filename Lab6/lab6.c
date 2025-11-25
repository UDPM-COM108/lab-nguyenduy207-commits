//BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
#include <stdio.h>
int main(){
    int n;
    printf("Nhap do dai mang A:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("Nhap mang a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        printf("\nMang A:%d",a[i]);
    }
    int S=0,dem=0;
    for (int i=0;i<n;i++){
        if(a[i]%3==0){
            S +=a[i];
            dem++;
        }
    }
    if(dem>0){
        float TB = (float)S/dem;
        printf("\nTrung binh cac so chia het cho 3: %.2f",TB);
    }else{
        printf("\nKhong co so nao chia het cho 3!");
    }
//BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG
    int m;
    printf("\nNhap do dai mang B: ");
    scanf("%d",&m);
    int b[m];
    for(int j=0;j<m;j++){
        printf("Nhap mang b[%d]:",j);
        scanf("%d\n",&b[j]);
    }
    for(int j=0;j<m;j++){
        printf("Mang B:%d\n",j);
    }
    double max=b[0],min=b[0];
    for (int j = 1; j < m; j++){
        if (b[j] > max) max = b[j];
        if (b[j] < min) min = b[j];
    }
    printf("\nGia tri lon nhat: %.2lf", max);
    printf("\nGia tri nho nhat: %.2lf\n", min);
    return 0;
}