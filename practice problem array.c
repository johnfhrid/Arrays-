#include <stdio.h>

int main ()
{
    int arr[3][3];
    int sum = 0;
    int i, j;

    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
        for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum of diagonals is: %d",sum);
    return 0;
}
