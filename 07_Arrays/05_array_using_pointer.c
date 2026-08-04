#include <stdio.h>
int main(){
    int marks[4] = {22,33,44,55};
    int* ptr = &marks[0];
    for(int i = 0; i<4; i++){
        printf("The value at marks[%d] is %d\n",i,*ptr);
        ptr++;
    }
    
    
return 0;
}