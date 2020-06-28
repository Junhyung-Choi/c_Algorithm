#include <stdio.h>

int ls(int* arr,int len,int inp){
    int i = 0;
    while(i<len){
        if (arr[i] == inp){
            return i;
        }
        ++i;
    }
    return 999;
}
int main(void){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int inp,result;
    printf("%s\n","Put numbers which you wanna find");
    scanf("%d",&inp);
    result = ls(arr,10,inp);
    printf("%d%s%d\n",inp," is at ",result);
    return 0;
}