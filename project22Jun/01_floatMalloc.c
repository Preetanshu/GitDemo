#include<stdio.h>
#include <stdlib.h>

int main(){
    float *ptr;
    int i;
   // ptr= (float *)malloc(6 * sizeof(float));
 ptr= (float *)calloc(6 , sizeof(float));
    
   //  for(i=0;i<6;i++){
   //     printf("Enter the %d number: \n", i);
   //     scanf("%f", &ptr[i]);
   //     free(ptr);
   //     }

    for(i=0;i<6;i++){
       printf("The %d number is %f", i, ptr[i]);
       }

return 0;
}