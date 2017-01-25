#include<bits/stdc++.h>
using namespace std;
int findpivot(int arr[] , int l, int r)
{
	int mid;
	if(l > r)
	 return -1;
	if(l == r)
	 return r;
	mid = (l + r) / 2;
	if( mid < r && arr[mid] > arr[mid+1])
	 return mid;
	if(mid > l  && arr[mid] < arr[mid-1])
	 return mid - 1;
	if(arr[l] >= arr[mid])
	 return findpivot(arr,l,mid-1);
	else return findpivot(arr,mid+1,r);
}
// random comment changes
int binary(int arr[] , int l , int r , int x)
{
	int mid;
	while(l <= r)
	{
		int mid = (l+r) / 2;
		if(arr[mid] == x)
		 return x;
		if(arr[mid] > x)
		 r = mid - 1;
		else if(arr[mid] < x) 
		 l = mid + 1;
	}
}
int divide(int arr[]  ,int n , int x)
 {
 	 int pivot = findpivot(arr,0,n-1);
 	  if(pivot == -1)
 	   return binary(arr, 0, n-1 , x);
 	 if(arr[pivot] == x)
 	  return pivot;
 	 if(arr[0] <= x)
 	  return binary(arr,0,pivot-1,x);
 	 else return binary(arr,pivot + 1, n-1 ,x);
 }
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0 ; i< n ;i++)
	{
		cin>>arr[i];
	}
	cout<<divide(arr,n,2);
	return 0;
}
