#include<stdio.h>
void sumavg(int a, int b,int *summ, float *avg){
 
 *summ= (a +b);
 *avg=  (float) (*summ)/2;// type casting interger to float

}

int main(){
    int i, j, add; 
    float avgg;
    printf("Enter the value of i & j is");
    scanf(" %d %d", &i , &j); 
    sumavg(i, j, &add, &avgg);
     printf("Sum  is   %d %f ",  add, avgg);

   
return 0;
}

