#include <stdio.h>

int main(void){
	char data[5000];
    fgets(data, 4999, stdin);
    printf("%s",data);
    return 0;
}
