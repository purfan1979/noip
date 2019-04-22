#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

 
bool cmp(int a, int b)
{
	if(a%2==0 && b%2==0)
	{
		return a<b;
	}
	else if(a%2!=0 && b%2!=0)
	{
		return a>b;
	}
	else if (a%2!=0 && b%2==0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
	int a[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+10, cmp);

	for(int i=0; i<10; i++)
	{
		cout<<a[i]<<" ";
	}

	
	return 0;	
}
