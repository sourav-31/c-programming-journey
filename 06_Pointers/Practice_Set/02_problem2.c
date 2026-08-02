/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/

#include <stdio.h>
void address(int);
void address(int a){
    printf("The address of variable i is %u\n",&a);
}

int main(){
    int i = 6;
    printf("The address of i is %u\n", &i);
    address(i);

return 0;
}

// The address are different because we are passing the variable instead of address