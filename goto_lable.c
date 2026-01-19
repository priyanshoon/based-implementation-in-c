#include <stdio.h>

/*
 * goto statement is never necessary and in practice it is almost easy to write code without it
 * however, there are few situations where gotoS may find a place.
 */

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            goto found;
        } else {
            printf("this is the end of the world!\n");
        }
    }

    found:
        printf("yo there hola");
    return 0;
}

// int main(void) {
//     int x = 0;

//     start:
//         printf("%d\n", x);
//         x++;

//     if (x < 5) {
//         goto start;
//     }

//     return 0;
// }
