#include"stdio.h"
int main()
{
    void swap(int *,int *);
    int x,y;
    printf("\nenter tho numbers to swap: ");
    scanf("%d %d",&x,&y);
    printf("\nbefore swaping in main x=%d and y=%d",x,y);
    swap(&x,&y);
    printf("\nafter swaping in main x=%d and y=%d",x,y);
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y= t;
    printf("\n after swaping in function x=%d and y=%d",*x,*y);
}
/* the values of variable are changing*/