#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> p;
	int x,y; //x:repeating  y:missing
	long long sn=(n*(n+1))/2; 
	int s=0,s2=0;
	long long sn2=(n*(n+1)*(2*n+1))/6;
	for(int i=0;i<n;i++){
		s+=arr[i];
		s2+=(long long)arr[i]*(long long)arr[i];
	}
	long long val1=s-sn; //x-y
	long long val2=(s2-sn2)/val1;
	x=(val1+val2)/2;
	y=val2-x;
	p.first=(int)y;
	p.second=(int)x;
	return p;
}

