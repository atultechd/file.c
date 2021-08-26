// ...call_by_reference...

#include <stdio.h>
void swap(int *x, int *y);
int main(){
  int a = 10, b = 20;
  printf("Before using swap function we have a = %d , b = %d\n", a, b);
  swap(&a, &b);
  printf("After using swap function we get a = %d , b = %d\n", a, b);
  return 0;
}

void swap(int *x, int *y){
  int t;
  t = *x;
  *x = *y;
  *y = t;
}