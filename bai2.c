/******************************************************************************
 * Họ và tên: [Hà Văn Thịnh]
 * MSSV:      [PS49131]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
int main(){
    int i,n;
    printf("xin nhap vao n:");
    scanf("%d",&n);
    int arr_2[n];
   for(i=0;i<n;i++) {
        printf("xin mời nhập vào số %d: ",i);
        scanf("%d",&arr_2[i]);
    }
    int max=arr_2[0];
    int min=arr_2[0];
    for(i=1;i<n;i++){
        if(arr_2[i]>max){
            max=arr_2[i];
        }
        if(arr_2[i]<min){
            min=arr_2[i];
        }
    }
    printf("giá trị lớn nhất là %d\n",max);
    printf("giá trị nhỏ nhất là %d\n",min);
   
    return 0;
}