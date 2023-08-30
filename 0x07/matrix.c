#include <stdio.h>
#include <stdlib.h>

int main() {
	int rows = 10;
	int cols = 11;

	// Allocate memory for an array of pointers
	int **matrix = (int **)malloc(rows * sizeof(int *));
	if (matrix == NULL) {
		perror("Memory allocation failed");
		return 1;
	}

	// Allocate memory for each row and initialize the matrix
	for (int i = 0; i < rows; i++) {
		matrix[i] = (int *)malloc(cols * sizeof(int));
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = i * cols + j;
		}
	}

	// Print the matrix
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
		printf("%2d ", matrix[i][j]);
		}
		printf("\n");
	}

	// Free allocated memory
	for (int i = 0; i < rows; i++) {
	free(matrix[i]);
	}
	free(matrix);

	return 0;
}
