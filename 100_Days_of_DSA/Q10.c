#include<stdio.h>
int main(){
    char s1[100];
    int len=0;
    printf("\nEnter the string: ");
    scanf("%[^\n]", s1);
    
    while (s1[len]!=0)
    {
        len++;
    }
    
    for (int i = 0, j=len-1; s1[i]!=0 && j>=0; i++, j--)
    {
        if (s1[i]!=s1[j])
        {
            printf("\nNot a palindrome");
            return 0;
        }
        
    }
    
    printf("\nIs a palindrome");
    
}