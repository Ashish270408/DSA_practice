#include<stdio.h>
int main(){
    int arr[100];
    int n, pos, x;
    printf("Number of integers you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d integers separated by space: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the integer you wish to enter: ");
    scanf("%d", &x);
    printf("Enter the position for the new integer: ");
    scanf("%d", &pos);
    for (int i = n-1; i > pos-2; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=x;
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}