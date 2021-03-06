#include<iostream>
using namespace std;

void merge(int *a, int, int, int);
void mergesort(int *a, int low, int high)
{
	int mid;
	if(low < high)
	{
		mid = (low + high)/2;
		mergesort(a, low, mid);
		mergesort(a, mid+1, high);
		merge(a, low, high, mid);
	}
	return;
}

void merge(int *a, int low, int high, int mid)
{
	int i, j, k, c[100];
	i = low;
	j = mid;
	k = low;
	
	while(i <= mid && j <= high)
	{
		if(a[i] < a[j])
		{
			c[k] = a[i];
			i++;
			k++;
		}
		else
		{
			c[k] = a[j];
			j++;
			k++;
		}
	}
	
	while(i <= mid)
	{
		c[k] = a[i];
		k++;
		i++;
	}
	
	while(j <= high)
	{
		c[k] = a[j];
		k++;
		j++;
	}
	
	for(i=0;i<k;i++)
	{
		a[i] = c[i];
	}
	
}

int main()
{
	int a[] = {6,3,4,8,3,6,4};
	int i;
		
	mergesort(a,0,6);
	
	for(i=0; i<7; i++)
		cout << a[i] << endl;
	
	
	return 0;
}
