#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void kiemtrasoN();
void timuocboichung();
void tinhtienKaraoke();
void tinhtienDien();
void doiTien();
void tinhlaisuatVay();
void vaytienmuaxe();
void sapxepthongtin();
void gameFPOlY();
void tinhtoanphanso();

void kiemtrasoN(){
    float x;
    int nguyen,chinhphuong;
    printf("Moi ban nhap so bat ky:");
    scanf("%f",&x);
//check so N
    if( (int)x == x){
        printf("La so nguyen!\n");
        nguyen=1;
    }else{
        printf("Khong phai la so nguyen!\n");
    }
//check so NT
    if(nguyen &&  x > 1){
        int lasoNT = 1;
        int n =(int)x;
        for(int i=2; i<= sqrt(n);i++){
            if(n%i == 0){
                lasoNT=0;
            break;
            }
        }
        if(lasoNT){
            printf("La so Nguyen to!\n");
            nguyen = 1;
        }
        else{
            printf("Khong phai la so nguyen to!\n");
        }
    }else {
        // Nếu không phải số nguyên thì chắc chắn không phải số nguyên tố
        printf("Khong phai la so nguyen to!\n");
    }
//Check so CP
    int n=(int)x;
    int can = (int)sqrt(n);
    if (can * can == n){
        printf("La so chinh phuong!\n");
        chinhphuong =1;
    }else{
        printf("Khong phai la so chinh phuong!\n");
    }
}
int main(){
    printf("\n===WELCOME TO THE ASSIGNMENT MENU BY DUY===\n");
    printf("\n1.CHUC NANG KIEM TRA SO NGUYEN.");
    printf("\n2.CHUC NANG TIM UOC CHUNG VA BOI CHUNG CUA HAI SO.");
    printf("\n3.CHUC NANG TINH TIEN CHO QUAN KARAOKE.");
    printf("\n4.CHUC NANG TINH TIEN DIEN.");
    printf("\n5.CHUC NANG DOI TIEN.");
    printf("\n6.CHUC NANG TINH LAI SUAT VAY NGAN HANG VAY TRA GOP.");
    printf("\n7.CHUC NANG VAY TIEN MUA XE.");
    printf("\n8.CHUC NANG SAP XEP THONG TIN SINH VIEN.");
    printf("\n9.CHUONG TRINH GAME FPOLY-LOTT(2/15).");
    printf("\n10.CHUC NANG TINH TOAN PHAN SO.");
    printf("\n0.EXITS");
    int luachon;
    printf("\nNHAP LUA CHON TU (0-10):");
    scanf("%d",&luachon);
    switch (luachon){
        case 1:{
            printf("\nBAN DA CHON CHUC NANG KIEM TRA SO NGUYEN.\n");
            kiemtrasoN();
            break;
        }
        case 2:{
            printf("\nBAN DA CHON CHUC NANG TIM UOC CHUNG VA BOI CHUNG CUA HAI SO.\n");
            break;
        }
        case 3:{
            printf("\nBAN DA CHON CHUC NANG TINH TIEN CHO QUAN KARAOKE.\n");
            break;
        }
        case 4:{
            printf("\nBAN DA CHON CHUC NANG TINH TIEN DIEN.\n");
            break;
        }
        case 5:{
            printf("\nBAN DA CHON CHUC NANG DOI TIEN.\n");
            break;
        }
        case 6:{
            printf("\nBAN DA CHON CHUC NANG TINH LAI SUAT VAY NGAN HANG VAY TRA GOP.\n");
            break;
        }
        case 7:{
            printf("\nBAN DA CHON CHUC NANG VAY TIEN MUA XE.\n");
            break;
        }
        case 8:{
            printf("\nBAN DA CHON CHUC NANG SAP XEP THONG TIN SINH VIEN.\n");
            break;
        }
        case 9:{
            printf("\nBAN DA CHON CHUONG TRINH GAME FPOLY-LOTT(2/15).\n");
            break;
        }
        case 10:{
            printf("\nBAN DA CHON CHUC NANG TINH TOAN PHAN SO.\n");
            break;
        }
        case 0:
            printf("THANKS FOR USING THE FEATURE. SEE YOU AGAIN!");
            exit(0);
        default:
            printf("BAN DA NHAP SAI VUI LONG NHAP LAI (0-10)");
            break;
    }
}