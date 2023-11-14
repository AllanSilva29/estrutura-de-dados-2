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

// Função para imprimir os nós em pré-ordem
void printNodesPreOrder(struct TreeNode* root) {
    if (root != NULL) {
        printf("%c ", root->data); // Imprime o nó atual
        printNodesPreOrder(root->left); // Chama recursivamente para a subárvore esquerda
        printNodesPreOrder(root->right); // Chama recursivamente para a subárvore direita
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

    // Imprimindo os nós em pré-ordem
    printf("Nós da árvore em pré-ordem: ");
    printNodesPreOrder(root);

    // Liberando a memória alocada para a árvore
    // (Não esqueça de implementar a função de liberação de memória adequada)
    // Exemplo:
    // freeTree(root);

    return 0;
}
