/*
Problem: Write a program to perform addition of two matrices having the same dimensions. 
The sum of two matrices is obtained by adding corresponding elements of the matrices.
*/
#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &x, &y);

    int arr1[x][y], arr2[x][y], sum[x][y];
    printf("\n\nMatrix 1: \n\n");
    for (int i = 0; i < x; i++)
    {
        printf("Enter elements for %d row: ", i+1);
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        
    }
    
    printf("Matrix 2: \n\n");
    for (int i = 0; i < x; i++)
    {
        printf("Enter elements for %d row: ", i+1);
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
        
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }

    printf("\n");
    
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < y; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
        
    }
    
    
}