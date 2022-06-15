#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Enter the character:");
    scanf("%s", str);
    // int a= strlen(str);
    // printf("%d",a);
    int i=0;
    while (str[i]!='\0'){
    ++i;
    }        
    printf("Length of string is %d",i);
return 0;
}