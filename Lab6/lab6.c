//BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
#include <stdio.h>
#include <math.h>
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
        scanf("%d",&b[j]);
    }
    for(int j=0;j<m;j++){
        printf("%d",j);
    }
    double max=b[0],min=b[0];
    for (int j = 1; j < m; j++){
        if (b[j] > max) max = b[j];
        if (b[j] < min) min = b[j];
    }
    printf("\nGia tri lon nhat: %.2lf", max);
    printf("\nGia tri nho nhat: %.2lf\n", min);
//Bài 3:Sắp xếp mảng theo thứ tự giảm dần
    int p,temp;
    printf("Nhap so phan tu:");
    scanf("%d",&p);
    int mang[p];
    //nhap mang
    for(int i=0;i<p;i++){
        printf("Nhap mang a[%d]:",i);
        scanf("%d",&mang[i]);
    }
    //xap xep mang
    for(int i=0;i<p;i++){
        for(int j=0;j<p;j++){
            if(mang[i]<mang[j]){
                temp=mang[i];
                mang[i]=mang[j];
                mang[j]=temp;
            }
        }
    }
    printf("Mang sau khi sap xep:");
        for(int i=0;i<p;i++){
            printf("%d",mang[i]);
        }
        return 0;
}