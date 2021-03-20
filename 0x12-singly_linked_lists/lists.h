#ifndef LIST_H
#define LIST_H

#include <>
#include <>

/**
  * list_t - data
  * @s: string
  * @len: lenght
  * @list_t: node
  */

typedef struct list_t
{
char *s;
unsigned long len;
struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

