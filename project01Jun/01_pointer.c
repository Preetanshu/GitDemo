#include<stdio.h>
int main(){
    int i=2,j=5,sum, sub, subt;
    int *k, *l;
    k= &i;
    l= &j;
    sum= i+ *k; // addition of a number to a pointer
    sub= j-*k;  //subtraction of a number to a pointer
    subt = *l-*k; //subtraction of one pointer to another
     
    printf("the value of i is%d\n", *k);
    printf("the value of sum is i %d\n",sum);
      printf("the value of sub is  i %d\n",sub);
     printf("the value of subt is  i %d\n",subt);
     if(*l>*k){ // comparison of two pointer variables
          
          printf("L is greater than K");
     }
     else{
          printf("K is greater than L");
     }
       
 return 0;
}