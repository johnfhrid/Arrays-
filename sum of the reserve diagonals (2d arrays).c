#include <stdio.h>

int main ()
{
    int arr[3][3];
    int sum1 = 0 , sum2 = 0;
    int i, j;
    int acc1, acc2;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d, ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        acc1= arr[i][3-1-i];
        sum1+=acc1;
        printf("%d, ",acc1);
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        acc2 = arr[3-1-i][3-1-i];
        sum2 += acc2;
        printf("%d, ",acc2);
    }
    printf("\n");
    printf("\n%d",sum1);
    printf("\n%d",sum2);
    return 0;
}
