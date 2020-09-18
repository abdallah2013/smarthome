#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,i,sum=0;
    int arr[1000];
    scanf("%d",&no);
    for (i=0; i<no; i++)
    {
        scanf("\t%d",&arr[i]);

    }
    for (i=0; i<no; i++)
    {
        sum=sum+arr[i];

    }
    printf("%d",sum);
    return 0;
}
