/******************************************************************************
 * Họ và tên: [Hà Văn Thịnh]
 * MSSV:      [PS49131]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY

#include <stdio.h>
int main(){
    int i,n;
    printf("xin nhap vao n:");
    scanf("%d",&n);
    int arr_1[n];
   for(i=0;i<n;i++) {
        printf("xin mời nhập vào số %d: ",i);
        scanf("%d",&arr_1[i]);
    }
    float tong=0;
    float Tb=0;
    int count;
    for(i=0;i<n;i++){
        if(arr_1[i]%2!=0){
            tong+= arr_1[i];
            count++;
        }
        
    }
    Tb=tong/count;
    printf("vậy kết quả là %2f",Tb);
   
    return 0;
}