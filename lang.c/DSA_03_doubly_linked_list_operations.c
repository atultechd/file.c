#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
  struct node *prev;
};

void linked_list_traversal_forward(struct node *ptr){
  while(ptr != NULL){
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  }
}

void linked_list_traversal_backward(struct node *ptr){
  while(ptr != NULL){
    printf("%d\n", ptr->data);
    ptr = ptr->prev;
  }
}

struct node *insert_at_first(struct node *head, int data){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  ptr->next = head;
  ptr->data = data;
  if (head != NULL){
    head->prev = ptr;
  }
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
  head->prev = NULL;

  // link second and third node
  second->data = 20;
  second->next = third;
  second->prev = head;

  // link third and fourth node
  third->data = 30;
  third->next = fourth; 
  third->prev = second;

  // link third from previous of fourth node
  fourth->data = 40;
  fourth->next = NULL;
  fourth->prev = third; 

  printf("Traverse in forward direction before insertion:\n");
  linked_list_traversal_forward(head);
  printf("Traverse in backward direction before insertion:\n");
  linked_list_traversal_backward(fourth);
  
  // head = insert_at_first(head, 29);
  head = insert_at_end(head, 60);

  printf("Traverse in forward direction after insertion:\n");
  linked_list_traversal_forward(head);
  printf("Traverse in backward direction after insertion:\n");
  linked_list_traversal_backward(fourth);
  return 0;
}