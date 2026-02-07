#include<stdio.h>
int fib(int n){
    int a, b, c;
    a=0;
    b=1;
    for (int i = 0; i < n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    return a;
    
}
int main(){
    int num, result;
    printf("\nEnter the position of the fibonacci number you wish to print: ");
    scanf("%d", &num);
    result=fib(num);
    printf("\nThe element at %d position in fibonacci series is: %d", num, result);
}