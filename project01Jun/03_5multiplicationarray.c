#include<stdio.h>

int main(){
    int arr[10];
    int i,j;
    // directly for 5
     for(i=1;i<=10;i++){
         arr[i]=(5*i);
        printf("The value of 5X%d is %d\n", i, arr[i]);
        }
//input through user
int n;
printf("Enter the no which wil be multiplied");
scanf("%d", &n);
for(i=1;i<=10;i++){
        arr[i]= (n*i);
        printf("The value of %dX%d is %d\n",n, i, arr[i]);
       
        }


return 0;
}