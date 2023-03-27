#include <ctype.h>
#include <stdio.h>
#include <string.h>

void remove_trailing_space(char *str)
{
    if (str == NULL)
        return;
    int len = strlen(str);
    while (len > 0 && isspace(str[len - 1]))
    {
        str[--len] = '\0';
    }
}

int main()
{
    char str1[] = "Hello, world!   ";
    char str2[] = "   ";
    char str3[] = "";
    char *str4 = NULL;

    rtrim(str1);
    printf("'%s'\n", str1);

    rtrim(str2);
    printf("'%s'\n", str2);

    rtrim(str3);
    printf("'%s'\n", str3);

    rtrim(str4);
    printf("'%s'\n", str4);

    return 0;
}
