#include <stdio.h>

int main(){
	long long int a, r, n, i, j=1;
	scanf("%lld %lld %lld",&a, &r, &n);
	for(i=0;i<n-1;i++)
	{
		j=j*r;
	}
	printf("%lld",a*j);
		
	return 0;
}
