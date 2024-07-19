#include<stdio.h>
#define LEN 5
int a[LEN] = {10,5,2,4,7};
void insertion_sort(void)
{
	int i,j,key;
	for(int i=1;i<LEN;i++)
	{

		key = a[i];
		j=i;
	  while (a[j-1] > key && j > 0)
		{
			a[j] = a[j-1];
			j--;
		}
		a[j]=key;
	}
	printf("%d %d %d %d %d\n",
			a[0],a[1],a[2],a[3],a[4]);
}
int main(void)
{
	insertion_sort();
	return 0;
}
		
				

