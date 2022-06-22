#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    int num;

    fscanf(ptr, "%d", &num);
    num= num*2;
    printf("%d", num);




return 0;
}