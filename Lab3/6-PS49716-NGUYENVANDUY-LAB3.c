#include <stdio.h>
#include <stdlib.h> // ham exit
#include <math.h> // hàm sqrt
int main(){
    printf("Welcome to menu for Duy!\n");
    printf("Nhap lua chon cua ban:\n");
    printf("1.Xep loai hoc luc\n");
    printf("2.Giai pt bac nhat\n");
    printf("3.Giai pt bac hai\n");
    printf("4.Tinh tien dien\n");
    printf("0.Thoat\n");
    int luachon;//Bai 5:Menu
    scanf("%d",&luachon);
    switch (luachon){ //lựa chọn menu
        case 1:{// Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
            printf("Ban da chon xep loai hoc luc\n");
            double dtb;
            do{
            printf("Nhap diem trung binh: ");
            scanf("%lf", &dtb);
            if(dtb <=0 ||dtb >=10){ // đk nếu nhập sai để trả lại
                printf("Diem trung binh khong hop le. Vui long nhap lai!\n");}
            }while(dtb <=0 || dtb>=10); // do while lặp 1 lần
            if (dtb >=9 ){
                printf ("Xep loai: Xuat sac");
            }else if (dtb >=8){
                printf("Xep loai: Gioi");
            }else if(dtb >=6.5){
                printf("Xep loai: Kha");
            }else if(dtb >=5){
                printf("Xep loai: Trung binh");
            }else{
                printf("Xep loai: Yeu");
            }
            break;
            }
        case 2:{//Giải phương trình bậc nhất
            printf("Ban da chon giai pt bac nhat\n");//a=0,b=0 pt vô nghiệm,a=0,b!=0 pt vô nghiệm
            float a,b;//a!=0 b=0||b!=0 pt có nghiệm x=-b/a
            printf("Phuong trinh bac nhat co dang Ax + B = 0\n");
            printf("Vui long nhap A và B!\n");
            printf("Nhap A: ");
            scanf("%f",&a);
            printf("Nhap B: ");
            scanf("%f",&b);
            if(a!=0){
                float x= -b/a;
                printf("Phuong trinh co nghiem x=%.2f",x);
            }else if(b==0){
                printf("Phuong trinh vo nghiem");
            }else{
                printf("Phuong trinh co vo so nghiem");
            }
            break;
        }
        case 3:{//Bài 3: Giải Phương trình bậc 2
            printf("Ban da chon giai pt bac hai\n");//a!=0,delta >0 co 2 ng phân biệt,delta= 0 phương trình có 1 ng kép, delta <0 vo nghiem
            float a,b,c;
            float delta,x1,x2;
            printf("Phuong trinh bac 2 co dang Ax^2 + Bx + C = 0\n");
            printf("Vui long nhap A, B, C! (A khác 0)\n");
            printf("Nhap A: ");
            scanf("%f",&a);
            printf("Nhap B: ");
            scanf("%f",&b);
            printf("Nhap C: ");
            scanf("%f",&c);
            if(a==0){
                if(b==0){
                    if(c==0){
                        printf("Phuong trinh co vo so nghiem.\n");
                    }
                    else {
                        printf("Phuong trinh vo nghiem.\n");
                    }
                }else{
                    x1= -c/b;
                    printf("Phuong trinh co 1 nghiem duy nhat x=%.2f.\n",x1);
                }
            }else{//tính delta
                delta = b*b - 4*a*c;
                printf("delta= %.2f\n",delta);
            }
            if(delta > 0){
                x1=(-b + sqrt(delta))/ (2*a);
                x2=(-b - sqrt(delta))/ (2*a);
                printf("Phuong trinh co 2 nghiem phan biet:\n");
                printf("x1=%.2f\n",x1);
                printf("x2=%.2f\n",x2);
            }else if(delta == 0){
                x1 = -b / (2*a);
                printf("Phuong trinh co 1 nghiem kep x=%f\n",x1);
            }else{
                printf("Phuong trinh vo nghiem.");
            }
            break;  
        }    
        case 4:{//Bài 4: Tinhs tien dien
            printf("Ban da chon tinh tien dien\n");
            int sodien;
            float tiendien=0;
            float bac1= 1.678;
            float bac2= 1.734;
            float bac3= 2.014;
            float bac4= 2.536;
            float bac5= 2.834;
            float bac6= 2.927;
            printf("Nhap so dien nha ban da su dung:");
            scanf("%d",&sodien);
            if(sodien<0){
                printf("So dien khong hop le. Vui long nhap lai\n");
                return 1;
            }
            if(sodien<=50){
                tiendien=sodien * bac1;
            }else if(sodien<=100){
                tiendien=(50 * bac1) + (sodien - 50) * bac2;
            }else if(sodien<=200){
                tiendien= (50 * bac1) + (50 * bac2) + (sodien - 100) * bac3;
            }else if(sodien<=300){
                tiendien=(50 * bac1) + (50 * bac2) + (100 * bac3) + (sodien - 200) * bac4;
            }else if(sodien<=400){
                tiendien= (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) + (sodien - 300) * bac5;
            }else{
                tiendien= (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) + (100 * bac5) + (sodien - 400) * bac6;
            }
            printf("So tien dien can dong: %.3f VND\n", tiendien);
            break;
        }
        case 0://Ket thuc chuong trinh
        printf("Ban da chon thoat\n");
        exit(0);
        default:
        printf("Lua chon khong hop le!Vui long chon lai\n");
        break;
    }
    return 0;
}