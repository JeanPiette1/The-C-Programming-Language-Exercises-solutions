#include <stdio.h>

int getline(char s[])
{
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return (i);
}

void    copy(char to[], char from[])
{
    int i;

    i = 0;
    while (from[i] != '\0')
    {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}

int main(void)
{
    int len;
    int max;
    char *line;
    char *longest;

    max = 0;
    while ((len = getline(line)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
        if (max > 0)
        {
            printf("%s\n", longest);
            printf("length = %d", max);
        }
    }
    return (0);
}