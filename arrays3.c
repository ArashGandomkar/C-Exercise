#include <stdio.h>
#include <stdlib.h>
float Mean(int a[],int N);
void printarray(int a[],int N);
void doublef(int a[],int N);
int main()
{
    int p[] = {1,2,3,4,5,6,7,8,9,0};
    
    int N=sizeof(p)/sizeof(p[0]);
    
    printarray(p,N);
    
    float m = Mean(p,N);
    printf("\n\n%.2f is a mean of Arrays..\n\n",m);

    printf("Calling doublef Function..\n");
    doublef(p,N);
}

void printarray(int a[],int N)
{
    printf("\n");
    printf("These are numbers of Array...\n");
    for (int i = 0; i < N; i++)
    {
        printf(" %d ",a[i]);
    }
    
}
float Mean(int a[],int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += a[i];
    }
    return (float)sum/N;
}
void doublef(int a[],int N)
{
    for (int i = 0; i < N; i++)
    {
        a[i]*=2;
        printf(" %d ",a[i]);
    }
    printf("\n\n");
}