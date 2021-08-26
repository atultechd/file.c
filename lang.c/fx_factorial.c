#include <stdio.h> 
int factorial(int);

int main(){
  int fact;
  fact = factorial(5);
  printf("%d\n", fact);
  return 0;
}

int factorial(int n){
  int k, result = 1;
  for(k = 1; k <= n; k++){
    result *= k;
  }
  return(result);
}