#include<stdio.h>
void printaddr(int a);

int main(){
    int i=2;
    int *j;
    j=&i;
//printf("Address of i is %d", j);
//printf("Value of i is %d", *j);
printf("Address of i is %d\n", i);
printaddr(i);
printf("Value of i is %d\n", &i);
return 0;
}

void printaddr(int a)
{
  
    printf("Address of a is %d", &a);

}