//4/4
ll*linked_list_append(ll*p,void*d){ll*x=linked_list_new();x->data=d;p->next=x;x->prev=p;return x;}
