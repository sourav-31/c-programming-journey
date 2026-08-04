/*Write a program containing a function which reverses the array passed to it.*/
#include <stdio.h>
void reverse(int a[], int n);
void reverse(int a[], int n){
    printf("The reversed array is : \n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\t",a[i]);
    }
    
}
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;
    printf("The array is : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    reverse(arr,5);
return 0;
}