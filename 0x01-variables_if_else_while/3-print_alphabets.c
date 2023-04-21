int main(void)
{
    char letter = 'a';
    int i;

    // print lowercase alphabet
    for (i = 0; i < 26; i++)
    {
        putchar(letter);
        letter++;
    }

    letter = 'A';

    // print uppercase alphabet
    for (i = 0; i < 26; i++)
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return 0;
}

