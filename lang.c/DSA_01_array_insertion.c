#include <stdio.h>
void display(int arr[], int n){
  // traversal
  for (int i = 0; i < n; ++i){
    printf("%d\n", arr[i]);
  }
}
int insertion(int arr[], int size, int element, int capacity, int index){
  if (size >= capacity){
    return -1;
  }
  for (int i = (size - 1); i >= index; --i){
    arr[i + 1] = arr[i];
  }
  arr[index] = element;
  return 1;
}
int main(){
  int arr[100]= {12, 13, 67, 77, 44};
  int size = 5;
  printf("array before insertion:\n");
  display(arr, size);
  insertion(arr, 5, 100, 100, 2);
  size += 1;
  printf("New array after insertion:\n");
  display(arr, size);
  return 0;
}
