//
// Created by Administrator on 2023/8/14.
//

// C++实现四种排序算法以及二分查找

#include <iostream>
using namespace std;

void bubblesort(int arr[],int len);
void insertsort(int arr[],int len);
void choicesort(int arr[],int len);
void quicksort(int arr[],int start,int end);
int binarysearch(int arr[], int k, int len);
int main()
{
    int arr[] = {8,6,4,3,7,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    // bubblesort(arr,len);
    // insertsort(arr,len);
    // choicesort(arr,len);
    quicksort(arr,0,len-1);
//    for (int i = 0; i < len; ++i) {
//        cout << arr[i] << "\t" ;
//    }
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int k = 6;
    int a = binarysearch(arr1,k,len);
    cout << a << endl;

    return 0;
}
void bubblesort(int arr[],int len)
{
    for (int i = 0; i < len-1; i++) {
        for (int j = 0; j < len-1-i; j++) {
            if (arr[j]>arr[j+1])
            {
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
    }


}
void insertsort(int arr[],int len)
{
    for (int i = 0; i < len-1; i++) {
        int min = i;
        for (int j = i+1; j < len; j++) {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    }
}
void choicesort(int arr[],int len)
{
    for (int i = 0; i < len; i++) {
        int temp = arr[i];
        int index = i-1;
        while(index>=0 && temp<arr[index]){
            arr[index+1] = arr[index];
            index--;
        }
        arr[index+1] = temp;
    }

}
void quicksort(int arr[],int start,int end)
{
    if (start >= end){
        return;
    }
    int left = start;
    int right = end;
    int key = arr[left];
    while(left < right)
    {
        while (left<right && arr[left] < key)
        {
            left++;
        }
        while (left<right && arr[right] > key)
        {
            right--;
        }
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }
    key = arr[left];
    arr[left] = key;
    quicksort(arr, start,left-1);
    quicksort(arr, left+1, end);
}

int binarysearch(int arr[], int k, int len)
{
    // 必须是有序数组
    int left = 0;
    int right = len-1;
    while (left<=right)
    {
        int mid = (left+right)/2;
        if (arr[mid] == arr[k])
        {
            return mid;
        } else if (arr[mid]<arr[k])
        {
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    return -1;
}