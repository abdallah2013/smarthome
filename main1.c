#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arr[2];
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);


    for(i=0; i<2; i++)
    {
        if(arr[i]==1)
            printf("one\n");
        else if(arr[i]==2)
            printf("two\n");
        else if(arr[i]==3)
            printf("three\n");
        else if(arr[i]==4)
            printf("four\n");
        else if(arr[i]==5)
            printf("five\n");
        else if(arr[i]==6)
            printf("six\n");
        else if(arr[i]==7)
            printf("seven\n");
        else if(arr[i]==8)
            printf("eight\n");
        else if(arr[i]==9)
            printf("nine\n");
        else if  (arr[i]>9)
            printf("nine\n");
    }
    for(i=0; i<2; i++)
    {

        if(arr[i]==1)
            printf("odd\n");
        else if(arr[i]==2)
            printf("even\n");
        else if(arr[i]==3)
            printf("odd\n");
        else if(arr[i]==4)
            printf("even\n");
        else if(arr[i]==5)
            printf("odd\n");
        else if(arr[i]==6)
            printf("even\n");
        else if(arr[i]==7)
            printf("odd\n");
        else if(arr[i]==8)
            printf("even\n");
        else if(arr[i]==9)
            printf("odd\n");
        else if  (arr[i]>9)
        {
            if(arr[i]%2!=0)
                printf("odd\n");
            else
                printf("even\n");
        }

    }
    return 0;
}
