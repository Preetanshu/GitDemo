
#include<stdio.h>

int main(){
    int i;
    
  for(i=0;i<10;i++)
    {
    
     if(i!=5)
     //if(i==5) (output= 012346789)
     {
         continue;
     }
     else{
          printf("%d\n", i);
     }
     
    }
return 0;
}