#include<stdio.h>
void printPattern(int n);
int main(){
    int n =3;
    printPattern(n);
    return 0;
}
// for n = 3
// *
// ***
// *****
// 1 - 1
// 2 - 3
// 3 - 5
// (2n-1)
void printPattern(int n){
    int i;
    if (n==1){
        printf("*\n");
        return;
    }
    //else
    else{
    printPattern(n-1);// just for calling function so that loop will continue. Otherwise only
    // one line will print i.e, ***** & it prints the highest priority oon the bottom i.e, *****
    for(i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
    }
    //printPattern(n-1) if this written here this will print below
    //  *****
    //  ***
   //   *
}
