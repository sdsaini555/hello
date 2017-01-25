#include<bits/stdc++.h>
using namespace std;
int find(int arr[] , int n)
{
	int f,s,i;
	if(arr[0] > arr[1])
	  {
	  		f = arr[0];
			s = arr[1]; 
	  }
	else {
			f = arr[1];
			s = arr[0];
	}
	for(i = 2 ; i < n  ; i++)
	{
		if(arr[i] > f)
		{
			s = f;
			f =arr[i];
		}
		if(arr[i] > s && arr[i] != f)
		 {
		 	 s = arr[i];
		 }
	}
	return (s+f);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	 cin>>arr[i];
	cout<< find(arr,n);
	return 0;
}
