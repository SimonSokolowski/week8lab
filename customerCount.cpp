#include <iostream>
#include "customerCount.h"

CustomerCounter::CustomerCounter(int maxCustomers) {
    this->maxCustomers = maxCustomers;
}

void CustomerCounter::addCustomers(int customers) {
    if (!(customers + numOfCustomers > maxCustomers)) {
        numOfCustomers += customers;
    } else {
        std::cout << "max customers allowed is " << maxCustomers << std::endl;
    }
}
void CustomerCounter::subtractCustomers(int customers) {
    if (numOfCustomers - customers >= 0) {
        numOfCustomers -= customers;
    } else {
        std::cout << "There are only " << numOfCustomers << " left" << std::endl;
    }
}
void CustomerCounter::showCustomers() const {
    std::cout << "there are " << numOfCustomers << std::endl;
}

int main() {

    CustomerCounter customer(20);

    customer.addCustomers(22);
    customer.addCustomers(12);
    customer.subtractCustomers(1);
    customer.showCustomers();
    customer.subtractCustomers(10);
    customer.showCustomers();

    return 0;
}