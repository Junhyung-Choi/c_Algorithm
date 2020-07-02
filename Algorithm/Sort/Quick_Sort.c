/**
* Brifely explicate method
* 
* @ param int a // Explain about method's parameters
* @ return // Explain about what method return
* @ exception // Explain about exception
*/
#include <stdio.h>

int arr[10] = {1,4,5,8,7,2,3,6,0,9};
int quick_sort(int* arr,int left, int right){
    if (left>=right){
        return 0;
    }
    int pivot = left;
    int i = pivot + 1;
    int j = right;
    int tmp;
    while(i<=j){
        while(i<=right && arr[i] <= arr[pivot]){
            ++i;
        }
        while(j>left && arr[j] >= arr[pivot]){
            --j;
        }
        if (i>j){
            tmp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = tmp;
        }else{
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    quick_sort(arr,left,j-1);
    quick_sort(arr,j+1,right);
}

int main(void){ 
    quick_sort(arr, 0, 9);
    for(int i=0; i<10; i++){ 
        printf("%d ", arr[i]); 
    } 
    printf("\n");
    return 0; 
}
