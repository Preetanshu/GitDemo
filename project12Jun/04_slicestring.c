#include<stdio.h>
void slicestrng(char *str, int m, int n){
int i=0;
while((i+m)<n){
    str[i]=str[i+m];
    i++;
}   
   str[i] = '\0'; 
}

int main(){
     char str[10];
    printf("Enter the string");
    scanf("%s", str);
    slicestrng(str, 1, 4);
    printf("Value is %s", str);
return 0;
}