#ifndef CONCRETPRODUCT_H
#define CONCRETPRODUCT_H
#include "product.h"


class ConcretProduct: public Product
{
    static int id;
    int uniqId;
public:
    ConcretProduct();
};

#endif // CONCRETPRODUCT_H
