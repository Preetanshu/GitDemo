#include<stdio.h>

int main(){
    int A, B, C, D;
    printf("ENter the first number");
    scanf("%d", &A);
    printf("ENter the second number");
    scanf("%d", &B);
    printf("ENter the third number");
    scanf("%d", &C);
    printf("ENter the fourth number");
    scanf("%d", &D);

    if(A>B){
        if(A>C){
              if(A>D){
                    printf("%d", A);
                   }
               else{
                    printf("%d",D);
                   }         
                 }
            else {
              if(C>D){
                    printf("%d",C);
                     }
              else{
                 printf("%d",D);
                  }
        
        
        }
       
        }
     else
     {
          if(B>C){
            if(B>D){
                    printf("%d", B);
                   }
            else{
                    printf("%d",D);
                 }         
                 }
           else {
              if(C>D){
                    printf("%d",C);
                     }
              else{
                 printf("%d",D);
                  }
       
           }
     }
return 0;
}