#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char ch;
    while ((ch=getchar()) != EOF)
  {
    if (ch==10) continue;
        printf("ASCICODE %c is %d.\n",ch,ch);
        printf(isdigit(ch) ? "%c is a digit.\n" : "%c is not a digit.\n",ch);
        printf(isalpha(ch) ? "%c is a letter.\n" : "%c is not a letter.\n",ch);
    if (isalpha(ch)) printf(islower(ch) ? "%c is lowercase.\n" : "%c is uppercase.\n",ch);
        printf(ispunct(ch) ? "%c is a punctuation.\n" : "%c is not punctuation.\n",ch);
        printf(isspace(ch) ? "%c is a space-char.\n" : "%c is not space-char.\n",ch);
  }
}