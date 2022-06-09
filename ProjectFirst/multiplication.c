#include<stdio.h>

int main(){
    int n, i;
    printf("Enter the table");
    scanf("%d", &n);
   // for(i=1; i<=10; i++){ --------> correct sequence
    for(i=10; i>0; i--){   //------------->reverse sequence
        printf("%d\n", i*n);
    }

return 0;
}