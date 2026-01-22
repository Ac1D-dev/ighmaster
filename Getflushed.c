#include <stdio.h>
#include <stdlib.h>

/* Toilet utility functions */

void flush(void)
{
	printf("Flushing...\n");
}

void use_toilet(void)
{
	printf("Using toilet...\n");
}

void clean_toilet(void)
{
	printf("Cleaning toilet...\n");
}

void check_status(void)
{
	printf("Toilet status: OK\n");
}

int main(void)
{
	use_toilet();
	flush();
	clean_toilet();
	check_status();
	return (0);
}