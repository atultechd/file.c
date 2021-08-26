#include <stdio.h>
int main(){
  int input = 153654, temp, sum = 0, result;
  temp = input;
  while(input > 0){
    result = input % 10;
    sum = sum + result;
    input = input / 10;
  }
  printf("%d\n", sum);
  return 0;
}