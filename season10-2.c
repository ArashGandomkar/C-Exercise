#include <stdio.h>
#include <stdlib.h>
int main()
{
    int y,m,d;
    printf("\n\nEnter the Date as: YYYY/MM/DD: ");
    scanf("%d%*c%d%*c%d",&y,&m,&d);
    printf("\nYear is: %d\t",y);
    if(m==1){printf("Month is: Farvardin\t");};
    if(m==2){printf("Month is: Ordibehesht\t");};
    if(m==3){printf("Month is: Khordad\t");};
    if(m==4){printf("Month is: Tir\t");};
    if(m==5){printf("Month is: Mordad\t");};
    if(m==6){printf("Month is: Shahrivar\t");};
    if(m==7){printf("Month is: Mehr\t");};
    if(m==8){printf("Month is: Aban\t");};
    if(m==9){printf("Month is: Azar\t");};
    if(m==10){printf("Month is: Dey\t");};
    if(m==11){printf("Month is: Bahman\t");};
    if(m==12){printf("Month is: Esfand\t");};
    printf("Day is: %d\n\n\n",d);
}