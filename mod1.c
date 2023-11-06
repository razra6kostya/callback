#include "mod1.h"

void int_bin_tree_add(struct node **root, int n)
{
    if (!*root) {
        *root = (struct node*)malloc(sizeof(**root));
        (*root)->val = n;
        (*root)->left = NULL;
        (*root)->right = NULL;
        return;
    }
    if ((*root)->val == n) {
        return;
    }
    if(n < (*root)->val)
        int_bin_tree_add(&(*root)->left, n);
    else
        int_bin_tree_add(&(*root)->right, n);
}

void int_callback_print(int data, void *userdata)
{
    printf("%d", data);
}

void int_callback_sum(int data, void *userdata)
{
    *(int*)userdata += data;
}

void int_callback_minmaxcount(int data, void *userdata)
{
    struct minmaxcount *mmc = userdata;
    if(mmc->count == 0) {
        mmc->min = mmc->max = data;
    } else {
        if (mmc->min > data) 
            mmc->min = data;
        if(mmc->max < data)
            mmc->max = data;
    }
    mmc->count++;
}
