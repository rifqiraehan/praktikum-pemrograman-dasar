#include <stdio.h>

void demo(void) {
    auto int var_auto = 0;
    static int var_static = 0;

    printf("auto = %d, static = %d\n", var_auto, var_static);
    ++var_auto;
    ++var_static;
}

int main(){
    int i = 0;

    while (i < 5) {
        demo();
        ++i;
    }

    return 0;
}