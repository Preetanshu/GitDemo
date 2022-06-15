#include<stdio.h>
void encryasci(char *str){
    int i=0;
while(str[i]!='\0'){
     ++str[i];
     i++;
}}

int main(){
    char st[10];
    printf("Enter string");
    //scanf("%s", st);
    gets(st);
    encryasci(st); 
      printf("Ascii value of character %s", st);
return 0;
}