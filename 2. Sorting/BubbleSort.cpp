#include<iostream>
using namespace std;

int main()
{

	int a[] = {2,3,43,4,9,1,3,6,9,3,32};

	int l = sizeof(a) / sizeof(*a);

	int i,j;

	for (i=0;i<l-1;i++)
		for(j=0;j<l-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}


	for (int i = 0; i < l; i++)
	{
		cout << a[i] << endl;		
	}	


	return 0;
}