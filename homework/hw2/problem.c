#include <stdio.h>

main()
{
	float f,g;
	f = 0.0;
	g = f + 1.0;
	int counter = 0;
	while (f != g)
	{
	    f = g;
	    g = f + 1.0;
	    counter ++;
	}
	printf("Does it ever get here?\n");
	printf("%d\n", counter);
	printf("%d\n", f);
	printf("%d\n", g);	
}

