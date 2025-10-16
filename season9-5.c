#include <stdio.h>
#include <string.h>
void wherechar(const char *str,const char *c);
void searchchar(const char *str1,char c);
int main()
{
    char s[] = "to be or not to be.! ; thats equation.";
    searchchar(s,'b');
    searchchar(s,'f');
    wherechar(s,"not");
    wherechar(s,"this");
}
void searchchar(const char *str1,char c)
{
     printf("\nFinding '%c' in Following string...\n",c);
    printf("%s\n",str1);
    char *pc;
    int i;
    int n=0;
    pc = strchr(str1,c);
    while (pc!=NULL)
    {
        i = pc - str1 + 1;
        printf("We Found %c at position %d.\n",c,i);
        n++;
        pc = strchr(pc+1,c); 
    }
    if (n>0)
    {
        printf("We Found %d char of '%c' in following string.",n,c);
        printf("\n______________________________________\n\n");
    }
    else
    {
        printf("Nothing Found...\n");
        printf("\n______________________________________\n\n");
    }
}
void wherechar(const char *str,const char *c)
{
    printf("Find first index of word:'%s';In Following string...\n");
    puts(str);
    char *pc = strstr(str,c);
    int i;
    if (pc == NULL)
    {
        printf("Nothing Found...\n");
    }
    else
    {
        i = pc - str + 1;
        printf("Found at Index %d.\n",i);
    }
    printf("\n");
}