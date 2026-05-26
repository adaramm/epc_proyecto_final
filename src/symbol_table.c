#include <stdio.h>
#include <string.h>
#include "symbol_table.h"

typedef struct {
    char name[64];
    int address;
} Symbol;

static Symbol table[256];
static int count = 0;

void symbol_table_init(void) {
    count = 0;
}

void symbol_add(const char *name, int address) {

    strcpy(table[count].name, name);
    table[count].address = address;
    count++;
}

int symbol_lookup(const char *name) {

    for (int i = 0; i < count; i++) {

        if (strcmp(table[i].name, name) == 0)
            return table[i].address;
    }

    return -1;
}
