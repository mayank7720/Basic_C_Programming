// //Find max and min array element
// #include <stdio.h>
// int main() {
//     int a[100], n, i, max, min;
//     scanf("%d", &n);
//     for(i=0;i<n;i++) 
//         scanf("%d",&a[i]);
//     max=min=a[0];
//     for(i=1;i<n;i++){
//         if(a[i]>max) max=a[i];
//         if(a[i]<min) min=a[i];
//     }
//     printf("Max=%d Min=%d", max, min);
//  }
// //count frequency of each number
// #include <stdio.h>
// int main() {
//     int a[100], freq[100]={0}, n, i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         freq[a[i]]++;
//     }
//     for(i=0;i<100;i++)
//         if(freq[i]>0)
//             printf("%d → %d times\n", i, freq[i]);
// }
// //Decimal to octal
// #include <stdio.h>
// int main() {
//     int n, oct=0, p=1;
//     scanf("%d",&n);
//     while(n>0){
//         oct += (n%8)*p;
//         n/=8;
//         p*=10;
//     }
//     printf("Octal = %d", oct);
// }

// //Armstrong Numbers in Array
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a[50], n, i, t, sum, d;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);

//     for(i=0;i<n;i++){
//         t=a[i]; sum=0;
//         while(t){
//             d=t%10;
//             sum+=d*d*d;
//             t/=10;
//         }
//         if(sum==a[i]) printf("%d ", a[i]);
//     }
// }

// //Separate +ve -ve zero
// #include <stdio.h>
// int main(){
//     int a[50], n, i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);

//     printf("Positive: ");
//     for(i=0;i<n;i++) if(a[i]>0) printf("%d ",a[i]);

//     printf("\nNegative: ");
//     for(i=0;i<n;i++) if(a[i]<0) printf("%d ",a[i]);

//     printf("\nZeroes: ");
//     for(i=0;i<n;i++) if(a[i]==0) printf("%d ",a[i]);
// }

// //Reverse Array
// #include <stdio.h>
// int main(){
//     int a[50], n, i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);

//     for(i=n-1;i>=0;i--) printf("%d ", a[i]);
// }

// //Sum of 10 integer
// #include <stdio.h>
// int main(){
//     int i, x, sum=0;
//     for(i=0;i<10;i++){
//         scanf("%d",&x);
//         sum+=x;
//     }
//     printf("Sum=%d", sum);
// }

// //Compare sum of elements
// #include <stdio.h>
// int main(){
//     int a[50], n, i, s1=0, s2=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     for(i=0;i<n;i+=2) s1+=a[i];
//     for(i=1;i<n;i+=2) s2+=a[i];
//     if(s1>s2) printf("Even index sum greater");
//     else printf("Odd index sum greater");
// }

// //Sum of even no
// #include <stdio.h>
// int main(){
//     int a[50], n, i, sum=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         if(a[i]%2==0) sum+=a[i];
//     }
//     printf("%d", sum);
// }

// //Print odd no
// #include <stdio.h>
// int main(){
//     int a[50], n, i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     for(i=0;i<n;i++) if(a[i]%2!=0) printf("%d ", a[i]);
// }

// //Sum & Average
// #include <stdio.h>
// int main(){
//     int a[50], n, i, sum=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         sum+=a[i];
//     }
//     printf("Sum=%d Avg=%.2f", sum, sum/(float)n);
// }

// //Search Number
// #include <stdio.h>
// int main(){
//     int a[50], n, i, key, flag=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     scanf("%d",&key);
//     for(i=0;i<n;i++) if(a[i]==key) flag=1;
//     if(flag) printf("Found");
//     else printf("Not Found");
// }


// //Sort Assending
// #include <stdio.h>
// int main(){
//     int a[50], n, i, j, t;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//         for(j=i+1;j<n;j++)
//             if(a[i]>a[j]){
//                 t=a[i]; a[i]=a[j]; a[j]=t;
//             }
//     for(i=0;i<n;i++) printf("%d ",a[i]);
// }


// //Count Occurrence
// #include <stdio.h>
// int main(){
//     int a[50], n, i, x, count=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     scanf("%d",&x);
//     for(i=0;i<n;i++) if(a[i]==x) count++;
//     printf("%d", count);
// }

// //Store and display prime no
// #include <stdio.h>
// int isPrime(int n){
//     if(n<2) return 0;
//     for(int i=2;i*i<=n;i++)
//         if(n%i==0) return 0;
//     return 1;
// }
// int main(){
//     int a[50], n, i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//         if(isPrime(a[i])) printf("%d ", a[i]);
// }

