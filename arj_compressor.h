#ifndef ARJ_COMPRESSOR_H
#define ARJ_COMPRESSOR_H
#include "compression.h"

class Arj_Compressor : public Compression
{
public:
    Arj_Compressor();
    void compress();
};

#endif // ARJ_COMPRESSOR_H
