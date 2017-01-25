#include<bits/stdc++.h>
using namespace std;
void shift(int mpn[] , int n)
{
	int i , j = n-1;
	for(i = n-1 ; i >= 0 ;i--)
	 {
	 		if(mpn[i] != 'NA')
	 		 {
	 		 		mpn[j] = mpn[i];
	 		 		 j--;
			  }
	 }
}
void merge(int marr[] , int mpn[] , int m , int n)
{
		int i= n , j = 0, k = 0;
		while(k < m+n)
		 {
		 		if(i < m+n && mpn[i] <= marr[j] || j == n)
		 		{
		 				mpn[k] = mpn[i];
		 				k++;
		 				i++;
				 }
				else {
						mpn[k] = marr[j];
						k++;
						j++;
				}
		 }
}
int main()
{
	int n,i,j,m;
	cin>>n>>m;
	int mpn[m+n], marr[m];
	 for(i = 0 ; i< m+n ; i++)
	 {
	 	 cin>>mpn[i];
	 }
	 for(i= 0 ; i < m; i++)
	  {
	  	 cin>>marr[i];
	  }
	  shift(mpn,m+n);
	  merge(marr,mpn,m,n);
	  for(i = 0; i< m+n;i++)
	   cout<<mpn[i]<<" ";
	return 0;
}
