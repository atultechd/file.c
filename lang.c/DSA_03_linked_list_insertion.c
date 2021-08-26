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

struct node *insert_at_first(struct node *head, int data){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  ptr->next = head;
  ptr->data = data;
  return ptr;
}

struct node *insert_at_index(struct node *head, int data, int index){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;
  int i = 0;
  while(i != index-1){
    p = p->next;
    i++;
  }
  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
  return head;

  ptr->data = data;
  return ptr;
}

struct node *insert_at_end(struct node *head, int data){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = data;
  struct node *p = head;
  while(p->next != NULL){
    p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
  return head;
}

struct node *insert_after_node(struct node *head, struct node *prevnode, int data){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = data;
  ptr->next = prevnode->next;
  prevnode->next = ptr;
  return head;
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

  printf("linked list before insertion:\n");
  linked_list_traversal(head);
  printf("linked list after insertion:\n");
  // head = insert_at_first(head, 100);
  // head = insert_at_index(head, 33, 2);
  // head = insert_at_end(head, 90);
  head = insert_after_node(head, second, 59);
  linked_list_traversal(head);
  return 0;
}