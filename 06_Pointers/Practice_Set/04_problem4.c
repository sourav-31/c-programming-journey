/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/

#include <stdio.h>
int sum(int*,int*);
int sum(int*a,int*b){
    return *a+*b;
}
float avg(int*,int*);
float avg(int*a,int*b){
    int average = (*a+*b)/2;
    return average; 
}
int main(){
    int x = 10;
    int y = 20;
    printf("The sum of %d and %d is %d\n",x,y, sum(&x,&y));
    printf("The average of %d and %d is %.2f\n",x,y, avg(&x,&y));

return 0;
}