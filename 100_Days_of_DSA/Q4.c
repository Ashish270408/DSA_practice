#include<stdio.h>
int main(){
    int arr[100];
    int n, temp, left, right;
    printf("Number of elements you wish to enter: ");
    scanf("%d", &n);
    printf("Enter %d elements separated with space: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    left=0;
    right=n-1;
    while (left<right)
    {
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}