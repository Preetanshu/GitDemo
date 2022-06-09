#include <stdio.h>
int main()
{

    int max; //total marks of single subject
    printf("Enter total marks of single subject \n");
    scanf("%d", &max);
    int A, B,C;

    printf("Enter the received marks of A \n");
    scanf("%d", &A);
     printf("Enter the received marks of B \n");
    scanf("%d", &B);
     printf("Enter the received marks of C \n");
    scanf("%d", &C);

    if ( ((A*100)/max)>33 ){
    printf("You are passed in A \n");
    }

    else{
        printf("You are failed in A \n");
    }

   if (((B*100)/max)>33){
       printf("You are passed in B \n");
    }

    else{
        printf("You are failed in B \n");
    
    }

      if  (((C*100)/max)>33 ){
    printf("You are passed in C \n");
    }

    else{
        printf("You are failed in C \n");
    }

      int total = (A+B+C)/3;
   
       if(((total*100)/max)>=40)
    {
     
     printf("You are passed \n ");
    }

       else{
        printf("You are failed \n ");


}












    return 0;
}