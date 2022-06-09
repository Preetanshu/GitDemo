#include<stdio.h>

int main(){
    int income;
    float tax;
    printf("Enter the income");
    scanf("%d", &income);
     
    //  if(income<250000)
    //  {
    //      printf("You are relieved from tax");

    //  }
    //  else{
         if(income>=250000 && income<=500000)
         {
              tax= ((5*(income-250000))/100);
      
         }
         else if(income>500000 && income<=750000)
         {
               tax= ((10*(income-500000))/100);
         }    
          else if(income>750000 && income<=1000000)
         {
               tax= ((15*(income-750000))/100);
            
         }
          else if(income>1000000 && income<1250000)
         {
               tax= ((20*(income-1000000))/100);
              
         }
          else if(income>1250000 && income<=1500000)
         {
               tax= ((25*(income-1250000))/100);
             
         }
         
         else
         {
              tax= ((30*(income-1500000))/100);
   
         }
           printf("Your income tax will be %f", tax);
     //}
    
return 0;
}