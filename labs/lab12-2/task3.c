#include <stdio.h>

/*
 * PROGRESS CHECK 3 — Linked List Explanation
 * ============================================================
 *
 * Q: Why must deleting the head node be handled as a special case in delete?
 *
 * When deleting any node from a linked list, the standard approach is to find
 * the node that comes BEFORE the target so we can redirect its next pointer
 * around the target. The head node has no predecessor inside the list — nothing
 * inside the chain points to it. The only reference to it is the external head
 * pointer held by the caller. Because there is no predecessor node to update,
 * we cannot use the same loop that works for all other nodes. Instead, we must
 * detect "the node to delete IS the head," advance the head pointer to
 * head->next ourselves, and then free the old head node. Skipping this special
 * case would mean trying to walk backwards to a predecessor that does not exist,
 * either crashing or silently skipping the deletion entirely.
 *
 * ============================================================
 *
 * Q: What would happen if you called free(head) without updating the head
 *    pointer first?
 *
 * Calling free(head) returns that block of memory to the heap, but the head
 * pointer variable itself still holds the old address. That address now refers
 * to memory the program no longer owns — this is called a "dangling pointer."
 * Any subsequent access through head (reading head->data, following head->next,
 * passing head to another function) is undefined behaviour. In practice the
 * program might crash with a segmentation fault immediately, or it might appear
 * to work and then fail unpredictably later if the heap reuses that memory for
 * a different allocation, silently corrupting data in a way that is very
 * difficult to debug. The fix is always to save head->next in a temporary
 * variable, update head to that value, and only then free the old node.
 *
 * ============================================================
 */

int main(void) {
    /* No code required for this progress check — see comment block above. */
    return 0;
}