#include<stdio.h>
void reverse(int *arr, int n){//int arr[10];  int *ptr= arr;
int temp,i;
for(i=0;i<(n/2);i++){
     // n/2 for total nos are odd i.e, it will reverse it 4 but asfterthat it will remain same
//in case of even , it will i<n . Watchh video 9:56:10
    temp= arr[i];
    arr[i]= arr[n-i-1];
    arr[n-i-1]=temp;
}}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int i;
    reverse(arr, 7);
    for(i=0;i<7;i++){
     printf("The value after reverse %d\n", arr[i]);
    }
return 0;
}