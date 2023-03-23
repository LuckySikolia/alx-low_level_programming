**ALX Function Pointers in C Tasks**
This directory contains a set of tasks related to function pointers in the C programming language, designed for ALX students to practice and improve their understanding of this important topic. Function pointers are a powerful feature of C that allow functions to be passed as arguments to other functions, stored in data structures like arrays, and manipulated dynamically at runtime. Understanding function pointers is important for advanced C programming, especially for tasks like implementing callbacks, function dispatch tables, and dynamic linking.

TASK ZERO
Write a function that prints a name 
    prototype: void print_name(char *name, void (f)(char *));

TASK ONE
Write a function that executes a function given as a parameter on each element of an array
    prototype: void array_iterator(int *array, size_t size, void (*action)(int));
    where size is the size of the array
    and action is a pointer to the function you need to use.

TASK TWO
write a function that searches for an integer
    prototype: int int_index(int *array, int size, int (*cmp)(int));
    size is the number of elements in the array
    cmp is a pointer to the functionto be used to compare values
    int_index returns the index of the first element for which the cmp function does not return 0
    if no element matches return -1
    if size is <=0 return -1

TASK THREE
write a program that performs simple operations
    use the standard library
    usage: calc num1 operator num2
    assume num1 and num2 are integers so use atoi to convert them from string to int
    operator is one of the followint +, - , *, /, %
    the program prints the result of the operation followed by a new line
    assume the results are stored in an int
    if the number of arguments is wrong print error followed by a new line and exit status 98
    if the operator is none of the above print error followed by a new line and exit status 98
    if the uer tries to divide (/ or %) by zero print error followed by a new line and exit status 100

    the calc.h file contains the function prototypes and data structures used by the program

    the op-functions.c contains the following functions only
    op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
    op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
    op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
    op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
    op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);
    
    the get-op-function.c file contains the function that selects the correct function to perform the operation asked by the user. do not declare functions here
    prototype: int (*get_op_func(char *s))(int, int);
    do not use switch statements, for or do...while loops, goto, else, more than one if statement, more than one while statement
    if s doesnt match any of the operators return NULL
        only declare these two variables
        op_t ops[] = {
            {"+", op_add},
            {"-", op_sub},
            {"*", op_mul},
            {"/", op_div},
            {"%", op_mod},
            {NULL, NULL}
        };
        int i;
    
    the main.c file should contain the main file only
    do not directly call  op_add, op_sub, op_mul, op_div or op_mod
    use atoi to convert the arguments to int
    no use of loops
    use a max of three statements
