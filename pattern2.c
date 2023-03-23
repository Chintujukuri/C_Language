#include"stdio.h"
int main()
{
    int i,j;
    char r,alpha='A';
    printf("enter the upper case letter that appr on last row: ");
    scanf("%c",&r);
    for(i=1;i<=(r-'A'+1);++i)
    {
        for(j=1;j<=i;++j)
        printf("%c",alpha);
        ++alpha;
        printf("\n");
    }
    return 0;
}