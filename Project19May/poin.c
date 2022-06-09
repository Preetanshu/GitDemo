#include<stdio.h>
int  cuuvale(int a){
    a = a*10;
}

int main(){
    int i= 5;
    printf("The value of a before change is %d", i);
    cuuvale(i);
    printf("The value of a after change is %d", i);
// value wont  change as in call by value, the actual parameters wont change if former parameters change

    return 0;
}