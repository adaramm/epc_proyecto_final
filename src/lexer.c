#include <stdio.h>
#include "lexer.h"
#include "parser.h"

int main(int argc, char **argv) {

    if (argc < 2) {
        printf("uso: %s archivo.asm\n", argv[0]);
        return 1;
    }

    lexer_run(argv[1]);
    parser_run();

    return 0;
}
