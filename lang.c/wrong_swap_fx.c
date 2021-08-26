#include <stdio.h>
void swap(int x , int y);

int main(){
  int a = 2 , b = 5;
  printf("Before using swap function we have :\n a = %d , b = %d\n", a, b);
  swap(x, y);
  printf("After applying swap function we get :\n a = %d , b = %d\n", a, b);
  return 0;
}
void swap(int x , int y){
  int t;
  t = x;
  x = y;
  y = t;
  // printf("After applying swap function we get :\n a = %d , b = %d\n", a, b);
}