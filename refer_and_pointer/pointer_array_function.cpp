#include <iostream>
void bubbleSort(int *arr, int len){
    for(int i=0; i<len; i++){
        for(int j=i; j<len; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return;
}
/* 标准冒泡排序（升序） */
// void bubbleSort(int *arr, int len) {
//     bool swapped;                       // 优化：若一趟无交换，则已有序
//     for (int i = 0; i < len - 1; ++i) { // 需要 len-1 趟
//         swapped = false;
//         for (int j = 0; j < len - 1 - i; ++j) { // 每趟末端已就位，区间逐次缩短
//             if (arr[j] > arr[j + 1]) {          // 相邻元素逆序则交换
//                 int tmp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tmp;
//                 swapped = true;
//             }
//         }
//         if (!swapped) break; // 全程无交换，提前退出
//     }
// }
int main(){
    using namespace std;
    int arr[]={7,2,8,3,6,5,4,9,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, len);
    for(int i=0; i<len; i++){
        cout << *(arr+i) <<endl;
    }
    return 0;
}