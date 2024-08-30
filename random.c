#include <stdio.h>
#include <stdlib.h>

char rand_char()
{
    char c = 'a' + (random() % 26);
}

int main()
{
    srand(time(NULL));
    printf("%c\n", rand_char());
}