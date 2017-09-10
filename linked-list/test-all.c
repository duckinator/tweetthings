#//\
    rm -f test && clang -std=c99 -I. -DDEBUG test-all.c -o test-all && ./test-all && rm test-all; exit

#include <all.h>
#include <stdio.h>
#include <string.h>

int main() {
    l *first,
      *middle,
      *last;

    char *first_str  = malloc(7),
         *middle_str = malloc(8),
         *last_str   = malloc(7);

    l *current;
    int i;

    // Create nodes.
    strncpy(first_str, "first!", 7);
    first = n(first_str);

    strncpy(middle_str, "middle!", 7);
    middle = n(middle_str);

    strncpy(last_str, "last!", 7);
    last = n(last_str);


    // Connect nodes.
    c(NULL, first);
    c(first, middle);
    c(middle, last);
    c(last, NULL);

    // Iterate over nodes.
    printf("Forward iteration from `first`:\n");

    i = 1;
    current = first;
    while (1) {
        printf("  %i: %s\n", i, current->d);
        i++;
        current = current->n;

        if (current == NULL)
            break;
    }

    printf("\n\n");

    printf("Reverse iteration from `last`:\n");
    i = 3;
    current = last;
    while (1) {
        printf("  %i: %s\n", i, current->d);
        i--;
        current = current->p;

        if (current == NULL)
            break;
    }

    return 0;
}
