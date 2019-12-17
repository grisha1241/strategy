#ifndef COMPRESSOR_H
#define COMPRESSOR_H
#include <iostream>
#include "compression.h"

class Compressor
{
private:
    Compression *p;
public:
    Compressor(Compression *alg);
    ~Compressor();
    void compress();
};

#endif // COMPRESSOR_H
