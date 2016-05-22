#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a[] = {2,4,6,7,9,2,3,7,5,4};
	int n;
	cin >> n;

	int l = sizeof(a) / sizeof(*a);
	cout << l;


	for(int i=0; i<l; i++)
		if(n == a[i])
			cout << "Element found at : " << (i + 1) << " position";

	return 0;	
}