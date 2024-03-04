// find a leap year or not using nested if statement
#include <stdio.h>

int main() {
   
   int year;
   
  printf("Enter a year: ");
  scanf("%d", &year);
  
  if(year%100 == 0)
  {
      if(year%400 == 0)
      {
          printf("It is Leap Year");
      }
     else
     {
         printf("It is Not a Leap Year");
     }
  }
  else 
  {
  if(year%4 == 0)
  {
      printf("It is Leap Year");
  }
  else
  {
      printf("It is Not a Leap Year");
  }
  }
 
    return 0;
}
