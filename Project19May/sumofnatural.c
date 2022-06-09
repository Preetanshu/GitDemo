#include<stdio.h>
int sum(int n); 

int main(){
int n;
printf("Enter the number of natural nos");
scanf("%d", &n);
printf("Sum of nos are  %d" , sum(n));
return 0;
}

int sum(int n){
    int num=0;
    if(n>0){
    num= n + sum(n-1);
    return num;
         }

    else{
    return n;
         }
    }
    
    

