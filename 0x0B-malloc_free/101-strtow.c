#include <stdlib.h>
int count_words(char *str);
int get_word_length(char *str);
void copy_word(char *dest, char *src, int n);
/**
* strtow - splits a string into words
* @str: the string to split
*
* Return: pointer to an array of words or NULL if str is NULL or empty
*/
char **strtow(char *str)
{
char **words;
int i, j, k, len, count;
if (str == NULL || *str == '\0')
return (NULL);
count = count_words(str);
if (count == 0)
return (NULL);
words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);
i = 0;
j = 0;
while (i < count)
{
while (str[j] == ' ')
j++;
len = get_word_length(str + j);
words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
copy_word(words[i], str + j, len);
i++;
j += len;
}
words[i] = NULL;
return (words);
}
/**
* count_words - counts the number of words in a string
* @str: the string to count
*
* Return: number of words in str
*/
int count_words(char *str)
{
int count = 0;
int in_word = 0;
while (*str != '\0')
{
if (*str == ' ' && in_word == 1)
in_word = 0;
else if (*str != ' ' && in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}
/**
* get_word_length - gets the length of a word
* @str: the string to check
*
* Return: length of the word
*/
int get_word_length(char *str)
{
int len = 0;
while (str[len] != ' ' && str[len] != '\0')
len++;
return (len);
}
/**
* copy_word - copies a word from src to dest
* @dest: destination for the word
* @src: source of the word
* @n: length of the word
*/
void copy_word(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
dest[n] = '\0';
}
