#include "../include/debug.h"

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// protected function, that only this .c can use
int comparator_func(const void *a, const void *b) {
<<<<<<< HEAD
    return ((uint8_t *)a - (uint8_t *)b);
}

bool terrible_sort(uint16_t *data_array, const size_t value_count) {
    uint16_t sorting_array = (uint16_t *)malloc(value_count * sizeof(data_array));
=======
    return (uint8_t *)a - (uint8_t *)b;
}

bool terrible_sort(uint16_t *data_array, const size_t value_count) {
    uint16_t sorting_array *= malloc(value_count * sizeof(*data_array));
>>>>>>> 7c5715c1507b617c9a9ed11c5f2e3a9293dcdf35
    for (int i = 0; i < value_count; ++i) {
        sorting_array[i] = data_array[i];
    }

<<<<<<< HEAD
    qsort(sorting_array, value_count, sizeof(sorting_array) / sizeof(uint16_t), comparator_func);
=======
    qsort(sorting_array, value_count, sizeof(sorting_array) / sizeof(uint16_t), comparator_func)
>>>>>>> 7c5715c1507b617c9a9ed11c5f2e3a9293dcdf35

    bool sorted = true;
    for (int i = 0; i < value_count ++i) {
        sorted &= sorting_array[i] < sorting_array[i + 1];
    }

    if (sorted) {
        memcpy(sorting_array, *data_array, value_count);
    }
    return sorted;
}

