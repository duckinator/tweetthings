#include <stdlib.h>
#define l struct l
l{l*p;void*d;l*n;};l*n(void*d){l*x=malloc(24);x->d=d;return x;}void c(l*p,l*n){if(p!=0)p->n=n;if(n!=0)n->p=p;}