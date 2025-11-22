/*#include <stdio.h>
int main (){
    double dtb; // {...}khoi lenh 2 dong tro len thi sai.
    do{
        printf("Nhap diem trung binh: ");
        scanf("%lf", &dtb);
        if(dtb <=0 || dtb >= 10){
            printf("Diem trung binh khong hop le. Vui long nhap lai!\n");}
    }while(dtb <=0 || dtb >= 10);
    if (dtb >= 9){
        printf("Xep loai: Xuat sac");
    }else if (dtb >= 8){
        printf("Xep loai: Gioi");
    }else if (dtb >=7){
        printf("Xep loai: Kha");
    }else if (dtb >= 5){
        printf("Xep loai: Trung binh");
    }else {
        printf("Xep loai: Yeu");
    }
    return 0;
}*/
#include <stdio.h>
int main(){
    printf("Viet Nam co bao nhieu dan toc anh em?\n");
    printf("\na. 52");
    printf("\nb. 54");
    printf("\nc. 53");
    printf("\nd. 55");
    printf("\nNhap dap an cua ban (a,b,c,d):");
    char dapan;
    scanf(" %c",&dapan);
    switch(dapan){
        case 'a':printf("Sai roi ban oi!");
            break;
        case 'b':printf("Dung roi ban oi!");
            break;
        case 'c':printf("Sai roi ban oi!");
            break;
        case 'd':printf("Sai roi ban oi!");
            break;
        default:printf("Dap an khong hop le!vui long chon lai (a,b,c,d)");
    }
}