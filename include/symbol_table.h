#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

void symbol_table_init(void);
void symbol_add(const char *name, int address);
int symbol_lookup(const char *name);

#endif
