#include<stdio.h>

int main(){
    //97-122 = ASCII value for lower case
    char ch;
    printf("Enter the Character");
    scanf("%c", &ch);
    if(ch<=122 && ch>=97){
        printf("Character is lowercase");
    }
    else{
        printf("Character is uppercase");
    }

    
return 0;
}