/*#include <stdio.h>
int main(){
    int i=0,j=0;
    int matran[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    printf("ma tran:\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d",matran[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
#include <stdio.h>
#define M 50
#define N 50
//dinh nghia ham
//hàm nhập mảng
void nhapmang2chieu(int a[M][N],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Nhapmang:a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
//hàm xuất mảng
void xuatmang2chieu(int a[M][N],int m,int n){
    printf("Mang 2 chieu:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}   
//hàm tính chia hết cho 3
int sochiahetcho3(int a[M][N],int m,int n){
    int dem=0;
    printf("\nCac phan tu chia het cho 3:");
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]%3==0){
                printf("%d",a[i][j]);
                dem++;
            }
        }
    }
    if(dem == 0){
        printf("Khong co so nao chia het cho 3!");
    }
    return dem; //ttra ve so luong 
}
int main(){
    int m,n;
    int a[M][N];
    printf("Nhap so hang m: ");
    scanf("%d",&m);
    printf("Nhap so cot n: ");
    scanf("%d",&n);
    nhapmang2chieu(a,m,n);
    xuatmang2chieu(a,m,n);
    int kq=sochiahetcho3(a,m,n);
    printf("\nso phan tu chia het cho 3:%d",kq);
    return 0;
}
