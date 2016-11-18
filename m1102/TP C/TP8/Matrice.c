#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **tab;
	int n,m;
	printf("saisir n:");
	scanf("%d",&n);
	printf("saisir m:");
	scanf("%d",&m);
	tab= malloc( n*sizeof(int*));
	int i,j;
	
	for(i=0;i<n;i++)
	{
		tab[i]=malloc(m*sizeof(int));	
	}
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=m;j++)
			{
				tab[i][j]=0;
			}
		}
	
	
		for(i=0;i<n;i++)
		{
			free(tab[i]);
		}
	
	free(tab);



}
