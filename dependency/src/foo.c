#include "foo.h"

int foo(int idx) {
    static int data[] = {0,1,2,3,4,5,6,7,8,9};
    if((idx >= 0) && (idx < 10)) {
        return data[idx];
    }
    return -1;
}

