#include <stdio.h>

int main(){
	int a;
	
	scanf("%d", &a);
	
	if(a%2==0){
		printf("even\n");	
		if(a<0)
		printf("minus");
		else
		printf("plus");	
		
	}
	
	else{
		printf("odd\n");
		
		if(a<0) 
		printf("minus");
		else printf("plus");
	};
	
	return 0;
};
