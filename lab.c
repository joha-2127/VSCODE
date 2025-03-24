#include <stdio.h>

int main()
{
    int rows, cols;

    // Get the size of the 2D arrays
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array1[rows][cols], array2[rows][cols], sumArray[rows][cols];

    // Input the elements of the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    // Input the elements of the second array
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    // Calculate the sum of the two arrays
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sumArray[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Output the resulting sum array
    printf("The sum of the two arrays is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sumArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
