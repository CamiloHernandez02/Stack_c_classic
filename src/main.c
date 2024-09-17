#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
        void* data;
        struct Node* previuos;
    } Node;

    Node* create_node(void* data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        perror("Failed to create node");
        exit(EXIT_FAILURE);
    }
    node->data = data;
    node->previuos = NULL;
    return node;
    }

    void free_node(Node* node) {
        if (node != NULL) {
            free(node);
        }
    }

typedef struct Stack {
        Node* top;
    }Stack;

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
        new_node->previuos = stack->top;
        stack->top = new_node;
    }

    void* pop(Stack* stack) {
    if (is_empty(stack)) {
        fprintf(stderr, "Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    Node* temp = stack->top;
    void* data = temp->data;
    stack->top = stack->top->previuos;
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
    
int main(int argc, char const *argv[])
{
    Stack* stack = create_stack();

    int data1, data2, data3;

    printf("Digite el primer numero\n");
    scanf("%d", &data1);

    printf("Digite el segundo numero\n");
    scanf("%d", &data2);

    printf("Digite el tercer numero\n");
    scanf("%d", &data3);

    int* aux1 = malloc(sizeof(int));
    int* aux2 = malloc(sizeof(int));
    int* aux3 = malloc(sizeof(int));

    *aux1 = data1;
    *aux2 = data2;
    *aux3 = data3;

    push(stack, aux1);
    push(stack, aux2);
    push(stack, aux3);

    int* top_element = (int*)pop(stack);
    printf("primer dato \n%d",*top_element);
    printf("\n");

    while (!is_empty(stack)) {
        int* data = (int*)pop(stack);
        if (data != NULL) {
            printf("%d\n", *data);
            free(data);
        } else {
            printf("Failed to pop data\n");
        }
    }
    printf("Ultimo dato almacenado en la pila");

    free_stack(stack);

    return 0;
}