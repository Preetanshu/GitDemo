#include<stdio.h>

int main(){
    FILE  *ptr;
    int num=20;
    ptr= fopen("New.txt", "w");
    fprintf(ptr, "The num is %d", num);
return 0;
}