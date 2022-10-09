#include <stdio.h>

int main(void)
{
    int c;
    printf("Please enter a character:\n"); // to verify if getchar() != EOF is 0 or 1
    printf("%d\n", getchar() != EOF);      // enter a caracter then press <enter> it will print 1
    return (0);                            // to see (getchar() != EOF) == 0 (on windows) after running the .exe <ctrl> + Z + <enter> will print 0    
}