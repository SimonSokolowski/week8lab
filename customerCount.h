#ifndef _CUSTOMERCOUNT_H_
#define _CUSTOMERCOUNT_H_

#include <iostream>

class CustomerCounter {
private:
    int maxCustomers;
    int numOfCustomers;
public:
    CustomerCounter(int maxCustomers);
    void showCustomers() const;
    void addCustomers(int customers);
    void subtractCustomers(int customers);
};

#endif