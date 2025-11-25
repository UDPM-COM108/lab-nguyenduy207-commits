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
//Bài 3: Tạo tam giác ngôi sao
    char h[3][4]; //3 hàng, 4 cột
    for(int i=0;i<3;i++) {
        for(int j = 0;j <4;j++){
            h[i][j] =' ';
        }
    }
    for(int i=0;i<3;i++){
        int stars;
        if(i==0)    
            stars = 1;//hàng 0, 1 *
        else if(i==1)   
            stars = 2;//hàng 1, 2*
        else    
            stars = 4;//hàng 2, 4*
        for (int j=0;j<stars;j++){
            h[i][j] = '*';
        }
    }
    printf("Tam giác sao:\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            printf("%c", h[i][j]);
        }
    printf("\n");
    } 
    return 0;
}