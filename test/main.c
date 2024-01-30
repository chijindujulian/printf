#include "../main.h"
/**
 * main - entry point of the program
 *
 *
 * Return: Always 0
 */

int main(void)
{
    printf("Hello world\n");
    printf("A character %c\n", 'j');
    printf("A string %s\n", "hello");
    printf("An integer %d\n", 12);
    printf("A negative integer %d\n\n", -12);

    printf("A line\n\n");

    _printf("Hello world\n");
    _printf("A character %c\n", 'j');
    _printf("A string %s\n", "hello");
    _printf("An integer %d\n", 12);
    _printf("A negative integer %d\n", -12);

    return (0);
}