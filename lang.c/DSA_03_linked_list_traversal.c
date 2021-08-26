#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
};

void linked_list_traversal(struct node *ptr){
  while(ptr != NULL){
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  }
}

int main(){
  struct node *head;
  struct node *second;
  struct node *third;

  // Allocate memory for nodes in the linked list in heap
  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  // link first and second node
  head->data = 10;
  head->next = second;

  // link second and third node
  second->data = 20;
  second->next = third;

  // terminate the list at the third node
  third->data = 30;
  third->next = NULL; 

  linked_list_traversal(head);
  return 0;
}