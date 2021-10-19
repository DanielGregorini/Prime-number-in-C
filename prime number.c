  #include <stdio.h>

  int main(void) {

   int i, n, valor, aux, nprimo, nprimosfinal;
   aux = 0;
   valor = 0;
   nprimosfinal = 0;

   printf("Digite um valor: ");
   scanf("%d", &nprimo);

    for (n = 1; n <= nprimo; n++){ 
     aux = 0;
      for (i = 1; i <= n; i++){

        if (n % i == 0){
          aux++;
        }

      }
      if (aux <= 2){
        printf("%d is a prime number\n",n);
        nprimosfinal++;
      }

    }
   printf("-----------------------------------------\n");
   printf("Is %d prime number in between 1 and %d",nprimosfinal,nprimo);

  return 0;
  }
