GENERAL RULE FOR ALL PROJECTS IN RECURSION
*do not use any kind of loop
*do not use static variables
*You are not allowed to use global variables
*No more than 5 functions per file
*You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden

TASK ZERO
Write a function that prints a string, followed by a new line.
    Prototype: void _puts_recursion(char *s);
More about puts here: https://man7.org/linux/man-pages/man3/puts.3.html

TASK ONE
Write a function that prints a string in reverse.
    Prototype: void _print_rev_recursion(char *s);

TASK TWO
Write a function that returns the length of a string.
    Prototype: int _strlen_recursion(char *s):
More about strlen here: https://man7.org/linux/man-pages/man3/strlen.3.html

TASK THREE
Write a function that returns the factorial of a given number.
    Prototype: int factorial(int n);
    If n is lower than 0, the function should return -1 to indicate an error
    Facorial of 0 is 1

TASK FOUR
Write a function that returns the value of x raised to the power of y.
    Prototype: int _pow_recursion(int x, int y);
    If y is lower than 0, the function should return -1
More about pow here: https://linux.die.net/man/3/pow

TASK FIVE
Write a function that returns the natural square root of a number.
    Prototype: int _sqrt_recursion(int n);
    If n does not have a natural square root, the function should return -1
More about sqrt here: https://man7.org/linux/man-pages/man3/sqrt.3.html
