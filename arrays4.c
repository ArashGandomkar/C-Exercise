#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int N);
void prinarray(int a[], int N);
int main()
{
    int a[] = {66,32,77,23,55,99,67,43,98,11};
    int N = sizeof(a)/sizeof(a[0]);
    printf("\nBefore sorting...");
    prinarray(a,N);
    printf("\n\nAfter sorting...");
    sort(a,N);
    prinarray(a,N);
    printf("\n\n");
}
void sort(int a[],int N)
{
    int temp;
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N-1; j++)
      {  
           if (a[j] > a[j+1])
           {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;  
           }
      }
    
    }
}
void prinarray(int a[], int N)
{
    printf("\n\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d",a[i]);
        if (i < N-1)
        {
            printf(", ");
        }
        
    }
}