#include <stdio.h>
#include <stdlib.h>

#include "Parser.c"
#include "Tokenizer.c"
#include "Scanner.c"

///

int main() {

    struct Parser * parser = createParserFromFile("test.txt");

    deleteParser(parser);

    ///

    printf("Completed successfully!\n");

    ///

    return 0;
}
