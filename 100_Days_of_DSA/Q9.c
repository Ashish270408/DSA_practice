/*
Problem: A secret system stores code names in forward order. 
To display them in mirror format, you must transform the given 
code name so that its characters appear in the opposite order.
*/
#include<stdio.h>
int main(){
    char str[100], temp;
    int len=0, i=0, left=0, right;
    printf("\nEnter the string: ");
    scanf("%[^\n]", str);
    while (str[i]!=0)
    {
        len++;
        i++;
    }
    right=len-1;
    while (left<right)
    {
        temp=str[left];
        str[left]=str[right];
        str[right]=temp;
        left++;
        right--;
    }
    printf("\nThe reversed string is: ");
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    
}