#ifndef PRODUCT_HPP
#define PRODUCT_HPP

typedef unsigned int value;

enum product_type{
    peas = 0,
    carrot,
    cabbage,
    chocolate,
    bread,
    milk,
    NUMBER_OF_PRODUCT_TYPES
};

class costSheet {
    private:
        value cost_list[NUMBER_OF_PRODUCT_TYPES] = {100,10,30,150,50,20};
    public:
        value lookupCost(product_type p);
};

#endif