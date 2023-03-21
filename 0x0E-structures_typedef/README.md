README

This directory contains tasks related to structures and typedef in C programming language.

The tasks include:

Creating and using structures: You will learn how to define and declare structures, how to access and modify their members, and how to pass structures to functions.

Structure padding and packing: You will learn about the concept of structure padding and how to pack structures to reduce their memory footprint.

Typedef: You will learn how to use typedef to create aliases for existing data types, and how to use typedef to create new types based on existing ones.

TASK ZERO
Define a new type struct dog with the following elements:
    name, type = char *
    age, type = float
    owner, type = char *

TASK ONE
Write a function that initialize a variable of type struct dog
    Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

TASK TWO
Write a function that prints a struct dog
    Prototype: void print_dog(struct dog *d);
    Format: see example bellow
    You are allowed to use the standard library
    If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
    If d is NULL print nothing.

TASK THREE
Define a new type dog_t as a new name for the type struct dog.

TASK FOUR
Write a function that creates a new dog.
    Prototype: dog_t *new_dog(char *name, float age, char *owner);
    You have to store a copy of name and owner
    Return NULL if the function fails

TASK FIVE
Write a function that frees dogs.
    Prototype: void free_dog(dog_t *d);
