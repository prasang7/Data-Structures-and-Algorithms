#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1,str2;
	string str3 = "Kidsstuff";
	char str4[6] = {'T','h','i','n','k','\0'};
	
	cout<<"Enter a string : ";
	cin>>str1;
	cout<<"Enter a string : ";
	cin>>str2;
	
	cout<<str1<<endl;
	cout<<str2<<endl;
	cout<<str3<<endl;
	cout<<str4<<endl;
	
	int l,m,comp;
	
	l = str1.size();
	m = str2.size();
	
	BUT FOR AN ARRAY ::     ******************   IMP    ************

	int length = sizeof(a) / sizeof(*a) ;		
	
								

	//strlen	
	cout<<"Length of str1 : "<<l<<endl;
	cout<<"Length of str2 : "<<m<<endl;
	
	
	//strcmp
	cout<<"String are ";
	if( str1 == str2 )
	{
		cout<<"Same"<<endl;
	}
	else
	{
		cout<<"Diff. "<<endl;
	}
	
	//strcpy
	str1 = str3;
	str2 = str4;
	
	cout<<"After strcpy"<<endl<<str1<<endl;
	cout<<str2<<endl;
	
	string str5;
	
	str5 = str1 + str2;
	cout<<"String concatenation  : "<<str5<<endl;
	
	return 0;
}
