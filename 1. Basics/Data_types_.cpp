#include<iostream>
using namespace std;

int main()
{
	int i = 2;
	float f = 2.3;
	char c = 'p';         
	double d = f/i;
	string s = "play";
	
	bool b1 = true;   //1
	bool b2 = false;  //0
	
	int v[10];
	
	v[0] = sizeof(i);
	v[1] = sizeof(f);
	v[2] = sizeof(c);
	v[3] = sizeof(b1);
	v[4] = sizeof(d);
	
	cout<<i<<" sizeof:"<<v[0]<<endl<<f<<" sizeof:"<<v[1]<<endl<<c<<" sizeof:"<<v[2]<<endl<<d<<" sizeof:"<<v[4]<<endl<<s<<endl<<b1<<" sizeof:"<<v[3];
	return 0;
}
