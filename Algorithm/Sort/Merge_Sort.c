#include <stdio.h>
void mergeSort(int data[], int p, int r);
void merge(int data[], int p, int q, int r);
int main() {
     int data[8] = {5,8,4,7,1,3,2,6} , i; 
     for(i = 0; i < 8; i++) {
         printf("%d ", data[i]);
     }
     mergeSort(data, 0, 7);
     for(i = 0; i < 8; i++) {
         printf("%d ", data[i]);
     }
  return 0;
}
void mergeSort(int data[], int p, int r) {
    int q;
    if(p<r) {
        q = (p+r)/2;
        mergeSort(data, p , q);
        mergeSort(data, q+1, r);
        merge(data, p, q, r);
    }
}
void merge(int data[], int p, int q, int r) {
    int i = p, j = q+1, k = p;
    int tmp[8];
    while(i<=q && j<=r) {
        if(data[i] <= data[j]) tmp[k++] = data[i++];
        else tmp[k++] = data[j++];
    }
    while(i<=q) tmp[k++] = data[i++];
    while(j<=r) tmp[k++] = data[j++];
    for(int a = p; a<=r; a++) data[a] = tmp[a];
}
