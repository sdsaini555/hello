#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,msf = 0 ,meh = 0 ;
	cin>>n;
	int arr[n];
	for(i = 0 ; i < n ; i++)
	  cin>>arr[i];
	for( i = 0 ; i <  n ; i++)
	 {
	 		meh += arr[i];
	 		if(meh < 0)
	 		  meh = 0;
	 		if(meh > msf)
	 		  msf = meh;
	 }
	 cout<<msf<<endl;
	return 0;
}
