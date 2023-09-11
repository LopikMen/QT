#ifndef PRODUCT_H
#define PRODUCT_H
#include <QApplication>

class Product
{
private:
    static int id;
    int uniqId;
    QString name;
    QString category;
    float price;

public:
    Product();
    Product(const QString &name, const QString &category, float price);
    const QString& getName() const;
    void setName(const QString &value);
    QString getCategory() const;
    void setCategory(const QString &value);
    float getPrice() const;
    void setPrice(int value);
    int getUniqId();

};

#endif // PRODUCT_H
