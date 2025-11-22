#include <stdio.h>
int main(){
<<<<<<< HEAD
    printf("Nộp bài Lab 1");
=======
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
>>>>>>> 1940d3c308ed6b5bccff745980193602f0c7c13c
    return 0;
}