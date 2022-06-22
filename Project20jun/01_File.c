#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
     ptr= fopen("sample.txt" , "r");
   // ptr= fopen ("sample.txt" , "w");
   if(ptr== NULL){
    printf("The file doesnt exit");
   }
   else{
     fscanf(ptr, "%d", &num);
     fscanf(ptr, "%d", &num2);
     fclose(ptr);
     printf("The num is %d\n", num);
     printf("The num is %d\n", num2);
   }

return 0;
}