#include <stdio.h>

#include "customer_bronze.h"

double CustBronzePriceStrategy (double amount, double shipping)
{
    printf("Customer BRONZE");
    return amount * 0.98 + shipping;
}