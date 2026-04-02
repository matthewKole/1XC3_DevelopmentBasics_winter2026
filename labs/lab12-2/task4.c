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
    /* duplicate ids are ignored */
    return root;
}

void inorder(struct BSTNode *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%s %d", root->name, root->id);
    if (root->right != NULL) printf(", ");
    inorder(root->right);
}

int main(void) {
    struct BSTNode *root = NULL;

    root = insert(root, "Dan",   4);
    root = insert(root, "Carol", 3);
    root = insert(root, "Ana",   1);
    root = insert(root, "Elle",  5);
    root = insert(root, "Bob",   2);

    inorder(root);
    printf("\n");
    /* Expected: Ana 1, Bob 2, Carol 3, Dan 4, Elle 5 */

    return 0;
}