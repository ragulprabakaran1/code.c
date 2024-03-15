//find a given number is palindrome or not using while loop and if else 
#include <stdio.h>

int main() {
    
    int n, copy, rev=0;
    printf("Enter a number:");
    scanf("%d", &n);
    
    copy=n;
    
    while(copy > 0)
    {
        rev=rev*10;
        rev = rev + (copy%10);
        copy = copy/10;
    }
    if(n == rev)
    {
        printf("palindrom");
    }
    else
    {
        printf("Not palindrome");
    }
    
    
    return 0;
}
