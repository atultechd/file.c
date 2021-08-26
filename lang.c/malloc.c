#include <stdio.h>
#include <stdlib.h>
int main(){
  int *ptr;
  ptr = (int *) malloc(6 * sizeof(int));


  // ......size of operator in c.......
  // printf("The sizeof int is %d\n", sizeof(int));
  // printf("The sizeof float is %d\n", sizeof(float));
  // printf("The sizeof char is %d\n", sizeof(char));
  return 0;
}