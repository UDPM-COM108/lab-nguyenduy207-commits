//Bài 1:Tìm số lớn nhất trong 3 số đã cho 
#include <stdio.h>
int main(){
    double a,b,c;
    printf("Nhap a,b,c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    double max;
    if(a>b && a>c)
        max=a;
    else if(b>=a && b>=c)  
        max=b;
    else
        max=c;
    printf("Max la:%.2lf \n",max);
//Bài 2: Tính năm nhuận
    int years;
    printf("Nhap nam: ");
    scanf("%d",&years);
    if((years %4==0 && years %100 !=0) ||(years %400==0))
        printf("%d la nam nhuan!\n",years);
    else
        printf("%d khong phai la nam nhuan!\n",years);
//Bài 3: Hoán vị 2 số x và y
    int x,y;
    printf("Nhap x va y: ");
    scanf("%d %d",&x,&y);
    printf("Truoc khi hoan vi: x=%d va y=%d!\n",x,y);
    int hoanvi = x;
    x=y;
    y=hoanvi;
    printf("Sau khi hoan vi: x=%d va y=%d!\n",x,y);
    return 0;
}