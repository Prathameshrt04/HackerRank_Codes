#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char numbers[9][10]={"one","two","three","four","five","six","seven","eight","nine"};
  	if(a<=b){
        if(a<=9 && b<=9){
        	int i;
        	for(i=a-1;i<b;i++){
        		printf("%s \n",numbers[i]);
			}
		}
		else if(a<=9 && b>9){
			int i=0;
        	for(i=a-1;i<9;i++){
        		printf("%s \n",numbers[i]);
			}
			for(i=10;i<=b;i++){
				if(i%2==0)
					printf("even \n");
				else
					printf("odd \n");
			}
		}
		else{
			int i;
			for(i=a;i<=b;i++){
				if(i%2==0)
					printf("even \n");
				else
					printf("odd \n");
			}
		}
		}
		return 0;
    }


