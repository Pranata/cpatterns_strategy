#include <stdio.h>

#include "customer_gold.h"

double CustGoldPriceStrategy (double amount, double shipping)
{
    printf("Customer GOLD\n");
    return amount * 0.90;
}