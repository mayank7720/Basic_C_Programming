#include <stdio.h>

int main (){
    while(1){
    int distance ,fare;
    float discount;
    printf("enter the distance in km \n");
    scanf("%d",&distance);

    if (distance <= 5){
        fare = (distance * 10);
        
    }
    else if (distance <= 15){
        fare = ((5 * 10) + ((distance - 5) * 8));
        
    }
    else if (distance > 16){
        fare = (5 * 10) + ((10 * 8) + ((distance - 15) * 5 ));
    
    }
    if (fare > 300){
        discount = (fare * 0.9) ;
        printf("%.2f",discount);
    }
    else {
        printf("%d",fare);
    }
}
    return 0;

}

