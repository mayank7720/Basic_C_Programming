//Print negative no in arr
#include <stdio.h>

int main() {
    int arr[100];
    int i,n;

    printf("enter the size : ");
    scanf("%d",&n);

    printf("Enter %d elements in the array : ", n);

    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nelements in the array are: ");

    for(i=0;i<n;i++){
        if(arr[i] < 0){
        printf("%d, ",arr[i]);
    }
}
    return 0;
}