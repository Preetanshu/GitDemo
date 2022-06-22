#include<stdio.h>

int main(){
     char name1[50], name2[50];
    int salary1, salary2;
    FILE *ptr;
 
     ptr= fopen("output.txt","w");
 
    printf("Enter the name 1 and salary 1");
    scanf("%s %d", &name1, &salary1);
 
    printf("Enter the name2 and salary2");
    scanf("%s %d", &name2, &salary2);
 
    fprintf(ptr, "%s, %d\n", name1, salary1);
    fprintf(ptr, "%s, %d", name2, salary2);
return 0;
}