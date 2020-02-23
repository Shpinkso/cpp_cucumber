#include <iostream>
#include <string>
#include "product.hpp"
#include "shopper.hpp"
// basic inital test for program

int main(int argc, const char* argv[])
{
    std::string mary_s = "Mary Smith", tony_b = "Tony Bane";
    value marys_shop = 0, tonys_shop = 0;
    shopper mary(mary_s);
    shopper tony(tony_b);
    costSheet pricelist;

    std::cout << "Shopper arrived: " << mary.getName() << "\n";
    std::cout << "Shopper arrived: " << tony.getName() << "\n";

/*
    peas,
    carrot,
    cabbage,
    chocolate,
    bread,
    milk,
*/

    mary.addToBasket(peas);
    mary.addToBasket(peas);
    mary.addToBasket(bread);
    mary.addToBasket(cabbage);

    mary.removeFromBasket(peas);
    mary.removeFromBasket(cabbage);

    marys_shop = mary.ringUp(pricelist);

    std::cout << "Mary spent: " << marys_shop << "\n";

    tony.addToBasket(chocolate);
    tony.addToBasket(chocolate);
    tony.addToBasket(chocolate);
    tony.addToBasket(chocolate);

    tonys_shop = tony.ringUp(pricelist);

    std::cout << "Tony spent: " << tonys_shop << "\n";

    return 0;
}
