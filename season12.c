#include <stdio.h>
typedef enum {FAR=1,ORD,KHR,TIR,MRD,SHR,MHR,ABN,AZR,DAY,BHN,ESF}mounths;
int main()
{
    mounths m;
    char *MonthNames[] = {"","FARVARDIN","ORDIBEHESH","KHORDAD","TIR","MORDAD","SHAHRIVAR","MEHR",
    "ABAN","AZAR","DEY","BAHMAN","ESFAND"};
    for (m = FAR; m < ESF;m++)
    {
        printf("%d %s\n\n",m,MonthNames[m]);
    }  
}