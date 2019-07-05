CC     = gcc
DFLAGS = -DCUSTOMER_GOLD

SRCS    = main.c customer.c

# customer strategy to build
SRCS   += customer_gold.c


.PHONY: all clean

all: main

customer.o: customer.c
	$(CC) $(DFLAGS) -c -o $@ $<

customer_gold.o: customer_gold.c
	$(CC) $(DFLAGS) -c -o $@ $<

main.o: main.c
	$(CC) $(DFLAGS) -c -o $@ $<

main: main.o customer.o customer_gold.o
	$(CC) $(DFLAGS) -o main main.o customer.o customer_gold.o

clean:
	rm -f main main.o customer.o customer_gold.o