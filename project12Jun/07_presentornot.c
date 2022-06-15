#include<stdio.h>
void charcount(char *st){
int i=0,temp=0;
char ch;
printf("Enter the character eo check occurence");
scanf("%s", &ch);
while(st[i]!= '\0'){
  if(st[i]==ch){
    ++temp;
    }
i++;
}
       if(temp>0){
       printf("Character found");
       } 
       else{
        printf("Not Found");
       }
}

int main(){
//char str[]= "coincidence";
char str[50];
printf("Enter the string");
scanf("%s", str);
charcount(str);
return 0;
}