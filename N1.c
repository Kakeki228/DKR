#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float a;
    int N;
    float Sum;

    printf("\n enter N >= 1: ");
    scanf("%d", &N);
    printf("\n enter a:");
    scanf("%f", &a);
    while(N <= 0) {}

    for (int n = 1; n <= N; n++)
    {
        Sum = 1+pow(-1,n)*pow(a,n)/(a+n);
    }

    printf("\n\n result = %d", Sum);
}