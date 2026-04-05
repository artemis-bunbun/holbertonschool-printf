#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len1, len2;

    len1 = _printf("This sentence is retrieved from va_args!\n");
    len2 = printf("This sentence is retrieved from va_args!\n");
    printf("_printf returned: %d\n", len1);
    printf("printf returned: %d\n", len2);
    return (0);
}