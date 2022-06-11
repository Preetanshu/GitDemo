#include<stdio.h>

int main(){
int arr[10];
int *ptr= arr;
 printf("%d\n", *ptr);
  printf("%d", ptr);
if((ptr+2)==&(arr[2])){
 
    printf("both points to same 2nd no");
    }
else{
    printf("Points to different 2nd no");
}    









return 0;
}