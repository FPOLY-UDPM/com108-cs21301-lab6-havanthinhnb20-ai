/******************************************************************************
 * Họ và tên: [Hà Văn Thịnh]
 * MSSV:      [PS49131]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
int main(){
    int i,n;
    printf("xin nhap vao n:");
    scanf("%d",&n);
    int arr_3[n];
   for(i=0;i<n;i++) {
        printf("xin mời nhập vào số %d: ",i);
        scanf("%d",&arr_3[i]);
    }
    int temp;
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr_3[i]<arr_3[j]){
                temp=arr_3[i];
                arr_3[i]=arr_3[j];
                arr_3[j]=temp;
            }
        }
    }
    printf("mảng đã sắp xếp theo thứ tự giảm dần là: ");
    for(i=0;i<n;i++){
        printf("%d ",arr_3[i]);
    }
   
    return 0;
}