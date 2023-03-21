#include <stdio.h>

/**
 *main - this is the entry point of execution for this code
 *
 *
 *Return: 0 whenever code is successful
 */

int main(void)
{

        printf("Size of a char: %lu byte(s)\n", sizeof(char));
        printf("Size of an int: %lu byte(s)\n", sizeof(int));
        printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
        printf("Size of a float: %lu byte(s)\n", sizeof(float));
        return (0);
}
