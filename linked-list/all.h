#include <stdlib.h>
#define l struct l
#define n() malloc(24)
l{l*p;void*d;l*n;};l*p(l*N,void*d){l*x=n();x->d=d;x->n=N;return N->p=x;}l*a(l*p,void*d){l*x=n();x->d=d;p->n=x;return x->p=p;}