#include "../inc/libmx.h"

bool mx_isalpha(int c) {
    return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? true : false;
}
