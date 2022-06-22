#include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("getc.txt", "r");
    char c = fgetc(ptr);
    // while(c!=EOF){
    //       printf("%c",c); //PRINT one character
    //       c = fgetc(ptr); //take next character
    // }
    //or
    while(c!=EOF){
         if(c==EOF){
    break;
    }
    else{
        printf("%c",c); //PRINT one character
          c = fgetc(ptr);
    }
    }



fclose(ptr);

return 0;
}