#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{   int n,t,m;    
    cout<<"Enter number of curtains in stack and number of queries : \n";
    cin>>n>>m;
    vector<int> a(n);   //initializing a vector   
    cout<<"Enter size of curtains (from bottom to top) : \n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int j=0;j<m;j++)
    { cout<<"Enter query "<<j+1<<" : \n";
	  cin>>t;
	  int z=0,flag=0;
      for(int i=n-1;i>=0;i--)
       { if(a[i]>=t)
         { z=i;
           flag++; //to check incase query's size cannot be satisfied
           break;
         }
         else
         continue;       	
	   }
	   if(flag==0)
	   cout<<"Not possible!"<<endl;
	   else
	 {
	   if(a[z]==t)
	   { for(int i=z;i<n-1;i++)
	     a[i]=a[i+1];
	     n--; //basically deleting the element from the vector
       }
	   else
	   a[z]-=t;
	   cout<<"Curtains in stack from bottom to top : \n";
	   for(int k=0;k<n;k++)
	   cout<<a[k]<<endl;   	
     } 
	}      
    return 0;
}

