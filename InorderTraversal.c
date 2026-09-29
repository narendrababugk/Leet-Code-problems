#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
         int *arr = malloc(100 * sizeof(int));
    *returnSize = 0;

    void inorder(struct TreeNode* root) {

        if(root == NULL)
            return;

        inorder(root->left);

        arr[*returnSize] = root->val;
        (*returnSize)++;

        inorder(root->right);
    }

    inorder(root);

    return arr;
}
int main() {
    // Create nodes
    struct TreeNode* root = malloc(sizeof(struct TreeNode));
    struct TreeNode* node1 = malloc(sizeof(struct TreeNode));
    struct TreeNode* node2 = malloc(sizeof(struct TreeNode));
    struct TreeNode* node3 = malloc(sizeof(struct TreeNode));
    struct TreeNode* node4 = malloc(sizeof(struct TreeNode));

    root->val = 1;
    root->left = NULL;
    root->right = node1;

    node1->val = 2;
    node1->left = node2;
    node1->right = NULL;

    node2->val = 3;
    node2->left = NULL;
    node2->right = NULL;

    int returnSize;

    int* result = inorderTraversal(root, &returnSize);

    printf("Inorder Traversal: ");

    for(int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");

    free(result);
    free(node2);
    free(node1);
    free(root);

    return 0;
}