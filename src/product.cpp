#include "product.hpp"

value costSheet::lookupCost(product_type p){
    return cost_list[p];
}