//Problem: Given integers a and b, compute a^b using recursion without using pow() function.
#include<stdio.h>
int main(){
    int a, b, pro=1;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    printf("\nEnter the power to be raised by: ");
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        pro*=a;
    }
    printf("\nThe value is: %d", pro);
    
}