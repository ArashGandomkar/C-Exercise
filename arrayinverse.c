#include <stdio.h>
int main()
{
    int a[] = {1,2,3,4,5};
     int N = sizeof(a)/sizeof(a[0]);
    for (int i = 5; i >= 0; i--)
    {
        printf(" %d ",a[i]);
    }
 
}