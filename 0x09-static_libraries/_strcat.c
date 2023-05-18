char *_strcat(char *dest, char *src)
{
    char *ret = dest;

    while (*dest)
        dest++;

    while ((*dest++ = *src++))
        ;

    return (ret);
}
