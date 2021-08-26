// *****functions****** 

#include<stdio.h>

int func_1()
{
  int a;
  printf("Enter the first number.\n");
  scanf("%d", &a);

}

int func_2()
{
  int b;
  printf("Enter the second number.\n");
  scanf("%d", &b);

}

int sum(int a, int b)
{
  return func_1 + func_2;
}


int main(){
  int a, b, c;
  
  c = sum(func_1, func_2);
  printf("your result is \n");
  printf("%d\n", c);

  return 0;
}


// ....code-2....

// int sum(int a, int b);

// int main(){
//   int c;
//   c = sum(3, 5);
//   printf("%d\n", c);
//   return 0;
// }

// int sum(int a, int b){
//   int results;
//   results = a + b;
//   return results;
// } 
