#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Toilet utility functions */

void flush(void)
{
	printf("Flushing...\n");
	sleep(5);
}

void use_toilet(void)
{
	printf("Using toilet...\n");
	sleep(5);
}

void clean_toilet(void)
{
	printf("Cleaning toilet...\n");
	sleep(5);
}

void check_status(void)
{
	printf("Fetching toilet data...\n");
	sleep(5);
	printf("Please wait...\n");
	sleep(5);
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
