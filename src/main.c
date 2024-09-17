#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main(int argc, char const *argv[])
{
    Stack* stack = create_stack();
    if (stack == NULL) {
        fprintf(stderr, "Failed to create stack\n");
        return 1;
    }

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

    if (aux1 == NULL || aux2 == NULL || aux3 == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free_stack(stack);
        return 1;
    }

    *aux1 = data1;
    *aux2 = data2;
    *aux3 = data3;

    push(stack, aux1);
    push(stack, aux2);
    push(stack, aux3);

    int* top_element = (int*)peek(stack);

    while (!is_empty(stack)) {
        int* data = (int*)pop(stack);
        if (data != NULL) {
            printf("Numero obtenido: %d\n", *data);
            free(data);
        } else {
            printf("Failed to pop data\n");
        }
    }

    free_stack(stack);

    return 0;
}