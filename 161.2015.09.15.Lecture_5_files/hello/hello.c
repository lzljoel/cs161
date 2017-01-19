#include <stdio.h>

/* Print a few small primes. */
void print_primes(void)
{
	const int small_primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
	int i;

	printf("Here are some small primes:");

	for (i = 0; i < sizeof(small_primes)/sizeof(*small_primes); i++) {
		printf(" %d", small_primes[i]);
	}

	printf("\n");
}

int main(int argc, char *argv[])
{
	const char *name;

	if (argc >= 2) {
		name = argv[1];
	} else {
		name = "world";
	}
		
	printf("Hello, %s.\n", name);

	print_primes();
}
