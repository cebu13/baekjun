#include <stdio.h>

int main(){
	int i,n,g;
	scanf("%d %d",&n, &g);
	for(i=n;i<90;i+=5)g++;
	printf("%d",g);
	return 0;
}
