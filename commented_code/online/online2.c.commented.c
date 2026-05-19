/* Extracted commented content from: online/online2.c */

/* --- CODE comment starting at line 1 (line) --- */
#include <stdio.h>
int main(){
int a;
printf("enter a\n");
scanf("%d",&a);

/* --- CODE comment starting at line 7 (line) --- */
if (a>0){
printf("Positive");
}
else if (a<0){
printf("Negative");
}
else {
printf("Zero");
}
}

/* --- CODE comment starting at line 19 (line) --- */
#include <stdio.h>
int main(){
int a;
printf("enter a");
scanf("%d",&a);

/* --- CODE comment starting at line 25 (line) --- */
if ((a % 5 == 0) && (a % 11 == 0)){
printf("divisible by 5 and 11");
}
else{
printf("not divisible by 5 and 11");
}
}

/* --- CODE comment starting at line 34 (line) --- */
#include <stdio.h>
int main(){
int a;
printf("enter a");
scanf("%d",&a);

/* --- CODE comment starting at line 40 (line) --- */
if (a % 2 == 0){
printf("even");
}
else{
printf("odd");
}
}

/* --- CODE comment starting at line 49 (line) --- */
#include <stdio.h>
int main(){
char ch;
printf("enter character");
scanf("%c",&ch);

/* --- CODE comment starting at line 55 (line) --- */
if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') 
|| (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')){
printf("vowel");
}
else{
printf("consonent");
}
}

/* --- CODE comment starting at line 65 (line) --- */
#include <stdio.h>
int main(){
char ch;
printf("enter character");
scanf("%c",&ch);

/* --- CODE comment starting at line 71 (line) --- */
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
printf("alphabet");
}
else if (ch >= '0' && ch <= '9'){
printf("digits");
}
else{
printf("special char");
}
}

/* --- CODE comment starting at line 83 (line) --- */
#include <stdio.h>
int main(){
char ch;
printf("enter character");
scanf("%c",&ch);

/* --- CODE comment starting at line 89 (line) --- */
if (ch >= 'A' && ch <= 'Z'){
printf("'%c'upper case",ch);
}
else{
printf("lower case");
}
}

/* --- CODE comment starting at line 99 (line) --- */
#include <stdio.h>
int main(){
int w;
printf("enter w no");
scanf("%d",&w);

/* --- CODE comment starting at line 105 (line) --- */
if (w == 1){
printf("Monday");
}
else if (w == 1){
printf("Monday");
}
else if (w == 2){
printf("Tuesday");
}

/* --- CODE comment starting at line 115 (line) --- */
else if (w == 7){
printf("Sunday");
}

/* --- CODE comment starting at line 119 (line) --- */
else if (w == 3){
printf("Wednesday");
}

/* --- CODE comment starting at line 124 (line) --- */
else if (w == 4){
printf("Thursday");
}

/* --- CODE comment starting at line 128 (line) --- */
else if (w == 5){
printf("Friday");
}
else if (w == 6){
printf("Saturday");
}
else {
printf("invalid ");
}
}

/* --- CODE comment starting at line 140 (line) --- */
#include <stdio.h>
int main(){
int m;
printf("input month no");
scanf("%d",&m);

/* --- CODE comment starting at line 146 (line) --- */
if ((m == 1) || (m == 3) || (m == 8) || (m == 5) || (m == 7) || (m == 9) || (m == 11)){
printf("31 days");
}
else if ((m == 4) || (m == 6) || (m == 10) || (m == 12)){
printf("30 days");
}
else if (m == 2){
printf("28/29 days");
}
else {
printf("invalid input");
}
}

