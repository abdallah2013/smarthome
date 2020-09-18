#include <stdio.h>
#include <stdlib.h>

void func(int*x,int*y);
int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    func(&a,&b);
    printf("%d\n%d",a,b);
    return 0;
}

void func(int*x,int*y)
{
    int z;
    z=*x+*y;
    *y=*x-*y;
    if(*y<0)
        *y=*y*-1;
    *x=z;
}
