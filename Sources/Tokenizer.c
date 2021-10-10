#include <stdio.h>

#include "Scanner.h"
#include "Tokenizer.h"

struct Tokenizer * createTokenizer(
    const struct Scanner * scanner)
{
    struct Tokenizer * tokenizer;

    if ((tokenizer = malloc(sizeof * tokenizer)) != NULL)
    {
        tokenizer->scanner = scanner;
    }

    return tokenizer;
}

struct Tokenizer * createTokenizerFromFile(
    const char * filename)
{
    struct Scanner * scanner = createScannerFromFile(filename);

    return createTokenizer(scanner);
}

void deleteTokenizer(
    struct Tokenizer * tokenizer) {

    free(tokenizer);
}