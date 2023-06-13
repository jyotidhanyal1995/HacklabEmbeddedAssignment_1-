#ifndef SLL_H
#define SLL_L

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define DATA_NOT_FOUND -2
#define LIST_EMPTY -4
#define POSITION_NOT_FOUND -3
typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *link;
}Slist;
int insert_at_first(Slist **head, data_t data);
int sl_delete_element(Slist **head, data_t);
int sl_delete_list(Slist **head);
int delete_n_element(Slist **head,data_t );
void print_list(Slist *head);

#endif
