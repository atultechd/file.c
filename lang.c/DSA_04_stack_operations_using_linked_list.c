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

int is_empty(struct node *top){
  if (top == NULL){
    return 1;
  } else {
    return 0;
  }
}

int is_full(struct node *top){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  if (ptr == NULL){
    return 1;
  } else {
    return 0;
  }
}

// Case 1: pushing the element in stack
struct node *push(struct node *head, int new_data){
  if (is_full(head)){
    printf("stack overflow\n");
  }else{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = new_data;
    ptr->next = head;
    head = ptr;
  }
  return head;
}

// Case 2: poping the element from the stack
int pop(struct node **head){
  if (is_empty(*head)){
    printf("stack underflow\n");
  } else {
    struct node *ptr = *head;
    *head = (*head)->next;
    int var = ptr->data;
    free(ptr);
    return var;
  }
}

// Case 3: peeking the element in stack
// void peek(struct node *ptr){
//   while(ptr != NULL){
//     printf("%d\n", ptr->data);
//     ptr = ptr->next;
//   }
// }

int main(){
  struct node *head = NULL;
  head = push(head, 10);
  head = push(head, 20);
  head = push(head, 50);
  head = push(head, 40);

  linked_list_traversal(head);
  int element = pop(&head);
  printf("popped element is %d\n", element);
  linked_list_traversal(head);

  return 0;
}