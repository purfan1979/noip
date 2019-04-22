#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

struct student
{
	long long number;
	double score;
};

bool cmp(student a, student b)
{
	return a.score>b.score;
}

student ss[100];

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0; i<n; i++)
	{
		scanf("%ld%lf", &ss[i].number, &ss[i].score);
	}
	sort(ss, ss+n, cmp);
	printf("%ld %g", ss[k-1].number, ss[k-1].score);
	
	return 0;	
}
