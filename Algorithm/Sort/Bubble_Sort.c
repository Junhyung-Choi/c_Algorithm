/**
* Compare and exchange neighboring objects from end to end.
* Repeat just before the end of before's iteration until the array is sorted 
*
* @ int arr[11] // Unsorted Array
* @ int tmp // Temporary space to exchange each others.
*/
#include <stdio.h>

int printarr(int* arr, int len);

int main(void){
    int arr[11] = {5,9,3,1,2,8,4,13,7,6,15};
    int tmp = 0;
    int len = 11;

    for(int i = 0; i < len; ++i){
        for (int j = len -1; j > i; --j){
            if (arr[j] < arr[j-1]){
                tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
        }
    }
    printarr(arr,len);
    return 0;
}

int printarr(int *arr,int len){
    for (int i = 0; i < len; i++)    // Iterate over the length of the array
    {
        printf("%d ", arr[i]);    // Indicate i to Array's index 
    }
    printf("\n");
}
