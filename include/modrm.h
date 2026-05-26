#ifndef MODRM_H
#define MODRM_H

unsigned char build_modrm(
    unsigned char mod,
    unsigned char reg,
    unsigned char rm
);

#endif
