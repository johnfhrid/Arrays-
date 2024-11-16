#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randIntArr(int x[], int s);
void dispArr(int x[], int s);
int isPrimeDominated(int x);
int countPrimeDominated (int x[], int s);
void dispPrimeDominated(int x[], int s);
int main ()
{
    int s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int x[s];
    
    randIntArr(x, s);
    printf("\nRandom Number: ");
    dispArr(x, s);
    
    printf("\nDominated Prime: ");
    dispPrimeDominated(x, s);
    
    printf("\nTotal Domintad Prime: %d",countPrimeDominated(x, s));
    return 0;
}

void randIntArr(int x[], int s)
{
    time_t t;
    srand((unsigned) time(&t));
    for ( int i=0; i<s; i++ )
    {
        x[i] = rand() % 100+1; 
    }
}

void dispArr(int x[], int s)
{
    for ( int i=0; i<s; i++ )
    {
        printf("%d ",x[i]);
    }
}

int isPrimeDominated(int x)
{
    int count = 0;
    for ( int i = 0; i <= x; i++ )
    {
        if ( x % i == 0 )
        {
            count++;
        }
    }
    if (count == 2)
    {
        return 1;
    }
    return 0;
}

int countPrimeDominated(int x[], int s)
{
    int countPrime = 0;
    for ( int i = 0; i < s; i++ )
    {
        if (isPrimeDominated(x[i]))
        {
            countPrime++;
        }
    }
    return countPrime;
}

void dispPrimeDominated(int x[], int s)
{
    for ( int i = 0; i < s; i++ )
    {
        if(isPrimeDominated(x[i]))
        {
            printf("%d ", x[i]);
        }
    }
}