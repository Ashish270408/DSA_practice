#include<stdio.h>
int main(){
    int n, arr[100], temp, count=0;
    printf("\nNumber of elements you want to enter: ");
    scanf("%d", &n);
    printf("\nEnter %d elements separated by space: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            for (int j = i; j < n; j++)
            {
                arr[j]=arr[j+1];
            }

            n--;
            
        }
        
    }

    printf("\nNew array is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
}