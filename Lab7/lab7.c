#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    printf("\nBAI 1: XAY DUNG CHUONG TRINH ĐEM NGUYEN AM VÀ PHU AM CUA 1 CHUOI.\n");
    char c1[100];
    printf("Nhap chuoi 1:");
    fgets(c1,sizeof(c1),stdin);
    int nguyenam=0, phuam=0;
    for (int i=0;i<strlen(c1);i++){
        //char c=tolower(c1[i]);
        char c = c1[i];
        if (( c >='a'&& c <='z') ||( c >='A' && c <='Z')){
            if ( c =='a' || c =='A' || c =='e' || c =='E' ||
                 c =='u' || c =='U' || c =='i' || c =='I' || c =='o' || c =='O')
                nguyenam++;
            else
                phuam++;
        }
    }
    printf("Nguyen am:%d\n",nguyenam);
    printf("Phu am:%d\n",phuam);

    printf("\nBAI 2: XAY DUNG CHUONG TRINH DANG NHAP BANG USERNAME AND PASSWORD\n");
    char username[50],password[50];
    char usercorrect[50] = "admin";
    char passcorrect[50] = "123456";
    
    printf("Nhap username:");
    scanf("%s",&username);
    printf("Nhap password:");
    scanf("%s",&password);

    if(strcmp(username, usercorrect)==0 && strcmp(password,passcorrect)==0){
        printf("Dang nhap thanh cong!\n");
    }else{
        printf("WRONG!!VUI LONG NHAP LAI!\n");
    }
    getchar();//Xóa '\n' còn lại trong bộ nhớ
    //Bài 3: Cho chuỗi bất kì tìm kí tự xuất hiện nhiều hơn 2 lần trong chuỗi đã nhập.
    printf("\nBAI 3: CHUOI BAT KI TIM KI TU XUAT HIEN NHIEU HON 2 LAN!\n");
    char a[100];
    printf("Nhap ki tu bat ki:");
    fgets(a,sizeof(a),stdin);
    int dem[256] = {0};
    //dem so lan xuat hien cua ki tu
    for (int i=0;a[i] != 0;i++){
        if (a[i] != '\n'){
            dem[(unsigned char)a[i]]++;
        }
    }
    printf("\nCac ki tu xuat hien hon 2 lan:\n");
    int tim =0;
    for (int i=0;i<256;i++){
        if(dem[i]>2){
            printf("'%c' xuat hien %d lan\n",i,dem[i]);
            tim =1;
        }
    }
    if(!tim){
        printf("Khong co ki tu nao xuat hien hon 2 lan!");
    }
    return 0;
}