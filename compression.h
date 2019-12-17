#ifndef COMPRESSION_H
#define COMPRESSION_H
#include<iostream>

class Compression
{
public:
    Compression();
    ~Compression();
    virtual void compress() = 0;
};

#endif // COMPRESSION_H
