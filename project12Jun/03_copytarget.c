#include<stdio.h>
int copystri(char *str, char *str1){
int i=0;

while(str[i]!='\0'){
str1[i]= str[i]; 
i++;

}
    str1[i] = '\0'; // to take null value
}



int main(){
    char str[10];
    char str1[10];
    printf("Enter the string");
    scanf("%s", str);
    copystri(str, str1);
    printf("Entered string %s", str);
    printf("Copied string %s ", str1);
return 0;
}