#include <stdio.h>

int main(){
	int w,h,n,l,d,x,y,i,j;
	int a[100][100]={};
	scanf("%d %d",&w, &h);
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d %d",&l,&d,&x,&y);
		for(j=1;j<=l;j++)
		{
			if(d==1){
				a[x][y]=1;
				x++;
			}
			else{
				a[x][y]=1;
				y++;
			}
		}
	}
	for(i=1; i<=w; i++)
    {
        for(j=1; j<=h; j++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
}
