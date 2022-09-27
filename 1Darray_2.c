#include <stdio.h>

int main(){
	int i, n, k;
	int a[10000]={};
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	k = a[1];
	
	for(i=1;i<=n;i++)
	{
		if(k>a[i])
		k = a[i];
	}
	
	printf("%d", k);
	
	return 0;
}
