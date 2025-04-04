#include "linked_list.h"

#include <stdlib.h>

struct list_node *new_node(size_t value) { 

  // struct list_node *new = malloc(sizeof(struct list_node));
  // new -> value = value;
  // new -> next = NULL; 
  // return new; 
  return 0;
}

void insert_at_head(struct linked_list *list, size_t value) {
  // struct list_node *new = new_node(value);

  // new -> next = list -> head;

  // return new;

}

void insert_at_tail(struct linked_list *list, size_t value) {

  // if (list -> head == NULL)
  // {
  //   list = list -> head;
  // }

  // struct list_node *new_t = list -> head;
  // while((new_t -> next) != NULL)
  // {
  //   new_t = new_t -> next;
  // }
  
  // new_t -> next = new_node(value);


}

size_t remove_from_head(struct linked_list *list) { 

  // struct list_node *q = list -> head;
  // struct list_node *p = list -> head;

  // p = q -> next;
  // list -> head = p;
  // free(q);
  return 0;
}

size_t remove_from_tail(struct linked_list *list) { 

  // struct list_node *q = list -> head;
  // struct list_node *p = list -> head;
  
  // while ((q -> next) != NULL)
  // {
  //   p = q;
  //   q = q -> next;
  // }
  // free(q);
  // if (p == NULL)
  // {
  //   p -> next = NULL;
  // }

  return 0; }

void free_list(struct linked_list list) {

  // struct list_node *free_l = list.head;

  // while (free_l != NULL)
  // {
  //   free(free_l);
  // }


}

// Utility function to help you debugging, do not modify
void dump_list(FILE *fp, struct linked_list list) {
  fprintf(fp, "[ ");
  for (struct list_node *cur = list.head; cur != NULL; cur = cur->next) {
    fprintf(fp, "%zu ", cur->value);
  }
  fprintf(fp, "]\n");
}
