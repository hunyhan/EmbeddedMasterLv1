// 3과 7.7 2개의 값을 인자로 취하는 함수를 작성하고
// 2개를 더한 결과값을 반환할 때 정수형이 되게 하고
// 이를 출력해서 잘 되었는지 확인하시오.
#include <stdio.h>

int add_number(int num1, float num2)
{
	return num1 + num2;
}

int main (void)
{
	int num1 = 3;
	float num2 = 7.7f;

	printf("result = %d\n", add_number(num1, num2));

	return 0;
}
