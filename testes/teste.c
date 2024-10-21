#include <unistd.h>
#include <stdio.h>

int	main()
{
	unsigned char a = 99;
	unsigned char b = 255;
	unsigned char c;
	unsigned int teste;
	unsigned int hexa;

	c = a + b;
	teste = c;

	hexa = 0xff;
	//hexa = 255;


	write(1, &c, 1);
	write(1, "\n", 1);
	printf("%u\n", teste);

	printf("%u\n", hexa);
}
