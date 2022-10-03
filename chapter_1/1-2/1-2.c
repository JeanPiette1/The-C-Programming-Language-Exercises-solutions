#include <stdio.h>

int main(void)
{
    printf("tab: \t\n");
    printf("backslash: \\\n");
    printf("single quote: \'\n");
    printf("double quote: \"\n");
    printf("%d\n"); // %d and %lf should be assigned with a variable, otherwise it will print anything 
    printf("%lf\n");  // next in the stack (memory) You can get any number depending on the architecture, compiler, optimization ..etc.
    return (0);
}