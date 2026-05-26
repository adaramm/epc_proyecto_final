#include <stdio.h>
#include "lexer.h"

void lexer_run(const char *filename) {

    FILE *fp = fopen(filename, "r");

    if (!fp) {
        printf("No se pudo abrir %s\n", filename);
        return;
    }

    printf("[LEXER] Analizando %s\n", filename);

    fclose(fp);
}
