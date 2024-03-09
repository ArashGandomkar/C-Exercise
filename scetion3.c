#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int print(int a);
int array(int b);
void matrix1();
void matrix2();
void matrix3();
void survey();
void contact();
int main()
{
    int in,in1,in2;
    printf("[1]Print Number\n");
    printf("[2]Build an Array\n");
    printf("[3]Make (3*4)Matrix\n");
    printf("[4]Print available (3*4)Matrix\n");
    printf("[5]Print areas above the main diameter of the (4*4)Matrix\n");
    printf("[6]Do All\t");
    printf("[7]Contact\t\t");
    printf("[8]Exit");
    printf("\n\nChoose one of the above cases: ");
    scanf("%d",&in2);
switch (in2)
{
case 1:
        printf("\n[1]Print Number\n");
        printf("Please enter your Input: ");
        scanf("%d",&in);
        print(in);
        survey();
        break;
case 2:
        printf("\n[2]Build an Array\n");
        printf("Please enter number of Array's Index: ");
        scanf("%d",&in1);
        array(in1);
        survey();
        break;
case 3:
        printf("\n[3]Make (3*4)Matrix\n");
        matrix1();
        survey();
        break;
case 4:
        printf("\n[4]Print available (3*4)Matrix\n");
        matrix2();
        survey();
        break;
case 5:
        printf("\n[5]Print areas above the main diameter of the (4*4)Matrix\n");
        matrix3();
        survey();
        break;
case 6:
        printf("\n[6]Do All\n");

        printf("\n[1]Print Number\n");
        printf("Please enter your Input: ");
        scanf("%d",&in);
        print(in);

        printf("\n[2]Build an Array\n");
        printf("Please enter number of Array's Index: ");
        scanf("%d",&in1);
        array(in1);

        printf("\n[3]Make (3*4)Matrix\n");
        matrix1();

        printf("\n[4]Print available (3*4)Matrix\n");
        matrix2();

        printf("\n[5]Print areas above the main diameter of the (4*4)Matrix\n");
        matrix3();
        survey();
        break;

case 7: 
        printf("\n[7]Contact\n");
        contact();
        break;

                case 8: break;

        default: main();
    }
}

//PrintFunc

int print(int a)
{
    printf("Your Number is %d.\n",a);
    return 0;
}

//Build an Array

int array(int b)
{
   int chs;
   int sugg;
   int index = b+1;
   int array[index];
   array[0] = 0;
   printf("Enter %d index: ",b);
   for (int i = 1; i < index; i++)
   {
   scanf("%d",&sugg);
   array[i] = sugg;
   }
   printf("The Array is: \" ");
   for (int i = 1; i <= b; i++) {printf("%d ",array[i]);}
   printf("\"");
   printf("\nChoose one index from ");
   for (int k=1;k<=b;k++) {printf("%d",k);if(k<b){printf(",");}}
   printf(": ");
   scanf("%d",&chs);
   printf("The value of index %d is %d.\n",chs,array[chs]);
   return 0;
}

//Print (3*4)Matrix

void matrix1()
{

    //(With taking input from the user)

    printf("Enter 12 index: ");
    int array1[3][4];
    for (int i=0;i<3;i++)
    {
        for (int j = 0; j < 4; j++)
        {
        scanf("%d",&array1[i][j]);
        }
    }
    printf("The Array's elements(3*4) is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j=0;j<4;j++)
        {
        printf("%d ",array1[i][j]);
        if (j==3) {printf("\n");}
        }
    }
}

//Print (3*4)Matrix

void matrix2()
{
    
   //(Without taking input from the user)

    int array1[3][4] =
     {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
     };
    for (int i=0;i<3;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",array1[i][j]);
            if (j==3) {printf("\n");}
            if (i==0 && (j==1 || j==2)) {printf(" ");}
            if (i==1 && (j==1 || j==2)) {printf(" ");}
        }
    }
}

//Print areas above the main diameter of the (4*4)Matrix

void matrix3()
{
    printf("Enter 16 index: ");
    int array2[4][4];
    for (int i=0;i<4;i++)
    {
        for (int j = 0; j < 4; j++)
        {
        scanf("%d",&array2[i][j]);
        }
    }
    printf("The Array's element(3*4) is:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j=0;j<4;j++)
        {
        printf("%d ",array2[i][j]);
        if (j==3) {printf("\n");}
        }
    }
    printf("\n");
    printf("The areas above the main diameter of the (4*4)Matrix:\n");
    printf("%d ",array2[0][1]);
    printf("%d ",array2[1][2]);
    printf("%d ",array2[2][3]);
}

//Contact

void contact()
{
    printf("You can contact me by Email(arashgkuni@gmail.com)...\n");
}

//Survey

void survey()
{
    char answer[5];
    char *answer1[3] = {"Yes","YES","yes"};
    char *answer2[3] = {"No","NO","no"};
    printf("\nAre you interested?(YES/NO) ");
    scanf("%s",answer);
    for(int i=0;i<3;i++)
    {
    printf(strcmp(answer,answer1[i])==0 ? "Good Luck..." : ""); if (strcmp(answer,answer1[i])==0){break;};
    printf(strcmp(answer,answer2[i])==0 ? "You can contact me by Email(arashgkuni@gmail.com)...\n" : ""); if (strcmp(answer,answer2[i])==0){break;};
    }
}