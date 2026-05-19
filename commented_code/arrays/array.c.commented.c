/* Extracted commented content from: arrays/array.c */

/* --- CODE comment starting at line 1 (line) --- */
#include<stdio.h>
int main(){
int i = 0;
int array[10] = {10,20,30,40,50,60,70,80,90,100};
for(i=0;i<10;i++){
printf("%d %d \n",array[10],array[i]);
}
return 0;
}

/* --- CODE comment starting at line 12 (line) --- */
#include <stdio.h>

/* --- CODE comment starting at line 14 (line) --- */
int main() {
int i, sum =0, average;
int arrays[10] = {10,20,30,40,50,60,70,80,90,100};
for (i = 0; i < 10; i++) {

/* --- NOTE comment starting at line 19 (line) --- */
sum = arrays[i] + sum;
average = sum/10;

/* --- CODE comment starting at line 22 (line) --- */
}
printf("The sum is %d \n", sum);
printf("The average is %d", average);

/* --- NOTE comment starting at line 29 (line) --- */
}
