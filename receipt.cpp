#include <stdio.h>


int main(void) {
	int total, a, b, n;
	int result = 0;
	scanf("%d", &total);
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		result += a * b;
	}
	if(result == total){
		printf("Yes");
	} else {
		printf("No");
		}
	return 0;
}