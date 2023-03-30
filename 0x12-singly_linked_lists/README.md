## SINGLY LINKED LISTS

&NewLine;

This directory contains a collection of tasks realted to singly linked lists in C. This is a dynamic data structure where each node has data and a reference link to the next node in the list.

---

### TASKS

---

Each task includes a detailed description of what is expected and any constraints that must be met.

Each task has a corresponding test file.

#### Requirements

+ Only use Malloc, free and exit from the C standard library
+ All header files should be guarded

use this data structure
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

&NewLine;

#### ZERO (print_list.c)

Write a function that prints all the elements of a list_t list.

+ Prototype: size_t print_list(const list_t *h);
+ Return: the number of nodes
+ if str is NULL, print [0] (nil)
+ use printf
+ Test file: 0-main.c

&NewLine;

#### ONE (list_len.c)

Write a function that reurns the number of elements in a linked list_t list.

+ Prototype: size_t list_len(const list_t *h);
+ Test file: 1-main.c

&NewLine;

#### TWO (add_node.c)

Write a function that adds a new node at the beginning of a list_t list

+ Prototype: list_t *add_node(list_t **head, const char *str);
+ Return: the address of the new element or null if it failed
+ str needs to be duplicated
+ you are allowed to use strdup
+ Test file: 2-main.c

