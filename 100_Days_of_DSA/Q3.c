#include<stdio.h>
int main(){
    int n, arr[100], key, comp=0, pos=-1;
    printf("Number of elements to enter: ");
    scanf("%d", &n);
    printf("Enter %d elements separated by space: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element you wish to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        comp++;
        if (key==arr[i])
        {
            pos=i;
            break;
        }
        
    }
    if (pos>-1){
        printf("\nElement %d found at position %d", key, pos);
        printf("\nComparisons performed: %d", comp);
    }
    else
    {
        printf("\nNo elements found");
        printf("\nComparisons perfromed: %d", comp);
    }
    
    
}