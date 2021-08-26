#include <stdio.h>
int linear_search(int arr[], int size, int element){
  for (int i = 0; i < size; ++i){
    if (arr[i] == element){
      return i;
    }
  }
  return -1;
}
int binary_search(int arr[], int size, int element){
  int low, mid, high;
  low = 0;
  high = size - 1;
  while(low <= high){
    mid = (low + high) / 2;
    if (arr[mid] == element){
      return mid;
    }
    if (arr[mid] < element){
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}
int main(){
  // unsorted array for linear search.
  // int arr[] = {1, 44, 23, 13, 17, 5, 42, 31, 99, 24, 27};
  // int size = sizeof(arr) / sizeof(int);

  // sorted array for binary search.
  int arr[] = {1, 4, 23, 33, 37, 45, 62, 71, 99, 124, 127};
  int size = sizeof(arr) / sizeof(int);
  int element = 71;
  int search_index = binary_search(arr, size, 71);
  printf("Element %d found at index %d\n", element, search_index);
  return 0;
}
