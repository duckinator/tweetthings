//3/4
ll*linked_list_prepend(ll*n,void*d){ll*x=linked_list_new();x->data=d;x->next=n;n->prev=x;return x;}
