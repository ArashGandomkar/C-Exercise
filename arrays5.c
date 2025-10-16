#include <stdio.h>
#include <stdlib.h>
void arrayprint(int a[],int N);
int GetDivisors(int a[],int N);
int main ()
{
    int a;
printf("Please Enter a number of array:");
scanf("%d",&a);
printf("\n");
int nA = GetDivisors(a,NULL);
printf("%d have %d divisors",a,nA);








}
void arrayprint(int a[],int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d",a[i]);
        if (i < N-1)
        {
            printf(", ");
        }
        
    }
    
}
int GetDivisors(int a[],int N)
{
    for (int i = 1; i <= N; i++)
    {
        int j;
        if (N % i == 0)
        {
            if(a != NULL) a[j] = i;
            j++;
        }
        
    }
    
}