#ifndef STACK_H
#define STACK_H

#include "Node.h"

typedef struct Stack {
    Node* top;
} Stack;

Stack* create_stack();
void push(Stack* stack, void* data);
void* pop(Stack* stack);
void* peek(const Stack* stack);
int is_empty(const Stack* stack);
void free_stack(Stack* stack);

#endif 