#include <stdio.h>
#define N 11
int main()
{
   int F[N];
   F[0] = 0;
   F[1] = 1;
for (int i = 2; i < N; i++)
{
   F[i] = F[i-1] + F[i-2];
}
for (int i = 0; i < N; i++)
{
   printf("\nF[%d]=%d\n\n",i,F[i]);
}
   printf("\n");
}