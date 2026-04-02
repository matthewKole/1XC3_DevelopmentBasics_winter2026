#include <stdio.h>

/*
 * PROGRESS CHECK 6 — BST Traversal Explanation
 * ============================================================
 *
 * Q: What is the difference between inorder, preorder, and postorder traversal?
 *
 * All three are depth-first traversals that visit every node exactly once.
 * The only difference is WHEN the current node is processed relative to its
 * left and right subtrees:
 *
 *   Inorder   (Left → Node → Right):
 *       The current node is processed BETWEEN its two subtrees. For a BST this
 *       always visits nodes in ascending key order, making it the natural choice
 *       for printing a sorted list or verifying the BST property.
 *
 *   Preorder  (Node → Left → Right):
 *       The current node is processed BEFORE its subtrees. Because every parent
 *       is visited before its children, the sequence can be re-inserted into an
 *       empty BST to reproduce the exact same tree shape — useful for copying
 *       or serialising a tree.
 *
 *   Postorder (Left → Right → Node):
 *       The current node is processed AFTER both subtrees. Every descendant is
 *       handled before its ancestor, which is required whenever an operation on
 *       a node depends on its children already being finished (e.g., freeing
 *       memory, computing subtree totals).
 *
 * ============================================================
 *
 * Q: Why is postorder the correct order to use when freeing a BST?
 *
 * If we freed a node before recursing into its children (as preorder would do),
 * we would immediately lose the only pointers to those children. Reading
 * node->left or node->right after calling free(node) is undefined behaviour —
 * the memory no longer belongs to us, so the pointer values stored there could
 * be overwritten by the allocator at any moment. The program might crash, or
 * silently leak every node below the one we freed too early.
 *
 * Postorder solves this by fully freeing the left subtree, then the right
 * subtree, and only then freeing the current node. At the moment we call
 * free(root), both children have already been deallocated and we no longer need
 * their pointers. This guarantees every node is freed exactly once with no
 * dangling pointer accesses, making postorder the only safe traversal order for
 * freeing a BST.
 *
 * ============================================================
 */

int main(void) {
    /* No code required for this progress check — see comment block above. */
    return 0;
}