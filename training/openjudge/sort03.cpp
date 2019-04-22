#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int a[20];
string b[20];

int main() 
{	
	int  n, temp;
	string t;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>b[i];
		cin>>a[i];
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i; j++)
		{
			if(a[j]<a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				t = b[j];
				b[j] = b[j+1];
				b[j+1] = t;
			}
			else if(a[j]==a[j+1])
			{
				if (b[j].compare(b[j+1])>0)
				{
					t = b[j];
					b[j] = b[j+1];
					b[j+1] = t;
				}
			
			}
			
		}	
	}
	for(int i=0; i<n; i++)
	{
		cout<<b[i]<<' '<<a[i];
		cout<<endl;
	}
	return 0;
}

