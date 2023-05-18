char *_strcpy(char *dest, char *src)
{
    char *ret = dest;

    while ((*dest++ = *src++))
        ;

    return (ret);
}
