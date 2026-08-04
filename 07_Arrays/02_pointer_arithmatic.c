#include <stdio.h>
int main(){
    int a = 5;
    int* ptr = &a;
    printf("The address of a is %u\n",ptr);
    printf("The address of a is %u\n",&a);
    ptr++; //it will increase the address by number of bytes the architecture stores for integer pointer
    printf("The address of a is %u\n",ptr);

return 0;
}