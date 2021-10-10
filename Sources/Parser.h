#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>

#include "Tokenizer.h"

struct Parser {
    const struct Tokenizer * tokenizer;
};

///

struct Parser * createParser(
    const struct Tokenizer * tokenizer);

struct Parser * createParserFromFile(
    const char * filename);

void deleteParser(
    struct Parser * p);

#endif