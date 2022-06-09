#include<stdio.h>

int main(){
    int fac, n;
    printf("Enter the fac number");
    scanf("%d", &n);
   if(n>0)
   {
        fac= n*(n-1);
        n--;
   } 
   
   else
   {
        printf("0");
   }
     printf( "Factorial is %d" , fac);
    
return 0;
}