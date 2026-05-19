//For Reversing an arr use (n - i - 1)
#include <stdio.h>

void reverse(int arr[],int n);
void printArr(int arr[],int n);

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr, 7);
    printArr(arr,7);
    return 0;   
}
void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void reverse(int arr[],int n){
    for(int i = 0;i < n/2; i++){
    int firstvalue = arr[i];
    int lastvalue = arr[n - i - 1];
    arr[i] = lastvalue;
    arr[n - i - 1] = firstvalue;
}
}