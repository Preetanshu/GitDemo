#include<stdio.h>
 
int main(){
    int n, fac=1, i=1;
     printf("Enter the number");
     scanf("%d", &n);
    //  for(i=(fac-1); i>0;i--){
    //  fac=fac*i;
    //   } 
    
      while(i<=n){
           fac=fac*i;  
          
         i++;
      }
      printf("%d", fac);
     
return 0;
}