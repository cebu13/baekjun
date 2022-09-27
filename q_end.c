#include <stdio.h>

int main(){
	char x, t='q';
	do
	{
		scanf("%c", &x);
		printf("%c", x);
	}while(x!=t);
	
	return 0;
}
