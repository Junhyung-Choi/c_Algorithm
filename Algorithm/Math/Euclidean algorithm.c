#include <stdio.h>

int main(void){
    int a,b,gcd,tmp;
    scanf("%d %d",&a,&b);
    while (a % b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    printf("%d\n",b);
}