#ifndef RAR_COMPRESSOR_H
#define RAR_COMPRESSOR_H
#include "compression.h"

class Rar_Compressor : public Compression
{
public:
    Rar_Compressor();
    void compress();
};

#endif // RAR_COMPRESSOR_H
