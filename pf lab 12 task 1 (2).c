#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,k;
	int rows=2,col=2;
	
	
	int *a=malloc (rows*col*sizeof (int));
	if(!a){
		printf("error");
		
	}
	printf("enter matrix a values");
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			
		
		printf("value of [%d][%d]",i,j);
		
	scanf("%d",&a[i*col +j]);
	
	}
	}
	int *b=malloc (rows*col*sizeof (int));
			if(!b){
		printf("error");
	}

	printf("enter matrix b values");
		for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			
		
		printf("value of [%d][%d]",i,j);
		
	scanf("%d",&b[i*col +j]);
	
	}
	}
int *c=malloc (rows*col*sizeof (int));
 		
	if(!c){
		printf("error");
		
}

		for(i=0;i<rows;i++){
		
			for(j=0;j<col;j++){
				for(k=0;k<col;k++){
					c[i*col +j]+=a[i*col+k]*b[k*col +j];
				}
			}
		}
	   
    printf("product of a and b is ");
    for(i=0;i<rows;i++){
    	for(j=0;j<col;j++){
    		printf("%d",c[i*col +j]);
		}
		printf("\n");
	}
	free(a);
	free(b);
	free(c);
	
	return 0;
	}

