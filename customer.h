#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

/* abstract data type for customer */
typedef struct sCustomer_t* Cust_Handle;


/* interfaces for customer */
Cust_Handle CustomerInit       (const char* name, size_t name_len);
void        CustomerPlaceOrder (Cust_Handle pCust, double amount, double shipping);

#endif /* _CUSTOMER_H_ */