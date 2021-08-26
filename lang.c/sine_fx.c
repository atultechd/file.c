// ...work in process...

#include <stdio.h>
int nth_odd_term(int n);
int power(int base, int input);
int one_to_the_power_sign(int input);
int sine(int theta);
int factorial(int num);

int main(){
  int theta = 1;
  printf("The sine(%d) = %d\n", theta, sine(theta));
  return 0;
}

int factorial(int num){
  int k, result = 1;
  for (k = 1; k <= num; ++k){
    result *= k;
  }
  return result;
}
int sine(int theta){
  float temp = 0; 
  for (int i = 1; i <= 10; ++i){
    temp += (one_to_the_power_sign(i)*(1.0)) * (power(theta, i)*(1.0)/ factorial(nth_odd_term(i))*(1.0)); 
    return temp;
  }
}
int one_to_the_power_sign(int input){
  int result = -1;
  for (int i = 1; i <= input ; ++i){
    result *= (-1);
  }
}
int power(int base, int input){
  int result = 1;
  for (int i = 2; i <= 2 * input; ++i){
    result *= base;
  }
  return result;
}
int nth_odd_term(int n){
  return (2 * n) - 1;
}

