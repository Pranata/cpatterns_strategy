#include <stdio.h>
#include <string.h>

#include "customer.h"
#include "customer_strategy.h"


#define CUSTOMER_INSTANCE_CNT                1
#define CUSTOMER_NAME_LEN                    128


struct sCustomer_t {
    char          Name[CUSTOMER_NAME_LEN];
    double        PriceOrder;
    pCustStrategy CustStrategyFn;
};


static struct sCustomer_t CustomerInstance[CUSTOMER_INSTANCE_CNT];


Cust_Handle CustomerInit (const char* name, size_t name_len)
{
    memcpy(CustomerInstance[0].Name, name, name_len);
    
    #if defined(CUSTOMER_GOLD)
    CustomerInstance[0].CustStrategyFn = CustGoldPriceStrategy; 
    #elif defined (CUSTOMER_SILVER)
    CustomerInstance[0].CustStrategyFn = CustSilverPriceStrategy; 
    #elif defined (CUSTOMER_BRONZE)
    CustomerInstance[0].CustStrategyFn = CustBronzePriceStrategy; 
    #else
    #error "No customer membership defined!"
    #endif

    return &CustomerInstance[0];
}


void CustomerPlaceOrder (Cust_Handle pCust, double amount, double shipping)
{
    pCust->PriceOrder = pCust->CustStrategyFn(amount, shipping);
    printf("Customer total order price: %6.2f\n", pCust->PriceOrder);
}