/*Write a program to change the value of a variable to ten times of its current
value.
*/

#include <stdio.h>
void tentimes(int* p){
    *p = 10*(*p);
    printf("Ten times of the variable is %d\n",*p);
}
int main(){
    int a = 3;
    int* ptr = &a;
    tentimes(ptr);
    
return 0;
}