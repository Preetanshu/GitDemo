#include<stdio.h>

int main(){
       
       int  n, i, prime;
       printf("Enter the number");
       scanf("%d" ,&n);
       for(i=2;i<n;i++){
       if (n%i==0){
          prime=1;
       }
       }
       if(prime==1 && n!=2 && n!=1){
           printf("Number is not prime number");
       }
       
else{
    printf("Number is  prime number");
}

return 0;
}