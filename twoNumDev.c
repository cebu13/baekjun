#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d \n",a,b, a/b );
	printf("%d - %d = %d \n",a,b, a/b );
	printf("%d * %d = %d \n",a,b, a/b );
	printf("%d / %d ÀÇ ¸ò = %d \n",a,b, a/b );
	printf("%d %% %d = %d \n",a,b, a/b );
	printf("%d / %d = %f \n",a,b, (float)a/b );
	return 0;
}
