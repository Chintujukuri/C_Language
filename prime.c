#include"stdio.h"
int main()
{
    int p,i,f=0;
    printf("enter a number: ");
    scanf("%d",&p);
    while(p==0 && p==1)
    {
        f=1;
    }
    for(i=2;i<=p/2;i++)
    {
        if(p%i==0)
        {
          f=1;
          break;
        }
    }
    if(f==0)
     printf(" %d is a prime number",p);
     else
     printf("%d is not a prime number",p);

    return 0;
}