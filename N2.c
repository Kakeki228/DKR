#include <stdio.h>
#include <stdlib.h>
#define N 2
int** allocateMemory();
void sort();
int main()
{
int** A = allocateMemory();
int** B = allocateMemory();
for(int i = 0; i<N;i++)
{
    for (int j = 0; j < N; j++)
    {
        printf("\nEnter Matrix A value: ");
        scanf("%d",&A[i][j]);
    }
    
}
sort(A);
for (int i = 0; i < N; i++) {

		printf("\t");

		for (int j = 0; j < N; j++)
		{
			printf("%5d", A[i][j]);
		}

		printf("\n");
	}
}
void sort(int **A,int **B)
{
    
for (int i = 0; i < N; i++) {

			for (int j = 0; j < N; j++) {

				int min = A[i][j];

				int p = i;
				int m = j;
				int d = j;

				for (int k = i; k < N; k++) {

					for (d = j; d < N; d++) {

						if (A[k][d] < min) {

							min = A[k][d];

							p = k;
							m = d;
						}
					}
					d = 0;
				}

				int temp = A[i][j];

				A[i][j] = A[p][m];
				A[p][m] = temp;
			}
		}
}

int** allocateMemory() {
	int** matrix = (int**)malloc(N * sizeof(int*));
	for (int i = 0; i < N; i++) {
		matrix[i] = (int*)malloc(N * sizeof(int));
	}
	return matrix;
}
