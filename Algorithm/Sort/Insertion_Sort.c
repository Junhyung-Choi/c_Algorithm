/**
* Brifely explicate method
* 
* @ param int a // Explain about method's parameters
* @ return // Explain about what method return
* @ exception // Explain about exception
*/
#include <stdio.h>
void insertion_sort(int* arr, int len);
int main(void){
    int arr[9] = {5,3,4,7,2,8,6,9,1};
    insertion_sort(arr,9);
    for(int i=0; i<9; ++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertion_sort(int* arr, int len){
    int tmp;
    for (int i=0;i<len-1;++i){
        for (int j= i+1;j<len;++j){
            if(arr[i] > arr[j]){
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}
