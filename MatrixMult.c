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
	printf("Enter the size of your (n x n) matrix: \n");
	scanf("%d", &n);

	while(n <= 0){ //Check if n is a valid input if not ask for input again
		printf("Invalid Input! \n");
		printf("Enter the size of your (n x n) matrix [again]: \n");
		scanf("%d", &n);
	}

	// Matracies look like this ( m x n ) where our m is Rows and the n is the Columns
	matA = (int**)malloc(n * sizeof(int*)); // Allocate memory for the m(Rows) anrry of pointers
	matB = (int**)malloc(n * sizeof(int*)); 

	for(int i = 0; i < n; i++){
		*(matA + i) = (int*)malloc(n * sizeof(int)); // Allocate memory for the n(Columns) integers 
		*(matB + i)= (int*)malloc(n * sizeof(int));
	}

	printf("Enter the values for each row and column for matA: \n"); // Takes in custom values from the user to fill the matrcies
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", (*(matA + i) + j));
		}
	}
	printf("Enter the values for each row and column for matB: \n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", (*(matB + i) + j));
		}
	}
	printf("\n");

	
	// (3) Call printArray to print out the 2 arrays here.
	printArray(matA, n);
	printf("\n");
	printArray(matB, n);
	
	// (5) Call matMult to multiply the 2 arrays here.
	// matMult(matA, matB, matC);
	
	// (6) Call printArray to print out resulting array here.
	// printArray(matC, n);

    return 0;
}