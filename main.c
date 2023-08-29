#include <stdio.h>
#include <string.h>

void rev_s(char *str);

int main()
{
    char str[100];
    printf("Enter string to be reversed: ");
    gets(str);
    printf("Original: %s\n", str);
    rev_s(str);
    printf("Reversed: %s\n", str);

    return 0;
}

void rev_s(char *str)
{
    int length = strlen(str);

    // Reverse the entire string
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        char x = str[i];
        str[i] = str[j];
        str[j] = x;
    }

    // Reverse individual words
    int start = 0;
    for (int i = 0; i <= length; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            for (int j = start, k = i - 1; j < k; j++, k--)
            {
                char x = str[j];
                str[j] = str[k];
                str[k] = x;
            }
            start = i + 1;
        }
    }
}
