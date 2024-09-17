#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "Node.h"

Stack* create_stack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    if (stack == NULL) {
        perror("Failed to create stack");
        exit(EXIT_FAILURE);
    }
    stack->top = NULL;
    return stack;
}

void push(Stack* stack, void* data) {
    Node* new_node = create_node(data);
    new_node->next = stack->top;
    stack->top = new_node;
}

void* pop(Stack* stack) {
    if (is_empty(stack)) {
        fprintf(stderr, "Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    Node* temp = stack->top;
    void* data = temp->data;
    stack->top = stack->top->next;
    free_node(temp);
    return data;
}

void* peek(const Stack* stack) {
    if (is_empty(stack)) {
        fprintf(stderr, "Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return stack->top->data;
}

int is_empty(const Stack* stack) {
    return stack->top == NULL;
}

void free_stack(Stack* stack) {
    while (!is_empty(stack)) {
        pop(stack);
    }
    free(stack);
}