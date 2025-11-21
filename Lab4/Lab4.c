//Demo slide 4.
/*#include <stdio.h>
#include <math.h>
int main(){
    int n,S=0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=1;i<=1000;i++){
        if(i%2!=0){
            S +=i;
        }
    }
    printf("Tong so le:%d",S);
    return 0;
}*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){//BAI4:Menu
    printf("\n===WELCOME TO MENU LAB4 FOR DUY===\n");
    printf("1.TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2.\n");
    printf("2.XÁC ĐỊNH SỐ NGUYÊN TỐ.\n");
    printf("3.XÁC ĐỊNH SỐ CHÍNH PHƯƠNG.\n");
    printf("4.CHUYEN SO THAP PHAN SANG NHI PHAN.\n");
    printf("0.EXITS.\n");
    int luachon;
    printf("\nVUI LONG NHAP LUA HCON TU(0-4): ");
    scanf("%d",&luachon);
    switch (luachon){
        //bài 1:TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2.
        case 1:{
            printf("BAN DA CHON TINH TRUNG BINH TONG CUA CAC SO TU NHIEN CHIA HET CHO 2.\n");
            int min,max;
            float tong=0, biendem=0, trungbinh=0;
            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d",&max);
            int i=min; //gán sau khi nhập min
            while (i<=max){
                if(i%2==0){
                    tong +=i;
                    biendem ++;
                }
                    i++; // tăng i để lặp 
                }if(biendem > 0){
                    trungbinh = tong / biendem;
                    printf("Trung binh: %.4f\n", trungbinh);
                }else{
                printf("Khong co so nao chia het cho 2!");
                }
            break;
        }
        //Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ.
        case 2:{
            printf("BAN DA CHON XAC ĐINH SO NGUYEN TO!\n");
            int x,dem=0;
            printf("Nhap x: ");
            scanf("%d",&x);
            for(int i=2;i<x;i++){
                if(x%i==0){
                    dem++;
                }
            }   
            if (dem == 0){
                printf("%d LA so nguyen to.\n", x);
            }else{
                printf("%d KHONG phai so nguyen to.\n", x);
            }
            break;
        }
        //Bài 3.XÁC ĐỊNH SỐ CHÍNH PHƯƠNG.
        case 3:{
            printf("BAN DA CHON XAC ĐINH SO CHINH PHUONG!\n");
            int n;
            printf("Nhap n:");
            scanf("%d", &n);
            int i=sqrt(n);
                if(i*i == n){
                    printf("X la so chinh phuong");
                }else{
                    printf("Khong phai la so chinh phuong");
                }
            break;
        }
        //Bài 4: CHUYEN SO THAP PHAN SANG NHI PHAN.
        case 4:{
            printf("BAN DA CHON CHUYEN SO THAP PHAN SANG NHI PHAN!");
            int A[100];//mảng để lưu các bit
            int gt1,n,i=0; //gt1: lưu giá trị số thập phân ban đầu.
            printf("\nNHAP VAO MOT SO THAP PHAN:");
            scanf("%d",&n);
            gt1=n;
            for(i=0;n>0;i++){
                A[i]=n%2; //lấy bit cuối
                n /=2;    //giảm n
            }
            printf("SO NHI PHAN CUA BAN LA: ",n);
            for (i = i -1;i>=0;i--){
                printf("%d",A[i]);
            }
            break;
        }
        case 0:
            printf("BAN CHON THOAT");
            exit(0);
        default:
            printf("LỰA CHỌN NGOÀI (0-4).VUI LÒNG NHẬP LẠI!!");
            break;
    }
    return 0;
}