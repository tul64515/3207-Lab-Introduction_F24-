#include <stdio.h>
#include <stdlib.h>

// Junhao Zhao
// CIS 3207
// Professor Gene Kwatny

char randchar()
{
    char c = 'a' + (random() % 26);
    return c;
}