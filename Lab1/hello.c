#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Nhap so nguyen a: ");
    scanf("%d",&a);
    printf("Nhap so nguyen b: ");
    scanf("%d",&b);
    printf("Tong cua a va b la: %d\n",a+b);
   
    getchar();

    char hoten[30];
    printf("Nhap ho ten: ");
        fgets(hoten, sizeof(hoten), stdin); // Sử dụng fgets để đọc chuỗi có dấu cách
    printf("Ho ten: %s",hoten);
    return 0;
}