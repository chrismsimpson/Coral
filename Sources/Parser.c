#include <stdio.h>

#include "Parser.h"
#include "Tokenizer.h"

struct Parser * createParser(
    const struct Tokenizer * tokenizer)
{
    struct Parser * parser;

    if ((parser = malloc(sizeof * parser)) != NULL)
    {
        parser->tokenizer = tokenizer;
    }

    return parser;
}

struct Parser * createParserFromFile(
    const char * filename)
{
    const struct Tokenizer * tokenizer = createTokenizerFromFile(filename);

    return createParser(tokenizer);
}

void deleteParser(
    struct Parser * parser) {

    deleteTokenizer((struct Tokenizer *) parser->tokenizer);

    ///

    free(parser);
}