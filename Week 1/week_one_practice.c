#include <stdio.h>
int main(void)
{
    char c[20];
    printf("Name: ");
    gets(c);
    printf("hello, ");
    puts(c);
}
