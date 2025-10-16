#include <stdio.h>
#include <stdlib.h>
void Func1(int a);
int Func2(int a);
void Func3(int *aptr);
int main()
{
    int a;
    printf("Please enter a number: ");
    scanf("%d",&a);
    printf("\n");
    printf("You have entered %d.\n",a);
    printf("\n");

Func1(a);
printf("a is %d after Func1 is complete.\n",a);

     a = Func2(a);
     printf("a is %d after Func2 is complete.\n",a);

            Func3(&a);
            printf("a is %d  and stotred in %p; after Func3 is compelete.\n",a,&a);
}

void Func1(int a)
{
a*=2;
printf("a is %d inside Func1.\n",a);
}

    int Func2(int a)
    {
        a*=2;
        printf("a is %d inside Func2.\n",a);
        return a;
    }

        void Func3(int *aptr)
        {
            *aptr*=2;
            printf("a is %d inside Func3.\n",*aptr);
        }