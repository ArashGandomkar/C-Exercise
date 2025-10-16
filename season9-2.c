#include <stdio.h>
int main()
{
    printf("Enter a line of text:");
    int lengh = 15;
    char s[lengh];
    char c;
    int i = 0;
    while ((c=getchar())!='\n')
    {
      s[i++] = c;
      if(i >= (lengh-1)) break;
    }
    s[i] = '\0';
    printf("Entered text is:");
    puts(s);
    printf("\n");
}