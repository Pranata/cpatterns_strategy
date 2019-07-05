#ifndef _CUSTOMER_STRATEGY_H_
#define _CUSTOMER_STRATEGY_H_


/* abstraction for customer calculation strategy */
typedef double (*pCustStrategy) (double amount, double shipping);


#if defined (CUSTOMER_GOLD)
#include "customer_gold.h"
#elif defined (CUSTOMER_SILVER)
#include "customer_silver.h"
#elif defined (CUSTOMER_BRONZE)
#include "customer_bronze.h"
#else
#error "No customer membership defined!"
#endif

#endif /* _CUSTOMER_STRATEGY_H_ */
