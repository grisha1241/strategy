#ifndef ZIP_COMPRESSOR_H
#define ZIP_COMPRESSOR_H
#include "compression.h"

class Zip_Compressor : public Compression
{
public:
    Zip_Compressor();
    void compress();
};

#endif // ZIP_COMPRESSOR_H
