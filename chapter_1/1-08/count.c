#include <stdio.h>

int main(void)
{
    int c, tab, space, nl;

    tab = space = nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            space++;
        else if (c == '\t')
            tab++;
        else if (c == '\n')
            nl++;
    }
    printf("number of tab : %d\n", tab);
    printf("number of new line : %d\n", nl);
    printf("number of space : %d\n", space);
    return (0);
}