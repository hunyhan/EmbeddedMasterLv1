#include <stdio.h>

int main(void)

{
	int num1=5;
	int num2=10;

	printf("%d and %d =  %d\n", num1, num2, num1 & num2);
	printf("%d or %d = %d\n", num1, num2, num1 | num2);
	printf("%d xor %d = %d\n", num1, num2, num1 ^ num2);
	printf("%d not %d\n", num1, ~num1);
	return 0;

}
