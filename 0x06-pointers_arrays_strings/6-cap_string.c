#include "main.h"

/**
* cap_string - capitalize all words of a string
* @n: input value
* Return: string
*/

char *cap_string(char *n)
{
    int i;

    i = 0;
    if (n[0] >= 'a' && n[0] <= 'z')
    {
        n[0] = n[0] - 32;
    }
    for (i = 0; n[i] != '\0'; i++)
    {
        switch (n[i])
        {
        case ',':
        case ';':
        case '.':
        case '!':
        case '?':
        case '"':
        case '(':
        case ')':
        case '{':
        case '}':
        case ' ':
        case '\n':
        case '\t':
        if (n[i+1] > 96 && n[i + 1] < 123)
        {
            n[i + 1] = n[i + 1] - 32;
        }
        }
    }
    return (n);
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
