//Reverse a number using while loop
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
    printf("Reverse of n: %d", rev);
    
    return 0;
}
