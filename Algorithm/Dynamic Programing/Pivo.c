#include <stdio.h>

void pivo(int a);

int main(void){
    int a;
    scanf("%d",&a);
    pivo(a);
    return 0;
}

void pivo(int a){
    int f = 0,s = 1,i,result = 0;
    if (a==0){
        printf("0\n");
    }else if (a==1){
        printf("1\n");
    }else{
        for (int i = 0 ; i < a-1 ; ++i){
            result = s + f;
            f = s;
            s = result;
        }
        printf("%d\n",result);
    }

}