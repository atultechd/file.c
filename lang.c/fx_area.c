#include <stdio.h>
#include <math.h>

int area_of_sq(int n);

int main(){
  int number = 17;
  printf("The area of side %d is %d.\n", number, area_of_sq(number));
  return 0;
}

int area_of_sq(int n){
  if (n <= 0){
    return 0;
  } else {
    return pow(n, 2);
  }
}


