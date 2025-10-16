#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    char *pt;
    char del[]=" ,";
    pt = strtok(s,del);
    while (pt != NULL)
    {
        printf("%s\t",pt);
        pt = strtok(NULL,del);
    }
    
}