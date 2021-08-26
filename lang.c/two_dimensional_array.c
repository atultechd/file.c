#include <stdio.h>
int main(){
  long int no_of_stud = 3;
  long int no_of_subs = 5;
  long int marks[3][5];
  for (long int i = 0; i < no_of_stud; ++i){
    for (long int j = 0; j < no_of_subs; ++j){
      printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
      scanf("%d", &marks[i][j]);
    }
  }
  for (long int i = 0; i < no_of_stud; ++i){
    for (long int j = 0; j < no_of_subs; ++j){
      printf("The marks of student %d in subject %d is %d\n", i+1, j+1, marks[i][j]);
    }
  }
  return 0;
}
