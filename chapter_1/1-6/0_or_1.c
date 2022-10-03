#include <stdio.h>

int main(void)
{
    printf("Please enter a character:\n"); // while you enter a caracter getchar() != EOF == 1, otherwise 0
    printf("The expression \"getchar() != EOF\" is %d.\n", getchar() != EOF);
    return 0;
}