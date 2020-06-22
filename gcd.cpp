#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int n;
	cout<<"enter the count of numbers that you want a gcd of:";
	cin>>n;
	int a[n];
	cout<<"enter the numbers:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int k=2;
	int m=1;
    int c=0;
    int t=*min_element(a,a+n);
        for(int p=0;p<t;p++)
        {  
             int j=0;
        	while(j<=n-1)
        	{   
        		if(a[j]%k==0)
        		{    
				//cout<<a[j]<<endl;
        			c++;
        			j++;
				}
				else
				{ c=0;
				break;
				}
			}
			
			if(c==n)
			{   int l=0;
				while(l<=n-1)
				{  
					a[l]=a[l]/k;
					//cout<<a[l]<<endl;
					l++;
				}
				m=m*k;
				c=0;
			}
			else
			{   
				k++;
				
			}
		}
		cout<<"GCD is:";
		cout<<m;
}
