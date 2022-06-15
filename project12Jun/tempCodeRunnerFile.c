#include<stdio.h>
   void charcount(char *st){
    int i=0,j, temp=1;
    char ch, cha;
    printf("Enter the character to count occurence");
     scanf("%s", &ch);

    while(st[i]!= '\0'){
     for(i=0;i<st[i];i++){
       if(st[i]==ch){
       temp++;
       printf("%d", temp);
       } 
     }
       printf(" Count of occurence is %d", temp);
    }
    
}

int main(){
   // char str[]= "coincidence";
char str[50];
printf("Enter the string");
scanf("%s", str);
     charcount(str);
   
    
return 0;
}