#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1, e2;
    e1.code = 45;
    e1.salary = 4000.00;
    strcpy(e1.name,"Sourav");

    e2.code = 46;
    e2.salary = 2000.90;
    strcpy(e2.name,"Ram");

    printf("The details of employee 1 are \n%s\n%d\n%.2f\n",e1.name , e1.code, e1.salary);
    printf("\nThe details of employee 2 are \n%s\n%d\n%.2f",e2.name , e2.code, e2.salary);
return 0;
}