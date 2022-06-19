#include<stdio.h>
#include <string.h>

typedef struct student{//typedef used instead of struct 
int roll_no;
char name[20];
}stud;

void display(stud st) {
printf("The roll number is %d", st.roll_no);
printf("The name is %s", st.name);
}

int main(){
    stud stu;
    stud *ptr;
    ptr=  &stu;
   
    //stu.roll_no= 1;
    (*ptr).roll_no=1;
    //strcpy(stu.name, "Dhairya");
    strcpy(ptr->name, "Dhairya");

   //display(stu);
     
    printf("Roll number is %d", stu.roll_no);
     printf("Name is %s", stu.name);
//aboveall commented lines are correct but used in alternate of uncommented lines
  
return 0;
}