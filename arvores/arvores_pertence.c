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

// Função que verifica se um caractere está presente na árvore
int arv_pertence(struct TreeNode* root, char c) {
    // Caso base: se a árvore é vazia, o caractere não está presente
    if (root == NULL) {
        return 0;
    }

    // Verifica se o caractere está na raiz
    if (root->data == c) {
        return 1;
    }

    // Caso contrário, verifica recursivamente nas subárvores esquerda e direita
    return arv_pertence(root->left, c) || arv_pertence(root->right, c);
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

    // Caractere a ser procurado
    char caractereProcurado = 'u';

    // Verificando se o caractere está presente na árvore
    if (arv_pertence(root, caractereProcurado)) {
        printf("O caractere '%c' está presente na árvore.\n", caractereProcurado);
    } else {
        printf("O caractere '%c' não está presente na árvore.\n", caractereProcurado);
    }

    // Liberando a memória alocada para a árvore
    // (Não esqueça de implementar a função de liberação de memória adequada)
    // Exemplo:
    // freeTree(root);

    return 0;
}
