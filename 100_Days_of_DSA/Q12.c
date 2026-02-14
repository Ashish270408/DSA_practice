/*
Problem: Write a program to check whether a given matrix is symmetric. A matrix
is said to be symmetric if it is a square matrix and is equal to its transpose
(i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).
*/
#include <stdio.h>
int main()
{
    int x, y, symmetric=1;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &x, &y);

    if (x!=y)
    {
        printf("Matrix is not a square matrix!!!");
        return 0;
    }
    

    int arr1[x][y], arr2[x][y], sum[x][y];
    printf("\n\nMatrix: \n\n");
    for (int i = 0; i < x; i++)
    {
        printf("Enter elements for %d row: ", i + 1);
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = i+1; j < y; j++)
        {
            if (arr1[i][j]!=arr1[j][i])
            {
                symmetric=0;
                break;
            }
            
        }

        if (!symmetric) break;
        
    }

    if (symmetric) printf("\nThe Matrix is symmetric");
    else printf("\nMatrix is not symmetric");
    

}