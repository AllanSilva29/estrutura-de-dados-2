#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um nó da árvore binária
struct TreeNode {
    char data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Função para criar um novo nó
struct TreeNode* createNode(char data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Função para imprimir a árvore na notação textual
void printTree(struct TreeNode* root) {
    if (root == NULL) {
        printf("<> ");
    } else {
        printf("<%c ", root->data);
        printTree(root->left);
        printTree(root->right);
        printf("> ");
    }
}

// Função principal
int main() {
    // Construindo a árvore de exemplo
    struct TreeNode* root = createNode('a');
    root->left = createNode('b');
    root->left->left = createNode('d');
    root->right = createNode('c');
    root->right->left = createNode('e');
    root->right->right = createNode('f');

    // Imprimindo a árvore na notação textual
    printf("Notação textual da árvore: ");
    printTree(root);

    // Liberando a memória alocada para a árvore
    // (Não esqueça de implementar a função de liberação de memória adequada)
    // Exemplo:
    // freeTree(root);

    return 0;
}
