#include<stdio.h>
 int temperature(int Celsius);


int main(){
int Celsius;
printf("Enter the temperature in Celsius");
scanf("%d" , &Celsius);
printf("Temperature in Farenhit is %d" , temperature(Celsius));
return 0;
}
 
    
 int temperature(int Celsius){
// int Fahrenhit;
// Fahrenhit = ((Celsius*1.8)+32);
// return Fahrenhit;
return ((Celsius*1.8)+32);
 } 