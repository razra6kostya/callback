#include "struct_for_mod.h"

#ifndef MOD2
#define MOD2

void int_bin_tree_traverse(struct node *r,
                           void (*callback)(int, void*),
                           void *userdata);

#endif
