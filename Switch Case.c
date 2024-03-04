//Arithmetic operation using Switch Case
#include <stdio.h>

int main() {
   
   int num1, num2;
   char op;
   
   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);
   
   printf("Enter a operator: ");
   scanf("\n %c", &op);
   
   switch(op)
   {
       case '+':
       printf("Sum = %d", num1+num2);
       break;
       case '-':
       printf("Sub = %d", num1-num2);
       break;
       case '*':
       printf("Mul = %d", num1*num2);
       break;
       case '/':
       printf("Div = %d", num1/num2);
       break;
       case '%':
       printf("Rem = %d", num1%num2);
       break;
       default:
       printf("Invalid Operator");
   }

    return 0;
}
