#include<stdio.h>
int main(){
    int a, b, p, q;
    int arr1[100], arr2[100];
    printf("\nNumber of elements you want to store for list 1: ");
    scanf("%d", &a);
    printf("\nEnter %d elements in ascending order separated by space: ", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nNumber of elements you want to store for list 2: ");
    scanf("%d", &b);
    printf("\nEnter %d elements in ascending order separated by space: ", b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }

    p=0;
    q=0;

    printf("\nElements are: ");
    
    while (p<a && q<b)
    {
        if (arr1[p]<=arr2[q])
        {
            printf("%d ", arr1[p]);
            p++;
        }
        else
        {
            printf("%d ", arr2[q]);
            q++;
        }
        
    }

    while (p<a)
    {
        printf("%d ", arr1[p]);
        p++;
    }

    while (q<b)
    {
        printf("%d ", arr2[q]);
        q++;
    }
    
    
    
}