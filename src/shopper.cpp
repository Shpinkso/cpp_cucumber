#include <list>
#include <iostream>
#include <string>
#include "product.hpp"
#include "shopper.hpp"

shopper::shopper(std::string n):name(std::move(n))
{  

}


shopper::~shopper()
{

}

std::string shopper::getName()
{
    return name;
}

void shopper::addToBasket(product_type p)
{
    products.push_back(p);
}

void shopper::removeFromBasket(product_type p)
{
    try
    {
        products.remove(p);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

value shopper::ringUp(costSheet& costs)
{
    std::list<product_type>::iterator it = products.begin();
    value total = 0;
    for (; it != products.end(); ++it)
    {
        total += costs.lookupCost(*it);
    }
    return total;
}