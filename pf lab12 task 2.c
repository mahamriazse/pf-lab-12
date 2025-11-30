#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int n,neww;
		printf("enter size of integers ");
    scanf("%d",&n);
	int *arr =  malloc(n*sizeof(int ));

    for(i=0;i<n;i++){
    	printf("enter nos");
    	scanf("%d",&arr[i]);
    	
	}
	
	int *temp=realloc(arr, 2*n *sizeof(int));
	if(temp==NULL){
		printf("faild");
		return 0;
	}
	arr=temp;
     printf("entrer new size");
     scanf("%d",&neww);
     
    for(i=n;i<n+neww;i++){
    	printf("enter further nos to add");
    	scanf("%d",&arr[i]);
    	
	}
	
	for(i=0;i<n+neww;i++){
	
	printf("%d",arr[i]);
}
	free(arr);
	return 0;
}

