/* Technically a memory allocator. */
void *malloc(size_t size){static size_t *ptr=0;if(ptr==0)ptr=kernel_end;ptr+=size; return (ptr-size);}