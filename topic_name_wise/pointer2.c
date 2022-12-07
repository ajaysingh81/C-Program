#include <stdio.h>
#include <stdlib.h>
char *reverse(char *);
char *reverse(char *p)
{
    int i, l;
    int ch;
for (i = 0; *(p + l) != '\0'; l++);
    for (i = 0; i < l / 2; i++)
    {
        ch = *(p + i);
        *(p + i) = *(p + l - 1 - i);
        *(p + l - 1 - i) = ch;
    }
    return (p);
}


int main()
{
    printf("hello");
    printf("%p\n", reverse("computer"));
}

