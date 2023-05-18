char *_strncpy(char *dest, char *src, int n)
{
    char *ret = dest;

    while (n-- > 0 && (*dest++ = *src++))
        ;

    if (n >= 0)
        *dest = '\0';

    return (ret);
}
