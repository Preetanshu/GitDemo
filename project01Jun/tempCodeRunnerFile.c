#include<stdio.h>
void positivecount(int *ar, int n){
    int i,temp=1;
    for(i=0;i<n;i++){
    if (ar[i]<0){  
        printf("count %d", temp);
      temp++;  
    }
    }
    }

 void printArray(int *arr,  int m){
   m=0;
   int i;
  printf("Enter number of elements: ");
  scanf("%d", &m);
   for(i=0; i < m; i++) {
    printf("Enter number:");
    scanf("%d", &arr[i]);
    }

  
    }

int main(){
   // int arr[4]= {1,-3,-65, -90,};
   // int n;
   // n = sizeof(arr) / sizeof(arr[0]);
   //-------------------------------------
  int m=0;
  int arr[m], i;
  // printf("Enter number of elements: ");
  // scanf("%d", &m);
  // for(i=0; i < m; i++) {
  //   printf("Enter number:");
  //   scanf("%d", &arr[i]);
  //   }
  //  int m=0; 
  //  int arr[m];
  
   printArray(arr, m);
   positivecount(arr,m);
    
    
return 0;
}



