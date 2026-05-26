#include "sib.h"

unsigned char build_sib(
    unsigned char scale,
    unsigned char index,
    unsigned char base
) {
    return (scale << 6) | (index << 3) | base;
}
