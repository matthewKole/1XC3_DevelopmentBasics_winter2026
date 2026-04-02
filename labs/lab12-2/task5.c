#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BSTNode {
    char name[50];
    int  id;
    struct BSTNode *left;
    struct BSTNode *right;
};

struct BSTNode *createBSTNode(const char *name, int id) {
    struct BSTNode *node = malloc(sizeof(struct BSTNode));
    strncpy(node->name, name, 49);
    node->name[49] = '\0';
    node->id    = id;
    node->left  = NULL;
    node->right = NULL;
    return node;
}

struct BSTNode *insert(struct BSTNode *root, const char *name, int id) {
    if (root == NULL) {
        return createBSTNode(name, id);
    }
    if (id < root->id) {
        root->left  = insert(root->left,  name, id);
    } else if (id > root->id) {
        root->right = insert(root->right, name, id);
    }
    return root;
}

int size(struct BSTNode *root) {
    if (root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

/* Returns the number of edges on the longest root-to-leaf path.
   An empty tree returns -1; a single-node tree returns 0. */
int height(struct BSTNode *root) {
    if (root == NULL) return -1;
    int leftH  = height(root->left);
    int rightH = height(root->right);
    return 1 + (leftH > rightH ? leftH : rightH);
}

void freeBST(struct BSTNode *root) {
    if (root == NULL) return;
    freeBST(root->left);
    freeBST(root->right);
    free(root);
}

int main(void) {
    struct BSTNode *root = NULL;

    root = insert(root, "Dan",   4);
    root = insert(root, "Carol", 3);
    root = insert(root, "Ana",   1);
    root = insert(root, "Elle",  5);
    root = insert(root, "Bob",   2);

    printf("size: %d\n",   size(root));    /* Expected: 5 */
    printf("height: %d\n", height(root));  /* Expected: 4 */

    freeBST(root);
    root = NULL;

    return 0;
}