void*malloc();typedef struct{void*p,*d,*n;}l;l*n(void*d){l*x=malloc(24);x->d=d;return x;}void c(l*p,l*n){if(p)p->n=n;if(n)n->p=p;}