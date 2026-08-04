#include <stdio.h>
int main(){
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int sum = 0;
    printf("Enter your first matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter your second matrix:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The multipliacation of matrix a and matrix b is: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum = sum + a[i][k]*b[k][j];
                c[i][j] = sum;
                
            } sum = 0;
            
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
        
    }
    

    
return 0;
}