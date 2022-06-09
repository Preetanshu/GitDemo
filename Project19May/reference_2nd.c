#include<stdio.h>
void changevar(int *a);

int main(){
    int i=10;
    printf("The value of i is %d", i);
    changevar(&i);
    printf("The value of i after change is %d", i);
    return 0;
}

void changevar(int *a){

  *a= *a*10;// value stored at a multiplied by 10
  

}