#include <stdio.h>
#include <assert.h>


int main(void) {
    int a = 5;

    // use assert only when you think something's gonna be not okay in future
    // where you think that the program may no give you deterministic result
    if (a % 2 == 0) printf("this is the greatest odd even ever\n");
    else assert(a % 2 == 0);

    return 0;
}
