#include "compressor.h"

Compressor::Compressor(Compression *alg)
{
 this->p = alg;
}

Compressor::~Compressor()
{
   delete p;
}

void Compressor::compress() {
    p->compress();
}
