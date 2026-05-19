/* Extracted commented content from: online/online.c */

/* --- CODE comment starting at line 1 (line) --- */
#include <stdio.h>

/* --- CODE comment starting at line 3 (line) --- */
int main(){
int a,b;
printf("enter the value of a,b\n");
scanf("%d %d",&a,&b);
printf("sum is %d",a+b);
return 0;

/* --- NOTE comment starting at line 10 (line) --- */
}

/* --- CODE comment starting at line 12 (line) --- */
#include <stdio.h>
int main(){
int a,b;
printf("enter a,b \n");
scanf("%d%d",&a,&b);
printf("operations are %d\n",a+b );
printf("operations are %d\n",a*b);
printf("operations are %d\n",a/b);
printf("operations are %d\n",a-b);
return 0;

/* --- NOTE comment starting at line 23 (line) --- */
}

/* --- CODE comment starting at line 25 (line) --- */
#include <stdio.h>
int main(){
int l,b;
printf("enter length and breadth");
scanf("%d%d",&l,&b);
int p=2*(l+b);
printf("perimeter of rectangle %d",p);
return 0;

/* --- NOTE comment starting at line 34 (line) --- */
}

/* --- CODE comment starting at line 40 (line) --- */
#include <stdio.h>
int main(){
int r;
printf("enter radius");
scanf("%d",&r);
int d=2*r;
printf("diameter is %d\n",d);
float p=2*3.14*r;
printf("circumference is %f\n",p);
float a=3.14*r*r;
printf("area is %f",a);

/* --- NOTE comment starting at line 52 (line) --- */
}

/* --- CODE comment starting at line 56 (line) --- */
#include <stdio.h>
int main(){
float a;
printf("enter length \n");
scanf("%f",&a);
float m=a/1000;
float k=m/1000;
printf("measurment is %f\n",m);
printf("measurment is %f",k);
}

/* --- CODE comment starting at line 67 (line) --- */
#include <stdio.h>
int main(){
float c;
printf("enter degree in celcius\n");
scanf("%f",&c);
float f = (c*9/5)+32;
printf("degree in fahrenheit is %f",f);
}

/* --- CODE comment starting at line 76 (line) --- */
#include <stdio.h>
int main(){
float f;
printf("enter degree in fahrenheit\n");
scanf("%f",&f);
float c = (f-32)*5/9;
printf("degree in celcius is %f",c);
}

/* --- CODE comment starting at line 85 (line) --- */
#include <stdio.h>
int main(){
int days , years , weeks;
printf("enter no of days\n");
scanf("%d",&days);
years = (days/365);
weeks = (days % 365)/7;
days = days - ((years*365)+(weeks*7));

/* --- CODE comment starting at line 94 (line) --- */
printf("years %d \n",years);
printf("weeks %d \n",weeks);
printf("days %d ",days);

/* --- NOTE comment starting at line 99 (line) --- */
}
