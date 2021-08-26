#include <stdio.h>
int main(){
  int i, j, k, rows;
  printf("Enter the number of lines you want to print :\n");
  scanf("%d", &rows);

  for(i = 1; i <= rows; i ++){
    for (int j = 1; j <= rows - i ; j ++){
      printf("  ");
    }
    for (k = 1; k <= i; k ++){
      printf("*   ");
    }
     printf("\n"); 
  }
  return 0;
}