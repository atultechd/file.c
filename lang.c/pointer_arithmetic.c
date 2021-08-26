#include <stdio.h>
int main(){
  int input = 5;
  int *ptr = &input;
  printf("The address of input is %u\n", ptr);
  ptr++;
  ptr++;
  printf("The address of input is %u\n", ptr);
  return 0;
}