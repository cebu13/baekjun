#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	if(a<0) printf("error");
	else if(a<40) printf("D");
	else if(a<70) printf("C");
	else if(a<90) printf("B");
	else if(a<=101) printf("A");
	else printf("error");
	return 0;
	}
