#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{

  long long int number;
  int n, i, nprime = 0, aux = 0;

  printf("Enter a number: ");
  scanf("%lld", &number);

  for (n = 1; n <= number; n++) {

    aux = 0;
    
    for (i = 1; i <= n; i++) {

      if (n % i == 0) {
        aux++;
      }
      if (aux > 2) {
        break;
      }
    }
    if (aux <= 2) {
      printf("\n%d is a prime number", n);
      nprime++;
    }
  }

  printf("\n\n-------------------------------------------------\n");
  printf("There is %d prime numbers in between 1 and %d\n", nprime, number);

  getch();
  return 0;
}
