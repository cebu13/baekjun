#include <stdio.h>

int main(){
	int n, m;
	scanf("%d", &m);
reload:
	scanf("%d", &n);
	printf("%d\n", n);
	m--;
	if(m!=0) goto reload;
	
	return 0;
}
