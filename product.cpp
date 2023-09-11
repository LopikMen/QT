#include "product.h"

const QString& Product::getName() const
{
    return name;
}

void Product::setName(const QString &value)
{
    name = value;
}

QString Product::getCategory() const
{
    return category;
}

void Product::setCategory(const QString &value)
{
    category = value;
}

float Product::getPrice() const
{
    return price;
}

void Product::setPrice(int value)
{
    price = value;
}

int Product::getUniqId()
{
    return uniqId;
}

Product::Product()
{
    Product::id++;
    uniqId=id;

}
Product::Product(const QString &name, const QString &category, float price)
{
    Product::id++;
    uniqId=id;
    this->name=name;
    this->category=category;
    this->price=price;

}

int Product::id=0;
