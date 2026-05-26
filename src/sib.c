#include "modrm.h"

unsigned char build_modrm(
    unsigned char mod,
    unsigned char reg,
    unsigned char rm
) {
    return (mod << 6) | (reg << 3) | rm;
}
