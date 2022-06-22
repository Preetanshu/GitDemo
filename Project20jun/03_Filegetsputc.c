#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr= fopen("getc.txt", "r");
    // printf("The characters are %c",fgetc(ptr));
    //   printf("The characters are %c",fgetc(ptr));
    //     printf("The characters are %c",fgetc(ptr));
    //       printf("The characters are %c",fgetc(ptr));



ptr= fopen("putc.txt", "w");
putc('c',ptr);
fclose(ptr);

return 0;
}