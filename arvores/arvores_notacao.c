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
    struct TreeNode* b = root->left = createNode('b');
    struct TreeNode* d = root->left->right = createNode('d');
    struct TreeNode* c = root->right = createNode('c');
    struct TreeNode* e = root->right->left = createNode('e');
    struct TreeNode* f = root->right->right = createNode('f');

    // Imprimindo a árvore na notação textual
    printf("Notação textual da árvore: ");
    printTree(c);

    // Liberando a memória alocada para a árvore
    // (Não esqueça de implementar a função de liberação de memória adequada)
    // Exemplo:
    // freeTree(root);

    return 0;
}

