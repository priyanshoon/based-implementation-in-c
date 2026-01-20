#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    char* name;
} some_t;

int main(void) {
    printf("memory management in c\n");

    int* x = malloc(sizeof *x);
    *x = 2;
    printf("%d", *x);
    printf("\n%lu\n", sizeof(*x));
    printf("%lu\n", sizeof(int));

    // this is how we write calloc when we cast types
    // some_t *something = (some_t*)calloc(10, sizeof(some_t));
    // this is how we write calloc without casting ourself and let the 
    // compiler take care of it.
    some_t* something = calloc(10, sizeof *something);
    for (int i = 0; i < 15; i++) {
        something[i].data = i;
        something[i].name = "priyanshu";
    }

    // although c doesn't warn or throw error, this is undefined behavior
    // meaning I only set calloc to store 10 some_t objects, and then 
    // used it as if it held 15
    // for (int i = 0; i < 15; i++)
    for (int i = 0; i < 10; i++)
        printf("%d - %s\n", something[i].data, something[i].name);

    free(something);
    free(x);
    return 0;
}
