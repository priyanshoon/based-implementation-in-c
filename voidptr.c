#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
} some_t;

/*
 * you see void* is a special type of pointer in C/C++ that can point to data
 * of any type, making it generic or universal pointer.
 */
void* some_t_return() {
    some_t *something = (some_t*)malloc(sizeof(some_t));
    something->data = 10;
    return something;
}

void* return_int() {
    /*
     * now I know why when I tried int a = 14 and return &a; didn't worked
     * because when I said int a <- this gone to the stack memory
     * and when function poped out of stack so does my a
     *
     * I used malloc to allocate a into heap memory so it doesn't have to be
     * dependent on stack, and can free it using free();
     */
    int *a = malloc(sizeof(int));
    *a = 14;
    return a;
}

int main(void) {
    printf("this is end end\n");
    some_t* somethingmore = some_t_return();
    printf("%d\n", somethingmore->data);

    int *something_int = return_int();
    printf("this is int : %d\n", *something_int);

    free(something_int);
    free(somethingmore);

    return 0;
}
