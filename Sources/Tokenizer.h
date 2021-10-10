#ifndef TOKENIZER_H
#define TOKENIZER_H

struct Tokenizer {

    const struct Scanner * scanner;
};

struct Tokenizer * createTokenizer(
    const struct Scanner * scanner);

struct Tokenizer * createTokenizerFromFile(
    const char * filename);

void deleteTokenizer(
    struct Tokenizer * tokenizer);

#endif