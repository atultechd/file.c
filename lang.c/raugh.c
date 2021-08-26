#include <stdio.h>
int main(){
  int i = 5;
  printf("%d %d %d %d %d %d \n\n", i, i++, i--, ++i, --i, i);
  
  printf("%d \n", i);
  printf("%d \n", i++);
  printf("%d \n", i--);
  printf("%d \n", ++i);
  printf("%d \n", --i);
  printf("%d \n", i);
  return 0;
}