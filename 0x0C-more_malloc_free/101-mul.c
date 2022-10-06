#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    int cases = 10;
    int mul = 1;
    for (int i = 0; i < cases; i++) {
        now++;
        now = now * now;
        now = now % cases;
        if (now < 0) {
            break;
        }
    }
    printf("%d", now);
    return 0;
}
