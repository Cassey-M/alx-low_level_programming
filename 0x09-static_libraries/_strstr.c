#include <stdlib.h>
char *_strstr(char *haystack, char *needle)
{
    unsigned int i, j;

    if (*needle == '\0')
        return haystack;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        if (haystack[i] == needle[0])
        {
            for (j = 0; needle[j] != '\0'; j++)
            {
                if (haystack[i + j] != needle[j])
                    break;
            }
            if (needle[j] == '\0')
                return &haystack[i];
        }
    }

    return NULL;
}
