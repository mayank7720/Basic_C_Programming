#include <stdio.h>

int main() {
    int arr[100];
    int size, i ,even ,odd;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter %d elemants in the array: ",size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    even = 0;
    odd = 0;

    for(i=0;i<size;i++){
        if(arr[i]%2==0){
        even++;
    }

    else{
        odd++;
    }
}

    
    printf("Total even elements: %d\n",even);
    printf("Total odd elements: %d\n",odd);

    return 0;
}