#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
};

void linked_list_traversal(struct node *head){
  struct node *ptr = head;
  do {
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  }while(ptr != head);
}

struct node *insert_at_first(struct node *head, int data){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = data;

  struct node *p = head->next;
  while(p->next != head){
    p = p->next;
  }
  p->next = ptr;
  ptr->next = head;
  head = ptr;
  return head;
}
int main(){
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;

  // Allocate memory for nodes in the linked list in heap
  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));

  // link first and second node
  head->data = 10;
  head->next = second;

  // link second and third node
  second->data = 20;
  second->next = third;

  // link third and fourth node
  third->data = 30;
  third->next = fourth; 

  // link fourth and first node
  fourth->data = 40;
  fourth->next = head;

  linked_list_traversal(head);

  head = insert_at_first(head, 55);
  linked_list_traversal(head);
  return 0;
}