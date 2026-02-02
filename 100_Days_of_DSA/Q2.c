#include<stdio.h>
int main(){
    int arr[100];
    int pos, n;
    printf("Number of elements you wish to enter: ");
    scanf("%d", &n);
    printf("Enter %d elements separated by space: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Position of element you want to delete: ");
    scanf("%d", &pos);
    for (int i = pos-1; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    printf("New array is: ");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
}