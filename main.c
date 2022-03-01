int main() {
    int** matrix;
    int rows = 5;
    int cols = 4;

    // Allocate matrix memory.
    matrix = (int**) malloc(sizeof(int*) * rows);
    for(int i = 0; i < rows; i++) {
        matrix[i] = (int*) malloc(sizeof(int) * cols);
    }

    // Fill matrix.
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j;
        }
    }

    // Calculate sum of matrix.
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("The sum of all of the elements in the matrix is: %i", sum);

    // Deallocate matrix
    for(int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}