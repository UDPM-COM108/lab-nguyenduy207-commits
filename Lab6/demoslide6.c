    //mảng 1 chiều
/*#include <stdio.h>
int main(){
    int a[4];
    //nhập mảng
    for (int i=0;i<4;i++){
        printf("Nhap mang a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //Xuat mang
    printf("Mang A: ");
    for (int i=0;i<4;i++)
        printf("%d\t",a[i]);
}*/
    //mảng 2 chiều
/*#include <stdio.h>
int main(){
    int b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Nhap mang b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Mang B:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
    }
    return 0;
}*/
    //mảng 2 chiều tạo hình tam giác sao
/*#include <stdio.h>
int main(){
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
}  */
//bubble sort
#include <stdio.h>
int main(){
    int i, j, temp;
    int a[7] = {7, 8, 6, 2, 9, 1, 5};
    // Sắp xếp tăng dần
    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 7; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
