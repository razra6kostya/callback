#include <stdlib.h>
#include <stdio.h>
#include "struct_for_mod.h"

#ifndef MOD1
#define MOD1

void int_bin_tree_add(struct node **root, int n);
void int_callback_print(int data, void *userdata);
void int_callback_sum(int data, void *userdata);
void int_callback_minmaxcount(int data, void *userdata);

#endif
