#include <stdio.h>
void prime_factor(int number);
int main(){
  prime_factor(999);
  prime_factor(2);
  prime_factor(4);
  prime_factor(9);
  prime_factor(16);
  prime_factor(11);
  prime_factor(25);
  prime_factor(36);
  prime_factor(49);
  prime_factor(64);
  prime_factor(81);
  prime_factor(1000);
  return 0 ;
}
void prime_factor(int number){
  if (number < 1){
    printf("...Error...\n");
  } else {
    if (number % 2 == 0){
      prime_factor(number / 2);
      printf("2\n");
    } else if (number % 3 == 0){ 
      prime_factor(number / 3);
      printf("3\n");
    } else if (number % 5 == 0){
      prime_factor(number / 5);
      printf("5\n");
    } else if (number % 7 == 0){
      prime_factor(number / 7);
      printf("7\n");
    } else if (number % number == 0){
      if (number == 1){
        printf("\n");
      }else{
        printf("\n%d\n", number);
      }
    }
  }
}