#include<stdio.h>

int main(){
    int year;
   printf("Enter Years");
   scanf("%d", &year);

    
//   if(year % 100==0)
//         {
//                 if(year % 400==0)
//                  {
//              printf("Year is leap");
//                  }
//              else{
//           printf("Year is not");
//                  }
            
//          }
//          else {
//          if (year % 4==0)
    
//          {
//             printf("Year is leap");
//          }
    
//        else{
//              printf("Year is not leap");
//            }     
      
//          }

if(year % 4==0||year % 400==0)
        {
                
             printf("Year is leap");
                 }
             else{
          printf("Year is not");
                 }
            
         
         

     
return 0;
}