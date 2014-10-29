#//\
rm -f test && clang -std=c99 -I. -DDEBUG test.c -o test && ./test && rm test; exit

#include <stdio.h>
#include <one.h>
#include <two.h>
#include <three.h>
#include <four.h>

int main() {
  linked_list *first,
              *last;

  char *str1 = malloc(6),
       *str2 = malloc(7);

  last  = linked_list_new();
  first = last;

  strncpy(str1, "last!", 6);
  last->data = str1;

  strncpy(str2, "first!", 7);
  first = linked_list_prepend(last, str2);

  printf("%s\n", (char*)first->data);
  printf("%s\n", (char*)first->next->data);

  return 0;
}
