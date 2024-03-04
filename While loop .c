//Sum of first n natural numbers using While loop
#include <stdio.h>

int main() {
    
    int i=0,n,sum=0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum = %d", sum);

    return 0;
}
