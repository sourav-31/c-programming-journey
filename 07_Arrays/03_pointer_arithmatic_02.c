#include <stdio.h>
int main(){
    char a = 'X';
    char* ptr = &a;
    printf("The address of a is %u\n",ptr);
    printf("The address of a is %u\n",&a);
    ptr++; //it will increase the address by number of bytes the architecture stores for character pointer
    printf("The address of a is %u\n",ptr);

return 0;
}