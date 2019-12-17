#include <QCoreApplication>
#include "compressor.h"
#include "zip_compressor.h"
#include "rar_compressor.h"
#include "arj_compressor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Compressor *p =new Compressor(new Zip_Compressor());
    p->compress();
    return a.exec();
}
