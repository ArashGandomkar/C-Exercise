#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char b[10];
    char *a[4] = {"salam","hello","hey","hi"};
    for (int i = 0; i < 4; i++)
    {
    printf("\nEnter a word:");
    gets(b);
    printf(strcmp(b,a[0])==0 ? "Correct.!" : ""); if (strcmp(b,a[0])==0){break;};
    printf(strcmp(b,a[1])==0 ? "Correct.!" : ""); if (strcmp(b,a[1])==0){break;};
    printf(strcmp(b,a[2])==0 ? "Correct.!" : ""); if (strcmp(b,a[2])==0){break;};
    printf(strcmp(b,a[3])==0 ? "Correct.!" : "Wrong.!"); if (strcmp(b,a[3])==0){break;};
    }
    printf("\nRound One is Passed...\n");
    char c[10];
    char *d[4] = {"1381","1382","1383","1384"};
    for (int i = 0; i < 4; i++)
    {
    printf("\nEnter a Number:");
    gets(c);
    printf(strcmp(c,d[0])==0 ? "Correct.!\t" : ""); if (strcmp(c,d[0])==0){break;};
    printf(strcmp(c,d[1])==0 ? "Correct.!\t" : ""); if (strcmp(c,d[1])==0){break;};
    printf(strcmp(c,d[2])==0 ? "Correct.!\t" : ""); if (strcmp(c,d[2])==0){break;};
    printf(strcmp(c,d[3])==0 ? "Correct.!\t" : "Wrong.!\t"); if (strcmp(c,d[3])==0){break;};
    }
     char answer[4];
    char *answer1[3] = {"Yes","YES","yes"};
    char *answer2[3] = {"No","NO","no"};
    printf("\nAre you interested?(YES/NO) ");
    gets(answer);
   /* if (answer == "Yes" || answer == "YES" ||  answer == "yes") {printf("Good Luck...");}
   if (answer == "No" || answer == "NO" ||  answer == "no") {printf("You can contact me by Email(arashgkuni@gmail.com)...\n");}
    if (strcmp(answer,answer1)==0) {printf("Good Luck...");}
    if (strcmp(answer,answer2)==0) {printf("You can contact me by Email(arashgkuni@gmail.com)...\n");}*/
    for(int i=0;i<3;i++)
    {
    printf(strcmp(answer,answer1[i])==0 ? "Good Luck..." : ""); if (strcmp(answer,answer1[i])==0){break;};
    printf(strcmp(answer,answer2[i])==0 ? "You can contact me by Email(arashgkuni@gmail.com)...\n" : ""); if (strcmp(answer,answer2[i])==0){break;};
    }
}