#include<stdio.h>
typedef struct datetime{
    int date;
    int month;
    int year;
    int hour, minute, second;
}datetime;

void display(datetime d1,datetime d2){
printf("Date & time will be %d/%d/%d %d:%d:%d\n" , d1.date, d1.month, d1.year, d1.hour, d1.minute, d1.second);
printf("Date & time will be %d/%d/%d %d:%d:%d\n" , d2.date, d2.month, d2.year, d2.hour, d2.minute, d2.second);
}

int comparedatetime(datetime d1,datetime d2){
     if(d1.year>d2.year){
      return 1;
     }
     if(d1.year<d2.year){
      return -1;
     }
     if(d1.month>d2.month){
      return 1;
     }
     if(d1.month<d2.month){
      return -1;
     }
     if(d1.date>d2.date){
      return 1;
     }
     if(d1.date<d2.date){
      return -1;
     }
     if(d1.hour>d2.hour){
      return 1;
     }
     if(d1.hour<d2.hour){
      return -1;
     }
     if(d1.minute>d2.minute){
      return 1;
     }
     if(d1.minute<d2.minute){
      return -1;
     }
    if(d1.second>d2.second){
      return 1;
     }
     if(d1.second<d2.second){
      return -1;
     }

    return 0;
}

int main(){
    datetime d1 = {19, 06, 22, 19, 04, 15 };
    datetime d2 = {18, 06, 22, 18, 03, 14 };
     display(d1, d2);
     printf("Date comprison will be %d", comparedatetime(d1,d2));
return 0;
}