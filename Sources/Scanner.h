#ifndef SCANNER_H
#define SCANNER_H

#include <stdio.h>

enum ScannerType {

    scannerTypeFile,
    scannerTypeStringSource
};

struct Scanner {

    const enum ScannerType scannerType;

    const char * source;

    const FILE * file;

    ///

    int rawPosition;
    int lineNumber;
    int column;
};

struct Scanner * createScanner(
    enum ScannerType scannerType, 
    const FILE * file,
    const char * source);

struct Scanner * createScannerFromFile(
    const char * filename);

struct Scanner * createScannerFromString(
    const char * source);

void deleteScanner(
    struct Scanner * s);

#endif