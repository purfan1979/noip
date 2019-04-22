#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int b[500], a[500];

int main()
{
	int n;
	cin>>n;
	int flag=0;
	for(int i=0; i<n; i++)
	{
		cin>>b[i];
		if(b[i]%2==1)
		{
			a[flag] = b[i];
			flag++;
		}
	} 
	
	sort(a, a+flag);
	for(int i=0; i<flag; i++)
	{
		cout<<a[i];
		if(i!=flag-1)
		{
			cout<<",";
		}
	}
	return 0;	
}
