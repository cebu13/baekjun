#include <stdio.h>

int main(void){
	int a, b, c;
	int sumVal, mean;
	scanf("%d %d %d", &a, &b, &c);
	sumVal = a + b + c;
	printf("sum = %d \n", sumVal);
	printf("mean = %.1f \n",sumVal/(float)3);
	return 0;
}
