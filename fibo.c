#include <stdio.h>
#include <stdlib.h>
int fibo(int);
int main(){
    int n;
    scanf("%d" , &n);
    printf("%d" ,fibo(n));
    return 0;
}

int fibo(int n)
{
    
    int a=1 , b =1;
    for (int i = 2; i < n; i++)
    {
        b = a+b;
        a = b-a;
    }
    return b;
}