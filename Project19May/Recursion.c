#include<stdio.h>
int Fibonnaci(int n); 

int main(){
int n;
printf("Enter the  nth number");
scanf("%d", &n);
printf("Number is   %d" , Fibonnaci(n));
return 0;
}

int Fibonnaci(int n){
    int num;
    if(n<=1){
      return n;
    }
   /* if (n<0){
      return n;
    }
     else if(n==0){
return n;
    }
    else if(n==1){ 
return n;
    }*/
         else{
              num= Fibonnaci(n-1)+Fibonnaci(n-2);
              return num;
         }
         
         }
    
    
    

