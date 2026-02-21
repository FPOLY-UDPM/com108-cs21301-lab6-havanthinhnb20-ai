/******************************************************************************
 * Họ và tên: [Hà Văn Thịnh]
 * MSSV:      [PS49131]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
int main(){
    int i,j,n,m;
    printf("xin nhap vao so hang n:");
    scanf("%d",&n);
    printf("xin nhap vao so cot m:");
    scanf("%d",&m);
    int arr_4[n][m];
   for(i=0;i<n;i++) {
        for(j=0;j<m;j++){
            printf("xin mời nhập vào phần tử [%d][%d]: ",i,j);
            scanf("%d",&arr_4[i][j]);
        }
    }
    printf("ma trận bình phương là: \n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++){
            printf("%d ",arr_4[i][j]*arr_4[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}