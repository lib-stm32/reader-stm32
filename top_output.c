//
// Created by milky on 23.06.2020.
//
#include <inversion_output_port.h>
struct EDIT
{
    sbyte s;
    char c;
    do {
       getchar(c);
    }
    while(stkTop());
};
void init(struct stack *stk) {
    stk->top = 0;
}
void push(struct stack *stk, float f) {
    if(stk->top < NMAX) {
        stk->elem[stk->top] = f;
        stk->top++;
    } else
        printf("Стек полон: %d !\n", stk->top);
}
float stkTop(struct stack *stk) {
    if((stk->top) > 0) {
        return stk->elem[stk->top-1];
    } else {
        printf("Стек пуст!\n");
        return 0;
    }
}
int isempty(struct stack *stk) {
    if(stk->top == 0)    return 1;
    else return 0;
}
