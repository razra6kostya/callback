#include "mod1.h"
#include "mod2.h"
#include <stdio.h>

int main()
{
    int i;
    int sum;
    struct minmaxcount mmc;
    int m[] = { 3, 6, 1, 9, 7, 2, 4, 8, 5, 0 };
    struct node *root = NULL;
    /* filling a tree with values from an array */
    for (i = 0; i < sizeof(m) / sizeof(*m); i++) {
        int_bin_tree_add(&root, m[i]);
    }

    int_bin_tree_traverse(root, int_callback_print, NULL);
    printf("\n");

    sum = 0;
    int_bin_tree_traverse(root, int_callback_sum, &sum);
    printf("sum: %d\n", sum);

    mmc.count = 0;
    int_bin_tree_traverse(root, int_callback_minmaxcount, &mmc);
    if (mmc.count) {
        printf("count: %d, min: %d, max: %d\n", mmc.count, mmc.min, mmc.max);
    }
    return 0;
}