/* --- CODE comment starting at line 161 (line) --- */
#include <stdio.h>
int main(){
int  amount ,note500 = 0,note200 = 0,note100 = 0,note50 = 0,note20 = 0,note10 =0,note5 = 0,note2 = 0,note1 = 0;

/* --- CODE comment starting at line 165 (line) --- */
printf("enter amount");
scanf("%d",&amount);

/* --- CODE comment starting at line 168 (line) --- */
if (amount >= 500) {
note500 = amount/500;
amount = amount % 500;
}
if(amount >= 200 && amount<500){
note200 = amount/200;
amount = amount % 200;
}
if(amount >= 100 && amount <200){
note100 = amount/100;
amount = amount % 100;
}
if(amount >= 50 && amount<100){
note50 = amount/50;
amount = amount % 50;
}
if(amount >= 20 && amount <50){
note20 = amount/20;
amount = amount % 20;
}
if(amount >= 10&& amount < 20){
note10 = amount/10;
amount = amount % 10;
}
if(amount >= 5 && amount < 10){
note5 = amount/5;
amount = amount % 5;
}
if(amount >= 2 && amount <5){
note2 = amount/2;
amount = amount % 2;
}
if(amount >= 1 && amount < 2){
note1 = amount/1;
amount = amount % 1;
}
printf("total no of notes : \n");
printf("500 = %d\n",note500);
printf("200 = %d\n",note200);
printf("100 = %d\n",note100);
printf("50 = %d\n",note50);
printf("20 = %d\n",note20);
printf("10 = %d\n",note10);
printf("5 = %d\n",note5);
printf("2 = %d\n",note2);
printf("1 = %d\n",note1);

/* --- NOTE comment starting at line 216 (line) --- */
}

/* --- CODE comment starting at line 219 (line) --- */
#include <stdio.h>
int main(){
int a,b,c;
printf("enter a,b,c \n");
scanf("%d%d%d",&a,&b,&c);

/* --- CODE comment starting at line 225 (line) --- */
if(180 == a+b+c){
printf("valid triangle");
}
else{
printf("invalid triangle");
}
}

/* --- CODE comment starting at line 237 (line) --- */
int main (){
int m;
printf("enter the no : ");
scanf("%d",&m);

/* --- CODE comment starting at line 242 (line) --- */
if (m > 0 && m < 11) {
for (int i = 1; i <= m; i++){
for (int j = 1; j <= i; j++){
printf ("*");
}
printf("\n");

/* --- CODE comment starting at line 249 (line) --- */
}
}
else {
printf("Invalid Statement");

/* --- CODE comment starting at line 254 (line) --- */
}
return 0;
}

/* --- CODE comment starting at line 259 (line) --- */
#include <stdio.h>

/* --- CODE comment starting at line 261 (line) --- */
int main (){
int m;
printf("enter the no : ");
scanf("%d",&m);

/* --- CODE comment starting at line 266 (line) --- */
if (m > 0 && m < 11) {
for (int i = m; i >= 1; i--){
for (int j = 1; j <= i; j++){
printf ("*");
}
printf("\n");

/* --- CODE comment starting at line 273 (line) --- */
}
}
else {
printf("Invalid Statement");

/* --- CODE comment starting at line 278 (line) --- */
}
return 0;
}

/* --- CODE comment starting at line 282 (line) --- */
#include <stdio.h>
int main(){
int a,b,c;
printf("enter value");
scanf("%d%d%d",&a,&b,&c);

/* --- CODE comment starting at line 288 (line) --- */
if (a+b>c){
if(b+c>a){
if(c+a>b){
printf("valid triangle");
}
}
}
else{
printf("invalid triangle");
}
}

/* --- CODE comment starting at line 301 (line) --- */
#include <stdio.h>
int main(){
int a,b,c;
printf("enter value");
scanf("%d%d%d",&a,&b,&c);

/* --- CODE comment starting at line 307 (line) --- */
if(a==b&&b==c&&c==a){
printf("equilateral triangle");
}
else if(a==b||b==c||c==a){
printf("isoceleous triangle");
}
else{
printf("scalen triangle");
}

/* --- NOTE comment starting at line 317 (line) --- */
}

/* --- CODE comment starting at line 320 (line) --- */
#include <stdio.h>
int main(){
int cp,sp,amount;
printf("enter amount");
scanf("%d%d%d",&amount,&cp,&sp);

/* --- CODE comment starting at line 326 (line) --- */
if (sp>cp){
amount = sp-cp;
printf("profit: %d",amount);
}
else if(cp>sp){
amount = cp-sp;
printf("loss: %d",amount);

/* --- CODE comment starting at line 334 (line) --- */
}
else{
printf("no profit, no loss");
}
}
