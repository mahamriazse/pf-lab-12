#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n,i,j;
	printf("enter size of string array");
	scanf("%d",&n);
	char **arr=(char**)malloc(n* sizeof(char*));
	
	for(i=0;i<n;i++){
		int len;
		printf("enter length of string");
		scanf("%d",&len);
		
		arr[i]=(char*)malloc((len+1)*sizeof(char));
		printf("enter string");
		scanf("%s\n",arr[i]);
	}
	
	
	

	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(arr[i],arr[j])>0){
				char *temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("sorted strings are:");
	for(i=0;i<n;i++){
		printf("%s",arr[i]);
		
	}
	free(arr);
	return 0;
}
