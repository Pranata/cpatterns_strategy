#include <stdio.h>

#include "customer.h"


int main (int argc, char *argv[])
{
    Cust_Handle customer_a;

    customer_a = CustomerInit("Eric", sizeof("Eric"));
    CustomerPlaceOrder(customer_a, 10, 15);
}
