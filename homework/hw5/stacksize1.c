#include <stdio.h>

#define M 19        /* plug something in here */
#define MAXREC (0x01<<M)

double max_recursion(int val)
{
    if (val <= 1)
	return 1;
    return val + max_recursion(val-1);
}

int main()
{
    printf("Result returned by max_recursion() is %e\n", max_recursion(MAXREC));
}
