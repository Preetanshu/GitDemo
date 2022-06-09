#include<stdio.h>

int main(){
    int i, n;
    printf("Enter total no of natural numbers \n");
    scanf("%d", &n);

    for(i=n; i;i--)
    {
        printf("%d\n",i);
    }

return 0;
}