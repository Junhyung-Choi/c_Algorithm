#include <stdio.h>
int main(void){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int len = 10;
    int start = 0;
    int end = len-1;
    int mid;
    int target;
    int index = 999;
    scanf("%d",&target);
    while(end - start >=0){
        mid = (start + end) / 2;
        if (arr[mid] == target){
            index = mid;
        }
        else if(arr[mid] < target){
            end = mid-1;
        }
        else if(arr[mid] > target){
            start = mid+1;
        }
    }
    if(index == 999){
        printf("Couldn't find the number\n");
    }else{
        printf("The number is at %d",index);
    }

}
