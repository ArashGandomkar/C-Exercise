#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[3][3]={1,2,3,4,5,6,7,8,9};
    printf("The 9 Elements of 3*3 matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("%d\t",A[i][j]);
    }
    printf("\n");
    }
    
}