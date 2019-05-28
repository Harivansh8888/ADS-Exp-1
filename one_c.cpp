#include<iostream>
using namespace std;
int main()
{

	long int dec, rem, quot;
	int bin[100], i=1, j;
	cout<<"Enter any decimal number : ";
	cin>>dec;
	quot=dec;
	while(quot!=0)
	{
		bin[i++]=quot%2;
		quot=quot/2;
	}
	cout<<"Equivalent binary value of "<<dec<<" :\n";
	for(j=i-1; j>0; j--)
	{
		cout<<bin[j];
	}
	return 0;
}
