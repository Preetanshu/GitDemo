// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     FILE *ptt;

//     ptr= fopen("getc.txt", "r");
//     ptt= fopen("twicecontent.txt" , "w");

//     char c= fgetc(ptr);
//      while(c!=EOF){
//         if(c==EOF){
//           break;
//             }
//         else{
//         printf("%c\n",c); //PRINT one character
//           fputc(c,ptt);
//           fputc(c,ptt);    //'c': characteer, c:variable which is a character
//           c = fgetc(ptr); //get another character
//            }
//     }
    
//     fclose(ptr);
//     fclose(ptt);
//     return 0;
// }


//Above is also correct
#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2; 
    ptr1 = fopen("getc.txt", "r");
    ptr2 = fopen("twicecontent.txt", "w");

    char c = fgetc(ptr1);
    while(c!=EOF){
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1); 
    fclose(ptr2); 
    return 0;
}