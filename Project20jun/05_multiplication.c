#include<stdio.h>

int main(){
    FILE *ptr;
    int i,num,total;
     ptr= fopen("multiplyc.txt", "w");
    printf("Enter the number");
    scanf("%d",&num); 
    for(i=1;i<=10;i++){
        total = num*i;
       // printf("%d\n",total);
        fprintf(ptr, "The num is %d\n", total);
    }
   fclose(ptr);
   printf("Successfully generated table of %d to table.txt\n", num);
return 0;
}