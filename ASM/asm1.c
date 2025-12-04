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
    int nguyen=0,chinhphuong=0;
    printf("Moi ban nhap so bat ky:");
    scanf("%f",&x);
//check so N
    if( (int)x == x){
        printf("La so nguyen!\n");
        nguyen=1;// đánh dấu 1:có
    }else{
        printf("Khong phai la so nguyen!\n");
    }
//check so NT
    if(nguyen &&  x > 1){
        int lasoNT = 1; // đánh dấu là số nguyên tố
        int n = (int)x;
        for(int i=2; i<= sqrt(n);i++){ //check nhanh
            if(n%i == 0){
                lasoNT=0;//khong phia so nt
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
        chinhphuong =1;//đánh dấu
    }else{
        printf("Khong phai la so chinh phuong!\n");
    }
}
void timuocboichung(){
    int x,y;
    printf("Nhap x va y:");
    scanf("%d %d",&x,&y);
    int a = x ,b = y;
    //Tim uoc chung lon nhat bang vong lap euclid
    while (b!=0){
        int tmp = a%b; //tmp : temporary variable 
        a = b;
        b = tmp;
    }
    int UCLN =a;
    //Tim bcnn 
    int BCNN = (x * y) / UCLN;
    printf("Uoc chung lon nhat cua (x,y): %d\n", UCLN);
    printf("Boi chung nho nhat cua (x,y): %d\n", BCNN);
}
void tinhtienKaraoke(){
    int start, end;
    printf("Nhap gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &end);

    if(start <12 || end >23){
        printf("QUAN MO CUA VAO 12H-23H!! HEN GAP LAI BAN VAO 12H\n");
        return ;
    }
    else if (start >= end){
        printf("Thoi gian nhap khong hop le!!\n");
        return ;
    }
    int sogio = end - start;
    float tien=0;
    
    if(sogio <= 3){
        tien = sogio * 150000; //3h dau 
    }else{
        tien = 3 * 150000 + (sogio - 3) * 150000 * 0.7; //4h tro len giam 30%
    }
    //14-17 giam 10%
    if(start >= 14 && start <= 17){
        tien *= 0.9 ;
    }
    printf("SO TIEN BAN CAN THANH TOAN CHO %d GIO LA: %.0f VND\n",sogio, tien);
}
int main(){
    int luachon;
    do{
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
            timuocboichung();
            break;
        }
        case 3:{
            printf("\nBAN DA CHON CHUC NANG TINH TIEN CHO QUAN KARAOKE.\n");
            tinhtienKaraoke();
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
    while (luachon !=0);
    return 0;
}