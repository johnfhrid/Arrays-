#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randIntArr(int x[], int s);
void dispArr(int x[], int s);
int isWellOrdered(int x);
int countWellOrdered(int x[], int s);
void dispWellOrdered(int x[], int s);

int main()
{
    int s;
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    int x[s];
    
    randIntArr(x, s);
    printf("Generated Array: ");
    dispArr(x, s);
    
    printf("\nWell-Ordered Numbers: ");
    dispWellOrdered(x, s);
    
    printf("\nTotal Well-Ordered Numbers: %d\n", countWellOrdered(x, s));
    return 0;
}

void randIntArr(int x[], int s)
{
    srand((unsigned) time(NULL)); 
    for (int i = 0; i < s; i++)
    {
        x[i] = rand() % 1000 + 1;  
    }
}

void dispArr(int x[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
}

int isWellOrdered(int x)
{
    int lastDigit = 10;  
    
    while (x > 0)
    {
        int currentDigit = x % 10;  
        if (currentDigit >= lastDigit)
        {
            return 0;  
        }
        lastDigit = currentDigit;  
        x /= 10;  
    }
    
    return 1;  
}

int countWellOrdered(int x[], int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if (isWellOrdered(x[i]))
        {
            count++;  
        }
    }
    return count;
}

void dispWellOrdered(int x[], int s)
{
    int found = 0;
    for (int i = 0; i < s; i++)
    {
        if (isWellOrdered(x[i])) 
        {
            printf("%d ", x[i]); 
            found = 1;
        }
    }
    if (!found)
    {
        printf("0");
    }
    printf("\n");
}