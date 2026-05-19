//To add elements in arr
#include <stdio.h>

int main() {
    int arr[100];
    int i,n,sum=0;

    printf("enter the size : ");
    scanf("%d",&n);

    printf("Enter %d elements in the array : ", n);

    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
    sum += arr[i];
    }
    printf("Sum of all elements are %d: ",sum);
    return 0;
}