/* Extracted commented content from: online/online1.c */

/* --- CODE comment starting at line 1 (line) --- */
#include <stdio.h>
int main(){
int a,b;
printf("enter value of a & b\n");
scanf("%d%d",&a,&b);
if (a>b){
printf("maximum no is a");
}
else{
printf("maximum no is b");
}

/* --- CODE comment starting at line 16 (line) --- */
return 0;

/* --- NOTE comment starting at line 19 (line) --- */
}

/* --- CODE comment starting at line 22 (line) --- */
#include <stdio.h>
int main(){
int a,b,c;
printf("enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c){
printf("a is the greatest no");
}
else if (b>a && b>c){
printf("b is the greatest no");
}
else {
printf("c is the greatest mo");
}
}

/* --- CODE comment starting at line 39 (line) --- */
#include <stdio.h>
int main(){
int a;
printf("enter the value of a\n");
scanf("%d",&a);

/* --- CODE comment starting at line 45 (line) --- */
if(a % 2 == 0){
printf("a is even");
}
else{
printf("b is odd");
}
}

/* --- CODE comment starting at line 54 (line) --- */
#include <stdio.h>
int main(){
int year;
printf("enter year");
scanf("%d",&year);

/* --- CODE comment starting at line 60 (line) --- */
if (((year % 400 == 0) || (year % 4 == 0)) && (year % 100 != 100)){
printf("leap year");
}
else{
printf("not a leap year");
}
}

/* --- CODE comment starting at line 70 (line) --- */
#include <stdio.h>
int main(){
char ch;
printf("enter alphabet");
scanf("%c",&ch);

/* --- CODE comment starting at line 76 (line) --- */
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
printf("alphabet");
}
else{
printf("not alphabet");
}
}
