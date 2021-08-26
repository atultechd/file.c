#include <stdio.h>
void leap_year(int year);

int main(){
  leap_year(2020);
  leap_year(2021);
  leap_year(2022);
  leap_year(2023);
  leap_year(2024);
  leap_year(2025);
  return 0;
}
void leap_year(int year){
  if (year % 4 == 0){
    printf("This year is a leap year..\n");
  } else {
    printf("This year is not a leap year..\n");
  }
}