#include <stdio.h>
#include <string.h>
int main()
{
    char s1[40] = "Hello World.!";
    char s2[40];
    char s3[40];
    strcpy(s2,s1);
    printf("Using strcpy...\n");
    printf("s1 = %s , s2 = %s\n",s1,s2);

    printf("\n");

    strncpy(s3,s1,5);
    s3[5] = '\0';
    printf("Using strncpy...\n");
    printf("s1 = %s , s3 = %s\n",s1,s3);
    
    printf("\n");

    char s4[] = "World.!";
    char s5[40];
    strncpy(s5,"Hello ",6);
    s5[6]='\0';
    printf("Before strcat...\n");
    printf("s4 = %s , s5 = %s\n",s4,s5);
    strcat(s5,s4);
    printf("After strcat...\n");
    printf("s4 = %s , s5 = %s\n",s4,s5);
}