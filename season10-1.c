#include <stdio.h>
#include <stdlib.h>
int main()
{
   int y,m,d;
   printf("Enter the Date as YYYY/MM/DD: ");
   scanf("%d%*c%d%*c%d",&y,&m,&d);
   printf("\n");
   printf("Year is: %d\t",y);
   printf("Month is: %d\t",m);
   printf("Day is: %d\t",d);
}