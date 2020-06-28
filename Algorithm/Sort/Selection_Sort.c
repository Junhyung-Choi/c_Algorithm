#include <stdio.h>
int Linear_Search(int* arr,int len,int start);
int printarr(int* arr, int len);

int main(void){
    int arr[10] = {1,5,9,7,6,4,8,2,3,0};
    int len = 10;
    int target = 999;
    int minindex,tmp = 0;
    for (int i = 0 ; i < len ; ++i){
        minindex = Linear_Search(arr,10,i);
        tmp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = tmp;
    }
    printarr(arr,10);
    return 0;
}

int Linear_Search(int* arr,int len,int start){
    int i = start;
    int min = 999;
    int minindex = len+1;
    while(i<len){
        if (arr[i] <min){
            min = arr[i];
            minindex = i;
        }
        ++i;
    }
    return minindex;
}

int printarr(int *arr,int len){
    for (int i = 0; i < len; i++)    // Iterate over the length of the array
    {
        printf("%d ", arr[i]);    // Indicate i to Array's index 
    }
    printf("\n");
}