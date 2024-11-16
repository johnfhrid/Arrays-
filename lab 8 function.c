#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randIntArr(int x[], int s);
void  dispArr(int x[], int s);
int isEven(int x);
int collatzseqcount(int x);
void dispcltz (int x[], int s);
int main ()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d" ,&size);
    int arr[size];
    printf("Random Numbers: ");
    randIntArr(arr, size);
    dispArr(arr, size);
    dispcltz(arr, size);
    return 0;
}

void randIntArr(int x[], int s)
{
    srand((unsigned) time(NULL));;
    for (int i = 0; i < s; i++)
    {
         x[i] = rand() %100 + 1;   
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

int isEven(int x)
{
    return (x % 2 == 0);
}

int collatzseqcount(int x)
{
    int count = 0;
    while(x != 1)
    {
        if(isEven(x))
        {
            x /= 2;
            count++;
        }
        else
        {
            x = 3 * x + 1;
            count++;
        }
    }
    return count;
}

void dispcltz (int x[], int s)
{
    for (int i = 0; i < s; i++)
    {
        int counts = collatzseqcount(x[i]);
        printf("%d counts: %d",x[i], counts);
        printf("\n");
    }
}