#include <stdio.h>
#include <assert.h>

int my_strlen (const char *str);
char *my_strcpy (char *str1, const char *str2);
const char *my_strchr (const char *str, int c);
int my_strcmp (const char *str1, const char *str2);
char *my_strcat (char *dest, const char *src);
int my_puts (const char *str);
char *my_strncpy (char *dest, const char *src, const int num);
char *my_strncat (char *dest, const char *src, int num);
char *my_fgets (char *str, int maxch, FILE *file);
char *my_strdup (const char *src);
int my_getline (char *line, int max, FILE *file);

int my_strlen (const char *str)
{
    assert (str);

    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}

char *my_strcpy (char *dest, const char *src)
{
    assert (dest);
    assert (src);

    for (int i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    return dest;
}

const char *my_strchr (const char *str, int c)
{
    assert (str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            return str + i;
        }
    }

    return nullptr;
}

int my_strcmp (const char *str1, const char *str2)
{
    assert (str1);
    assert (str2);

    int i = 0;
    while (str1[i] == str2[i])
    {
        i++;
    }

    return str1[i] - str2[i];
}

char *my_strcat (char *dest, const char *src)
{
    assert (dest);
    assert (src);

    int len_dest = 0;

    while (dest[len_dest] != '\0')
    {
        len_dest++;
    }

    for (int len_src = 0; dest[len_dest] = src[len_src]; len_src++, len_dest++)
        ;

    return dest;
}

int my_puts (const char *str)
{
    assert (str);

    while (printf ("%c", *str++) > 0 && *str != '\0')
        ;

    if (printf ("%c", *str++) < 0)
        return EOF;

    printf ("\n");

    return 0;
}

char *my_strncpy (char *dest, const char *src, int num)
{
    assert (dest);
    assert (src);

    char *out = dest;

    while (num-- && *src != '\0')
    {
        *dest++ = *src++;
    }

    return out;
}

char *my_strncat (char *dest, const char *src, int num)
{
    assert (dest);
    assert (src);

    char *out = dest;

    int i = 0;
    while (dest[i])//
    {
        i++;
    }

    int j = 0;
    while (src[j] && j < num)
    {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';

    if (dest[0])
    {
        return out;
    }
    else
    {
        return nullptr;
    }
}

char *my_fgets (char *str, int maxch, FILE *file)
{
    assert (str);
    assert (file);

    int ch = 0;
    int len = 0;

    while ((ch = fgetc(file)) != '\n' && ch != EOF && len < maxch)
    {
        *(str+len) = ch;
        len++;
    }

    *(str+len) = '\n';
    len++;
    *(str+len) = '\0';

    if (len > 0)
    {
        return str;
    }

    return nullptr;
}

char *my_strdup (const char *src)
{
    assert (src);

    int maxlen = 1000;

    char dest[maxlen];
    char *out = dest;

    for (int i = 0; dest[i] = src[i]; i++)
        ;

    return out;
}

int my_getline (char *line, int max, FILE *file)//size_t
{
    assert(line);
    assert(file);

    if (my_fgets (line, max, file))
    {
        return my_strlen(line);
    }
    else
    {
        return -1;
    }
}

