#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hola mundo");
    return 0;
}

struct MyStack<T>
{
    
};

typedef struct Node // clase principal Node
{
    void data;
    struct Node *NextNode;
}Node;

Node* createNewNode(void *data)//Como si fuese un constructor
{
    Node* newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        return NULL;
    }
    newNode->data = data;
    newNode->NextNode = NULL;
    return newNode;
}

void* getData(Node *node){
    return node->data;
}

void setData(Node *node,void* data ){
    node-> data = data;
}