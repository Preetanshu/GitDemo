#include<stdio.h>
struct vector {
    int x;
    int y;
};

struct vector  sumvector ( struct vector v, struct vector v1){
    struct vector result;
    //below lines will print vector variables
    // printf("Enter the first number");
    // scanf("%d", &v2.x);
    // printf("Enter the second number");
    // scanf("%d", &v3.y);
    result.x= (v.x + v1.x);
    result.y= (v.y+ v1.y);
    return result;
}

int main(){
   struct vector v, v1;
    v.x =100;
    v.y =200;
    printf ("Value of vx is %d", v.x);
    printf ("Value of vy is %d", v.y);

    v1.x =1000;
    v1.y =2000;
    printf("Value of v1x is %d", v1.x);
    printf("Value of v1y is %d", v1.y);
    // below print the same as the bottomost lines
    //printf("Value is %d & %d", sumvector(v,v1), sumvector(v,v1));
    struct vector sum;
    sum = sumvector(v,v1);
    printf("Value of sum is %d & %d", sum.x , sum.y); 
    
return 0;
}