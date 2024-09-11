#include <stdio.h>
#include"rte.h"

int ABS_IntvFrLe;
int ABS_IntvFrLe_classifier;
int mult;

void f(int x) {
    printf("FUNC variable : %d\n",x);
}


int main() {

    printf("main starts\n");
    ABS_IntvFrLe = 42;
    ABS_IntvFrLe_classifier = 10;
    f(ABS_IntvFrLe);
    f(ABS_IntvFrLe_classifier);
    mult = ABS_IntvFrLe * ABS_IntvFrLe_classifier;
    printf("main ends, var2 = %d\n", mult);
}
