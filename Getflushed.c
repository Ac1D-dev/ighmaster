#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Toilet utility functions */

void flush(void)
{
	write(1,"Flushing",8);
	sleep(0);
	write(1,".",1);
	sleep(5);
	write(1,".",2);
	sleep(1);
	write(1,".\n",3);
	sleep(1);
}

void use_toilet(void)
{
	write(1,"Using toilet",12);
	sleep(0);
	write(1,".",1);
	sleep(5);
	write(1,".",2);
	sleep(1);
	write(1,".\n",3);
	sleep(1);
}

void clean_toilet(void)
{
	write(1,"Cleaning toilet",15);
	sleep(0);
	write(1,".",1);
	sleep(5);
	write(1,".",2);
	sleep(1);
	write(1,".\n",3);
	sleep(1);
}

void check_status(void)
{
	write(1,"Fetching toilet data",20);
	sleep(0);
	write(1,".",1);
	sleep(5);
	write(1,".",2);
	sleep(1);
	write(1,".\n",3);
	sleep(1);
	write(1,"Please wait",11);
	sleep(0);
	write(1,".",1);
	sleep(5);
	write(1,".",2);
	sleep(1);
	write(1,".\n",3);
	sleep(1);
	write(1,"Toilet status:",13);
	sleep(0);
	write(1," ",1);
	sleep(5);
	write(1,"O",2);
	sleep(1);
	write(1,"K\n",3);
	sleep(1);
}

int main(void)
{
	use_toilet();
	flush();
	clean_toilet();
	check_status();
	return (0);
}
