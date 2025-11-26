#include <stdio.h>
#include <string.h>

int isValid(char *s);

int main()
{
    char s[] = "()[]{}";

    int out = isValid(s);
    printf("%d\n", out);

    return 0;
}

int isValid(char *s)
{
    int length = strlen(s), out = 0, j = length - 1;

    for (int i = 0; i < length / 2; i++)
    {
        printf("s[i] = %c, s[j] = %c\n", s[i], s[j]);
        // if (s[i] == s[j])
        // {
        //     out = 1;
        // }
        // else
        // {
        //     out = 0;
        // }
        // j--;
    }

    printf("%d\n", out);

    return out;
}