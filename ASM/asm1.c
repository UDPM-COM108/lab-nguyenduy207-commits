#include <stdio.h>
#include <stdlib.h> //thêm cho system() và system ("pause") và exit
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
void tinhtienDien(){
    double kwh,tiendien=0;
    do{ 
        printf("Nhap so dien nha ban da su dung:");
        scanf("%lf",&kwh);
            if(kwh<=0){
            printf("\nSo dien khong hop le! Vui long nhap tu 0 tro len.\n");
        }
    }while (kwh<=0);
    float bac1=1.678, bac2=1.734, bac3=2.014, bac4=2.536, bac5=2.834, bac6=2.927;
    if(kwh<=50){
        tiendien= kwh * bac1;
    }else if(kwh<=100){
        tiendien= (50 * bac1) + (kwh - 50)*bac2;
    }else if(kwh<=200){
        tiendien= (50 * bac1) + (50 * bac2) + (kwh - 100)*bac3;
    }else if(kwh<=300){
        tiendien= (50 * bac1) + (50 * bac2) + (100 * bac3) + (kwh - 200)*bac4;
    }else if(kwh<=400){
        tiendien= (50 * bac1) + (50 * bac2) + (100 * bac3) + (200 * bac4) + (kwh - 300)*bac5;
    }else{
        tiendien= (50 * bac1) + (50 * bac2) + (100 * bac3) + (200 * bac4) + (300 * bac5) + (kwh - 400)*bac6;
    }
    printf("BAN DA SU DUNG %.2lf KWH DIEN, BAN CAN THANH TOAN %.3lf VND!\n",kwh,tiendien);
}
void doiTien(){
    int money;
    printf("Nhap so tien ban can doi:");
    scanf("%d",&money);
    int menhgia[] = {500,200,100,50,20,10,5,2,1};
    int size = sizeof(menhgia) / sizeof(menhgia[0]);//sizeof tu dong dem length
    printf("Cac menh gia da doi ra: \n");
    for(int i=0;i<size;i++){
        int soto = money / menhgia[i];
        if(soto > 0){
            printf("%d to %d\n",soto, menhgia[i]);
            money %= menhgia[i];//trừ phần đã đổi 
        }
    }
}
void tinhlaisuatVay(){
    long vay;
    printf("Nhap so tien muon vay:");
    scanf("%ld",&vay);
    long  gocphaitra = vay / 12;
    long tienconlai = vay;
    printf("\n%-2s | %-15s | %-15s | %-20s | %-18s\n", //%- can phai
           "Ky han", "Lai phai tra", "Goc phai tra", 
           "So tien phai tra", "So tien con lai");
    printf("-------------------------------------------------------------------------------\n");
    for (int i=1;i<=12;i++){
        long laiphaitra = tienconlai * 0.05;
        long tongphaitra = laiphaitra + gocphaitra;
        printf("%-2d | %10ld | %10ld | %15ld | %13ld\n", 
               i, laiphaitra, gocphaitra, tongphaitra, tienconlai);
        tienconlai -=gocphaitra; //cap nhat moi ki
    }
}void vaytienmuaxe(){
    //const giu cố định giá trị
    long long giaxe;
    int nam;
    const double lainam = 0.072;
    printf("Gia tri xe:");
    scanf("%lld",&giaxe);
    printf("Thoi han vay (nam):");
    scanf("%d",&nam);
    printf("Lai suat co dinh: %.1lf%%\n",lainam * 100);
    //nhập phần trăm vay
    int phantramvay;
    do{
        printf("Nhap phan tram ban muon vay (0-100):");
        scanf("%d",&phantramvay);
        if(phantramvay<0 || phantramvay >100){
            printf("SO KHONG HOP LE!!VUI LONG NHAP LAI.");
        }
    }while(phantramvay<0 || phantramvay >100);
    //tính toán
    double tilevay = phantramvay / 100.0;
    long long tienvay =giaxe * tilevay;
    long long sotientratruoc = giaxe - tienvay;
    //tính số tiền tháng và số tháng vay
    double laithang =lainam / 12;
    int sothang = nam * 12;
    //tính số tiền trả hàng tháng theo ct
    double tientrahangthang;
    if(laithang > 0){
        double heso = pow(1 + laithang,sothang);
        tientrahangthang = tienvay * (laithang * heso) /(heso -1);
    }else {
        tientrahangthang = (double)tienvay / sothang;
    }
    //hiện thị kq
    printf("\n=== KET QUA ===\n");
    printf("1. So tien tra truoc: %lld VND\n", sotientratruoc);
    printf("2. So tien vay: %lld VND\n", tienvay);
    printf("3. So tien tra hang thang: %.0lf VND\n", tientrahangthang);
    printf("4. Thoi ki vay :%d thang\n",sothang);
    //tinh tong
    double tongtragop = tientrahangthang * sothang;
    double tonglai = tongtragop - tienvay;
    double tongtientra = sotientratruoc + tongtragop;
    printf("Tong so tien phai tra gop: %.0lf VND\n",tongtragop);
    printf("Tong lai phai tra: %.0lf VND\n",tonglai);
    printf("Tong tien phai tra: %.0lf VND\n",tongtientra);
    printf("Chenh lech so voi gia xe: %.0lf VND\n",tongtientra - giaxe);  
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
            printf("\n===BAN DA CHON CHUC NANG KIEM TRA SO NGUYEN.===\n");
            kiemtrasoN();
            printf("\n\nNhan Enter de next...");
            getchar();  // Đọc ký tự newline còn sót
            getchar();  // Chờ nhấn Enter
            break;
        }
        case 2:{
            printf("\n===BAN DA CHON CHUC NANG TIM UOC CHUNG VA BOI CHUNG CUA HAI SO.===\n");
            timuocboichung();
            printf("\n\nNhan Enter de next...");
            getchar();
            getchar();
            break;
        }
        case 3:{
            printf("\n===BAN DA CHON CHUC NANG TINH TIEN CHO QUAN KARAOKE.====\n");
            tinhtienKaraoke();
            printf("\n\nNhan Enter de next...");
            getchar();
            getchar();
            break;
        }
        case 4:{
            printf("\n===BAN DA CHON CHUC NANG TINH TIEN DIEN.===\n");
            tinhtienDien();
            printf("\n\nNhan Enter de next...");
            getchar();
            getchar();
            break;
        }
        case 5:{
            printf("\n===BAN DA CHON CHUC NANG DOI TIEN.===\n");
            doiTien();
            printf("\n\nNhan Enter de next...");
            getchar();
            getchar();
            break;
        }
        case 6:{
            printf("\n===BAN DA CHON CHUC NANG TINH LAI SUAT VAY NGAN HANG VAY TRA GOP.===\n");
            tinhlaisuatVay();
            printf("\n\nNhan Enter de next...");
            getchar();
            getchar();
            break;
        }
        case 7:{
            printf("\n===BAN DA CHON CHUC NANG VAY TIEN MUA XE.===\n");
            vaytienmuaxe();
            printf("\n\nNhan Enter de next...");
            getchar();
            getchar();
            break;
        }
        case 8:{
            printf("\n===BAN DA CHON CHUC NANG SAP XEP THONG TIN SINH VIEN.===\n");
            printf("\n\nNhan Enter de next...");
            getchar();
            getchar();
            break;
        }
        case 9:{
            printf("\n===BAN DA CHON CHUONG TRINH GAME FPOLY-LOTT(2/15).===\n");
            printf("\n\nNhan Enter de next...");
            getchar();
            getchar();
            break;
        }
        case 10:{
            printf("\n===BAN DA CHON CHUC NANG TINH TOAN PHAN SO.===\n");
            printf("\n\nNhan Enter de next...");
            getchar();
            getchar();
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