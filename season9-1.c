#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(const char *s);
int main()
{
    char b[10];
    printf("Enter a word:");
    fgets(b,10,stdin);
printf("The array lengh is:%d\n", strlen(b)-1);
printf("The reverse of array is:");
reverse(b);
}
void reverse(const char *s)
{
    if (s[0] == '\0')
    {
        return;
    }
    else
    {
        reverse(&s[1]);
        putchar(s[0]);
    }
}