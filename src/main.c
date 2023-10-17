#include <stdio.h>
#include "util.h"
#include "float_addition.h"
int main() {
    float a=5.0;
    float b=3.2;
    int result = add_float(a,b);
    printf("The result is: %d\n", result);
    return 0;
}
