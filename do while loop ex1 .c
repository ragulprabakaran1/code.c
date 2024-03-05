//Factorial using do while loop
#include <stdio.h>

int main() {
    
    int i=1, n, fact=1;
     
     printf("Enter a number: ");
     scanf("%d", &n);
     
     do
     {
     fact=fact*i;
     i++;
     }
     while(i<=n);
     
     printf("Fact = %d", fact);
    return 0;
}
