/*Create a three–dimensional array and print the address of its elements in
increasing order*/

#include <stdio.h>
int main(){
    int arr[3][3][3];
    printf("Enter all the values of array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
            
        }
        
    }

    printf("The 3D array is :\n");

     for (int i = 0; i < 3; i++)
    {   printf("layer %d\n", i+1);

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
printf("the address of the elements in increasing order are:\n");
for (int i = 0; i < 3; i++)
{
    printf("Layer %d\n", i+1);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%u\t",&arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
}


return 0;
}
