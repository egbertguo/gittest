#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int *a, int length)
{
	int swap = 1;
	while(swap){
		swap = 0;
		int i = 0;
		for(i=0; i<length-1; i++){
			if(a[i] > a[i+1]){
				int tmp = a[i];
				a[i] = a[i+1];
				a[i+1] = tmp;
				swap = 1;	
			}
		}
		for(i=0; i<length; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}

int main()
{
	int a[10] = {1, 9, 8, 5, 7, 3, 6, 2, 0, 4};
	bubble_sort(a, 10);
}
