#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, temp, temp1;
    scanf("%d", &num);
    int n=num/2;
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

	for(i=0;i<=(n-1);i++){
		temp=*(arr+i);
		temp1=*(arr+(num-i-1));
		*(arr+i)=temp1;
		*((arr+(num-i-1)))=temp;
	}
	
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
