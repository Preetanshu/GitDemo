#include<stdio.h>
struct complex {
float real;
float imaginary;
};



int main(){
   struct complex num;
   
printf("Enter the real number");
scanf("%f", &num.real);
printf("Enter the imaginary number");
scanf("%f", &num.imaginary);
    printf("The complex number is %f + *%f", num.real, num.imaginary);

    
return 0;
}