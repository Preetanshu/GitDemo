#include<stdio.h>
struct complex {
float real;
float imaginary;
};

void display(struct complex numb){
printf("The complex number is %f + i%f \n", numb.real, numb.imaginary);
}

int main(){
   struct complex num[5];
   int i;
   for(i=0;i<5;i++){
   printf("Enter the real number");
   scanf("%f", &num[i].real);
   printf("Enter the imaginary number");
   scanf("%f", &num[i].imaginary);
   display(num[i]); 
   }
   
return 0;
}