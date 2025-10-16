#include <stdio.h>
#include <stdlib.h>
int main()
{
    char A[3][3]={'a','b','c','d','e','f','g','h','i'};
    printf("The 9 Elements of 3*3 matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("%c\t",A[i][j]);
    }
    printf("\n");
    }
    
}