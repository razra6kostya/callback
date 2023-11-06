#include "mod2.h"

void int_bin_tree_traverse(struct node *r,
                           void (*callback)(int, void*),
                           void *userdata)
{
    if (!r)
        return;
    int_bin_tree_traverse(r->left, callback, userdata); 
    (*callback)(r->val, userdata);
    int_bin_tree_traverse(r->right, callback, userdata); 
}
