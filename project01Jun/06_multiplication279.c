#include<stdio.h>
void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d is :\n", num);
    for(int i=1; i<=n; i++){
        mulTable[i] = num*(i);
        printf("%dX%d = %d\n", num, i, mulTable[i]);
         
    }

 
    printf("******************************************************\n\n");
}

int main(){
    int mulTable[3][10];
    
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);

    return 0;
}