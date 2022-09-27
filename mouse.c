#include <stdio.h>

int main(){
	int n,i,j,x=2,y=2;
	int a[20][20]={};
	
	for(i=1;i<=10;i++)
	for(j=1;j<=10;j++)
	scanf("%d", &a[i][j]);
	if(a[2][2]==2){
		a[2][2]=9;
	 goto end;}
	a[2][2]=9;
	while(1){
	if(a[x][y+1]==0){
	    y++;
	    a[x][y]=9;
	}
	else if(a[x][y+1]==1&&a[x+1][y]==0){
		x++;
		a[x][y]=9;
	}
	else{
		if(a[x][y+1]==2){
			y++;
			a[x][y]=9;
		}
		else if(a[x+1][y]==0||a[x+1][y]==2) {
			x++;
			a[x][y]=9;		}
	    break;}
	}
	end:
	for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
}
