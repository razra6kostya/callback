
#ifndef STRUCTMOD
#define STRUCTMOD

struct node {
    int val;
    struct node *left, *right;
};

struct minmaxcount {
    int count, min, max;
};

#endif
