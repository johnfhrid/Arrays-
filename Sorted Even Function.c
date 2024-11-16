#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randInt(int x[], int s);
int even(int x);
void dispeven(int x[], int s);
void sortAndDisplayEven(int x[], int s);

void randInt(int x[], int s)
{
    for (int i = 0; i < s; i++)
    {
        x[i] = rand() % 1000 + 1;
        printf("%d ", x[i]);
    }
    printf("\n");
}

int even(int x)
{
    return x % 2 == 0;
}

void dispeven(int x[], int s)
{
    for (int i = 0; i < s; i++)
    {
        if (even(x[i]))
        {
            printf("%d ", x[i]);
        }
    }
    printf("\n");
}

void sortAndDisplayEven(int x[], int s)
{
    int evenArray[s];
    int evenCount = 0;
    
    for (int i = 0; i < s; i++)
    {
        if (even(x[i]))
        {
            evenArray[evenCount++] = x[i];
        }
    }

    for (int i = 0; i < evenCount - 1; i++)
    {
        for (int j = 0; j < evenCount - i - 1; j++)
        {
            if (evenArray[j] > evenArray[j + 1])
            {
                int temp = evenArray[j];
                evenArray[j] = evenArray[j + 1];
                evenArray[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArray[i]);
    }
    printf("\n");
}

int main()
{
    int s;
    printf("Enter size of array: ");
    scanf("%d", &s);
    int x[s];
    srand(time(0));

    printf("\nRandom Numbers: \n");
    randInt(x, s);

    printf("\nEven Numbers: \n");
    dispeven(x, s);

    printf("\nSorted Even Numbers: \n");
    sortAndDisplayEven(x, s);

    return 0;
}