#include <stdio.h>
#include <string.h>
#define LUONG_CB 1500000
#define NGAY_QD 25
typedef struct {
    char ma[10], ten[50];
    int ngay;
    float luong;
}nhanvien;
// Hàm sắp xếp theo thứ tự tăng dần (sắp xếp theo mã NV)
void sapXepTangDan(nhanvien nv[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(nv[i].ma, nv[j].ma) > 0) {
                // Hoán đổi vị trí
                nhanvien temp = nv[i];
                nv[i] = nv[j];
                nv[j] = temp;
            }
        }
    }
}
int main() {
    nhanvien nv[5];
    // BÀI 1: Nhập 5 nhân viên
    printf("NHAP THONG TIN 5 NHAN VIEN:\n");
    for(int i = 0; i < 5; i++) {
        printf("\nNhan vien thu %d:\n", i+1);
        printf("Ma NV: ");
        scanf("%s", nv[i].ma);
        getchar();
        printf("Ho ten: "); 
        gets(nv[i].ten);
        printf("So ngay cong: "); 
        scanf("%d", &nv[i].ngay);
        // Tính lương
        if(nv[i].ngay < NGAY_QD) 
            nv[i].luong = LUONG_CB * (1 - (NGAY_QD - nv[i].ngay) * 0.1);
        else if(nv[i].ngay > NGAY_QD) 
            nv[i].luong = LUONG_CB + (LUONG_CB / NGAY_QD) * 2 * (nv[i].ngay - NGAY_QD);
        else 
            nv[i].luong = LUONG_CB;
    }
    // BÀI 2: Sắp xếp theo thứ tự tăng dần (theo mã NV)
    sapXepTangDan(nv, 5);
    // Xuất danh sách đã sắp xếp
    printf("\n\nDANH SACH NHAN VIEN (SAP XEP TANG DAN THEO MA NV):\n");
    printf("MANV     HoTen                SoNgayCong    Luong\n");
    printf("---------------------------------------------------\n");
    for(int i = 0; i < 5; i++) {
        printf("%-8s %-20s %-12d %-12.0f\n", 
               nv[i].ma, nv[i].ten, nv[i].ngay, nv[i].luong);
    }
    
    return 0;
}