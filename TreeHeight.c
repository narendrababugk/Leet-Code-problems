#include<stdio.h>
#include<stdlib.h>

struct TreeNode {
   int val;
   struct TreeNode *left;
   struct TreeNode *right;
 };
 
int maxDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);

    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}

int main() {
    struct TreeNode n1, n2, n3;

    n1.val = 1;
    n2.val = 2;
    n3.val = 3;

    n1.left = &n2;
    n1.right = &n3;

    n2.left = NULL;
    n2.right = NULL;

    n3.left = NULL;
    n3.right = NULL;

    printf("Height = %d", maxDepth(&n1));

    return 0;
}
	