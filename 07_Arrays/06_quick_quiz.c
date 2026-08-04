/*Create a 2-d array by taking input from the user. Write a display function to
print the content of this 2-d array on the screen.*/


#include <stdio.h>
void display(int a[][3] ,int m, int n);
void display(int a[][3],int m,int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    
}
int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    display(arr,3,3);
    
return 0;
}