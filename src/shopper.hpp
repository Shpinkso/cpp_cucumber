#ifndef SHOPPER_HPP
#define SHOPPER_HPP

class shopper {
    private:
        const std::string name;
        std::list<product_type> products; 
    public:
                    shopper(std::string n);
                    ~shopper();
        std::string getName();
        void        addToBasket(product_type p);
        void        removeFromBasket(product_type p);
        value       ringUp(costSheet& costs);
};
#endif