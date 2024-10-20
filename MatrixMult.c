
#include <stdio.h>
#include <stdlib.h>

// int** matMult(int **a, int **b, int size) {
// 	// (4) Implement your matrix multiplication here. 
// 	// You will need to create a new matrix to store the product.

// }

void printArray(int **arr, int n) {
	// (2) Implement your printArray function here
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", *(*(arr + i)+ j));
		}
		printf("\n");
	}
}


int main() {
	int n = 0; // ize of the matrices (n x n)
	int **matA, **matB, **matC; // 3 double pointers initialized for 2D matricies
	// (1) Define 2 (n x n) arrays (matrices).
	scanf("%d ", &n);

	matA = (int**)malloc(n * sizeof(int*)); // Allocate memory for an anrry of pointers
	matB = (int**)malloc(n * sizeof(int*)); 

	for(int i = 0; i < n; i++){
		matA[i] = (int*)malloc(n * sizeof(int)); // Allocate memory for n integers
		matB[i] = (int*)malloc(n * sizeof(int));
	}

	
	// (3) Call printArray to print out the 2 arrays here.
	printArray(matA, n);
	printArray(matB, n);
	
	// (5) Call matMult to multiply the 2 arrays here.
	// matMult(matA, matB, matC);
	
	// (6) Call printArray to print out resulting array here.
	// printArray(matC, n);

    return 0;
}