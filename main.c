#include <stdio.h>

void print_fizzbuzz(unsigned n)
{
	if(n % 3 != 0 && n % 5 != 0) printf("%u", n);
	while((n % 3 == 0) || (n % 5 == 0))
	{
		if(n % 3 == 0)
		{
			printf("fizz");
			n /= 3;
		}
		if(n % 5 == 0)
		{
			printf("buzz");
			n /= 5;
		}
		if(n == 0) break;
  }
	putchar('\n');
}

int main()
{
	unsigned i = 0;

	while(1)
	{
		print_fizzbuzz(i);
		sleep(1);
		i++;
	}
}
