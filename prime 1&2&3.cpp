#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n,i,factors=0;
	cout<<"enter the number:";
	cin>>n;
	for(i=2;i<n;i++)// 1st mesthod
	for(i=2;i<n/2;i++)//2nd method
	for(i=2;i<sqrt((n)+1);i++)//3rd method
	{
		if(n%i==0)
		{
			factors++;
			cout<<"It is not a prime number"<<endl;
			break;
		}
	}
	if(factors==0)
	{
		cout<<"It is a prime number"<<endl;
	}
	return 0;
}
