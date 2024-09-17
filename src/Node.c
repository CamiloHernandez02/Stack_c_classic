#include <stdio.h>
#include <stdlib.h>
#include "node.h"

Node* create_node(void* data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        perror("Failed to create node");
        exit(EXIT_FAILURE);
    }
    node->data = data;
    node->next = NULL;
    return node;
}

void free_node(Node* node) {
    if (node != NULL) {
        free(node);
    }
}