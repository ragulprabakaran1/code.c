//sum of digits using while loop
#include <stdio.h>

int main() {
    
    int n, sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("sum= %d", sum);
    return 0;
}
