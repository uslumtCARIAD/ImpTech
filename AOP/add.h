#ifndef __Add_H__
#define __Add_H__
#include <stdio.h>

extern int input1;
extern int input2;
extern int output;
void add_function(void)
{   
    printf("Function Execution ...\n");
    output = input1 + input2;
    printf("out = %d\n", output);
}

#endif