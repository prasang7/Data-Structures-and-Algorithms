#include<iostream>
using namespace std;
int main()
{
	int a[10] = {11,9,2,7,2,6,3,7,4,7};
	int i,j,key;
	



	for(i=1; i<10; i++)
	{		
		key = a[i];		
		j = i-1;
		while(j >= 0 && a[j] > key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
	




	for(i=0; i<10; i++)
		cout << a[i] << endl;
	
	return 0;
}

/* INSERTION SORT ALGORITHM ::

start

for i=1; i< a.length ; i++		
	key = a[i]
	j = i-1
	
	while j>=0 && a[j]>key
		a[j+1] = a[j]
		j = j-1
	
	a[j+1] = key			 

end
*/
