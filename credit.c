#include <stdio.h>
int main()
{
    long long digit = 0;
    int num;
    do
    {
        scanf("%lld",&digit);
        long long tempdigit = digit;
        while(tempdigit >=  1)
        {
            tempdigit /= 10;
            num++;
        }
    }
    while(num != 16);
    int array[num];
    for (int i = 0; i < num; i++)
    {
        array[i] = digit % 10;
        digit /= 10;
    }
    
    int sum = 0;
    for (int i = 1; i < 16; i += 2) {
        array[i] *= 2;
        if (array[i] > 9) {
            array[i] -= 9;
        }
    }
    for (int j = 0; j < 16; j++)
    {
        sum += array[j];
    }
    int Final;
    Final = sum % 10;
    if (Final == 0)
    {
        printf("VISA\n");
    }
    else{printf("uncorrect.\n");}
}