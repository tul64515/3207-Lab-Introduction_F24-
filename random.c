#include <stdio.h>
#include <stdlib.h>
#include "print_random.c"

char rand_char()
{
    char c = 'a' + (random() % 26);
}

void rand_string(char *s, size_t size)
{
    for(int i = 0; i < size; i++)
    {
        s[i] = rand_char();
    }
}

int main()
{
    srand(time(NULL));
    printf("%c\n", rand_char());

    printf("%s\n", rand_string_alloc(7));
}