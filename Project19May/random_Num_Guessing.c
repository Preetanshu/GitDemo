#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
      int num, guess, nguesses=1;
      srand(time(0));   // for getting different randppm number everytime
      num= rand()%100+1; // for getting random number
       printf("%d" , num);
      do{
       
         printf("Enter the guessed number");
         scanf("%d" , &guess);
       
       if(guess> num){
           printf("Entered number is greater than the random number");
       }
       else if(guess< num){
           printf("Entered number is smaller  than the random number");
       } 
       
        else{
            if(nguesses>1){
           printf("You guessed in %d times", nguesses);
            }
            else{
                printf("You guessed in %d time", nguesses); 
            }
       }
       nguesses++;
      }while(guess!=num);

return 0;
}