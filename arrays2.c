#include <stdio.h>
#include <stdlib.h>
int main()
{
    int P[] = {1,2,3,4,5,6,7,8,9,0,
               2,2,2,2,4,4,4,5,6,7,
               9,9,9,9,9,9,9,9,9,9,
               1,3,6,7,3,4,5,6,8,9};
    int F[10];
    for (int i = 0; i < 10; i++)
    {
        F[i] = 0;
    }
    for (int j = 0; j < 40; j++)
    {
        F[P[j]]++;
    }
    printf("Number\tPoll\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t%d\n",i,F[i]);
    }      
}
