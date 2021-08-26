#include <stdio.h>
int main(){
  int i, j, k, rows;
  printf("Enter the number of lines you want to print :\n");
  scanf("%d", &rows);

  for(i = 1; i <= rows; i ++){
    for (int j = 1; j <= i - 1 ; j ++){
      printf("  ");
    }
    for (k = 1; k <= rows - i + 1 ; k ++){
      printf(" *");
    }
     printf("\n"); 
  }
  return 0;
}