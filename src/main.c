#include <stdio.h>
#include "util.h"
#include "float_addition.h"
int main() {
    float a=5.8;
    float b=3.2;
    int result = add_float(a,b);
    printf("The result is: %d\n", result);//从这里开始是实验三的部分
    return 0;
}
