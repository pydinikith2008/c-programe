//write a c programe to find the trace of the matrix 
#include<stdio.h>
int main()
 {
    int size, i, j;
    int matrix[10][10]; // You can adjust the size as needed
    int trace = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < size; i++) 
	{
        for(j = 0; j < size; j++)
	   {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate trace
    for(i = 0; i < size; i++) 
	{
        trace += matrix[i][i];
    }

    printf("Trace of the matrix is: %d\n", trace);

    return 0;
}
	

