#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,i,add,totalsales=0;
	printf("enter no of days FOR SALES");
	scanf("%d",&N);
	int *sales=malloc(N*sizeof(int));
	for(i=0;i<N;i++){
		printf("enter sales ");
		scanf("%d",&sales[i]);
			totalsales+=sales[i];
	}

	printf("totalsales:%d",totalsales);
	
	printf("enter further size");
	scanf("%d",&add);
	int newsize=N+add;
	int *temp=realloc(sales,newsize*sizeof(int));
		
		sales=temp;
	
	for(i=0;i<add;i++){
		printf("enter sales");
		scanf("%d",&sales[i]);
			totalsales+=sales[i];
	}

	
	printf("totalsales:%d",totalsales);
	free(sales);
	return 0;
}

