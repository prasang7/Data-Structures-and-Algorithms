#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
	int t = *x;
	*x = *y; 
	*y = t;
}
int main()
{
	int a[] = {1,43,4,3,7,4,76,6,4,6,6,5};
	int key, j, i, l;
	l = sizeof(a) / sizeof(*a);




	for (i=0;i<l;i++)
	{
		int min = i;
		for(j=min+1 ; j<l; j++)
		{
			if(a[min] > a[j])
				min = j;
		}
		swap(a[min], a[i]);
	}


	for (int i = 0; i < l; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}