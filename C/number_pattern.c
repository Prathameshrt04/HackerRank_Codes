#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MIN(a,b) ((a)<(b) ? (a):(b))
#define MAX(a,b) ((a)>(b) ? (a):(b))

int main() 
{
    int n;
    scanf("%d",&n);
  	int i,j;
  	for(i=0;i<(n*2-1)i++){
  		for(j=0;j<(n*2-1);j++){
			  	if(MIN(i,j)<((n*2-2)-MAX(i,j))){
			  		printf("%d ",(n-MIN(i,j)));
				  }
				  else{
				  	printf("%d ",(n-((n*2-2)-MAX(i,j))));
				  }			
		  }
		  printf("\n");
	  }
    return 0;
}
