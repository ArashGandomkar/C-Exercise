#include <stdio.h>
#include <string.h>
void compare(const char *str1,const char *str2);
int main()
{
    char s1[]="abc";
    char s2[]="abc";
    char s3[]="abd";
    char s4[]="abb";
    printf("Input String...\n");
    printf("s1 = %s\t",s1);
    printf("s2 = %s\t",s2);
    printf("s3 = %s\t",s3);
    printf("s4 = %s\t",s4);

    printf("\n\n");

    printf("Using Comparing Function...\n\n");
    printf("Compare s1,s2:\n");
    compare(s1,s2);
    printf("Compare s1,s3:\n");
    compare(s1,s3);
    printf("Compare s1,s4:\n");
    compare(s1,s4);
}
void compare(const char *str1,const char *str2)
{
    if (strcmp(str1,str2)==0)
    {
        printf("%s = %s\n",str1,str2);
    }
    if (strcmp(str1,str2) < 0)
    {
        printf("%s < %s\n",str1,str2);
    }
    if (strcmp(str1,str2) > 0)
    {
        printf("%s > %s\n\n",str1,str2);
    }
    
}