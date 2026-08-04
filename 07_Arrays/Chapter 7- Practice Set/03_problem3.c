/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.*/
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,22,44,55,74,85,7,4};
    int* ptr = arr;
    ptr = ptr+2;
    printf("The value at index 2 is %d",*ptr);
return 0;
}