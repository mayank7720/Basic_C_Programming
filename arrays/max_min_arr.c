//find maximum and minimum element in arr
#include <stdio.h>


int main(){
    int arr[100];
    int i,n,max,min;
    
    printf("enter the size of arr:");
    scanf("%d",&n);

    printf("Enter %d elements of arr: ",n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1;i<n;i++){
        
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("maximum element = %d\n",max);
    printf("minimum element = %d\n",min);

    return 0;
}