// //Sort Descending
// #include <stdio.h>
// int main(){
//     int a[50], n, i, j, t;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//         for(j=i+1;j<n;j++)
//             if(a[i]<a[j]){
//                 t=a[i]; a[i]=a[j]; a[j]=t;
//             }
//     for(i=0;i<n;i++) printf("%d ",a[i]);
// }

// //Print largest sum (pair sum)
// #include <stdio.h>
// int main(){
//     int a[50], n, i, maxsum=-9999;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     for(i=0;i<n-1;i++)
//         if(a[i]+a[i+1] > maxsum)
//             maxsum = a[i] + a[i+1];
//     printf("Largest pair sum = %d", maxsum);
// }

// //Print 2D array
// #include <stdio.h>
// int main(){
//     int a[10][10], r, c, i, j;
//     scanf("%d%d",&r,&c);
//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//             scanf("%d",&a[i][j]);

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++)
//             printf("%d ",a[i][j]);
//         printf("\n");
//     }
// }

// //Count zero in matrix
// #include <stdio.h>
// int main(){
//     int a[10][10], r, c, i, j, count=0;
//     scanf("%d%d",&r,&c);
//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++){
//             scanf("%d",&a[i][j]);
//             if(a[i][j]==0) count++;
//         }
//     printf("%d", count);
// }

// //Sum of two matrix
// #include <stdio.h>
// int main(){
//     int a[10][10], b[10][10], s[10][10], r, c, i, j;
//     scanf("%d%d",&r,&c);

//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//             scanf("%d",&a[i][j]);

//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//             scanf("%d",&b[i][j]);

//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//             s[i][j]=a[i][j]+b[i][j];

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++) printf("%d ",s[i][j]);
//         printf("\n");
//     }
// }

// //Sum of all elements
// #include <stdio.h>
// int main(){
//     int a[10][10], r, c, i, j, sum=0;
//     scanf("%d%d",&r,&c);
//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++){
//             scanf("%d",&a[i][j]);
//             sum+=a[i][j];
//         }
//     printf("%d", sum);
// }

// //Sum of diognal elements
// #include <stdio.h>
// int main(){
//     int a[10][10], n, i, j, sum=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//         for(j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//             if(i==j) sum+=a[i][j];
//         }
//     printf("%d", sum);
// }

// //Transpose
// #include <stdio.h>
// int main(){
//     int a[10][10], t[10][10], r, c, i, j;
//     scanf("%d%d",&r,&c);
//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//             scanf("%d",&a[i][j]);

//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//             t[j][i]=a[i][j];

//     for(i=0;i<c;i++){
//         for(j=0;j<r;j++) printf("%d ",t[i][j]);
//         printf("\n");
//     }
// }

// //Sum of middle row and column 
// #include <stdio.h>
// int main(){
//     int a[10][10], n, i, j, mid, sum=0;
//     scanf("%d",&n);
//     mid = n/2;

//     for(i=0;i<n;i++)
//         for(j=0;j<n;j++)
//             scanf("%d",&a[i][j]);

//     for(j=0;j<n;j++) sum+=a[mid][j];
//     for(i=0;i<n;i++) sum+=a[i][mid];

//     sum -= a[mid][mid];
//     printf("%d", sum);
// }

// //Product of matrices
// #include <stdio.h>
// int main(){
//     int a[10][10], b[10][10], p[10][10]={0};
//     int r1,c1,r2,c2,i,j,k;

//     scanf("%d%d",&r1,&c1);
//     for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d",&a[i][j]);

//     scanf("%d%d",&r2,&c2);
//     for(i=0;i<r2;i++) for(j=0;j<c2;j++) scanf("%d",&b[i][j]);

//     if(c1!=r2){ printf("Not possible"); return 0; }

//     for(i=0;i<r1;i++)
//         for(j=0;j<c2;j++)
//             for(k=0;k<c1;k++)
//                 p[i][j] += a[i][k] * b[k][j];

//     for(i=0;i<r1;i++){
//         for(j=0;j<c2;j++) printf("%d ", p[i][j]);
//         printf("\n");
//     }
// }

// //Difference of two matrices
// #include <stdio.h>
// int main(){
//     int a[10][10], b[10][10], d[10][10], r, c, i, j;
//     scanf("%d%d",&r,&c);

//     for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
//     for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&b[i][j]);

//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//             d[i][j]=a[i][j]-b[i][j];

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++) printf("%d ",d[i][j]);
//         printf("\n");
//     }
// }


// //Sum of lower Tringular element
// #include <stdio.h>
// int main(){
//     int a[10][10], n, i, j, sum=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//         for(j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//             if(i>=j) sum+=a[i][j];
//         }
//     printf("%d",sum);
// }

// //Sum of Upper Tringular alements
   