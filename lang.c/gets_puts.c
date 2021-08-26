#include <stdio.h>
#include<string.h>
void say_hello(void);
void say_hello(void){
  char name[20];
  gets(name);
  puts("Hello!");
  puts(name);
}

int main(){
  printf("Enter your name:\n");
  say_hello();
  return 0;
}