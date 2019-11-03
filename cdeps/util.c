#include <stdio.h>
#include "util.h"

/* private data */
uint32_t other_data = 0xFFFF;
uint32_t cnt = 0;

void util_func() {
    printf("util_func, called %ui", cnt++);
}

uint32_t read_other_data() {
    return other_data;
}

