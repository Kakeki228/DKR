#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float a;
    int N;
    float Sum;
    int n;

    printf("\n enter N >= 1: ");
    scanf("%d", &N);
    printf("\n enter a:");
    scanf("%f", &a);
    if (N>=1) {

    for (n = 1; n <= N; n++)
    {
        Sum = 1+pow(-1,n)*pow(a,n)/(a+n);
    }if (a+n == 0)
    {
        Sum = 1+pow(-1,n)*pow(a,n);
    }
    
    }
    printf("\n\n result = %f", Sum);
}