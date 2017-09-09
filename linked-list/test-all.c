#//\
rm -f test && clang -std=c99 -I. -DDEBUG test-all.c -o test-all && ./test-all && rm test-all; exit

#include <all.h>
#include <stdio.h>
#include <string.h>

int main() {
  l *first,
    *last;

  char *str1 = malloc(6),
       *str2 = malloc(7);

  last  = n();
  first = last;

  strncpy(str1, "last!", 6);
  last->d = str1;

  strncpy(str2, "first!", 7);
  first = p(last, str2);

  printf("%s\n", (char*)first->d);
  printf("%s\n", (char*)first->n->d);

  return 0;
}
