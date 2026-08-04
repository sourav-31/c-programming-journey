#include <stdio.h>
int main(){
    int a = 2;
    int* ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("The address of a is %u\n",ptr);

return 0;
}
