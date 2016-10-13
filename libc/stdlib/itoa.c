#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <limits.h>

char* itoa(int value, char* str, int base) {
    size_t index = 0;
    bool l = false;
    if (value < 0) {
        str[index] = '-';
        ++index;
        if (value == INT_MIN) {
            l = true;
            value = -(value + 1);
        }
        else
            value = -value;
        
    }
    int nums[50];
    size_t i = 0;
    while (value != 0) {
        nums[i] = value % base;
        value = value / base;
        ++i;
    }
    if (i == 0)
        return "0";

    if (l)
        nums[0]++;

    for (size_t j = i - 1; j < i; --j) {
        str[index++] = nums[j] + '0';
    }
    str[index++] = '\0';
    return str;
}
