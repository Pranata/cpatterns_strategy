#include <stdio.h>

#include "customer_silver.h"

double CustSileverPriceStrategy (double amount, double shipping)
{
    printf("Customer SILVER");
    return amount * 0.95 + shipping;
}