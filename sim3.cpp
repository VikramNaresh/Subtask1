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
	  int z=0,lar=0;
	  lar=*max_element(a.begin(),a.end()); //to find the largest
      if(lar<t)
      cout<<"Not possible!"<<endl;	  // if largest<required
	  else
	 {
	   for(int i=n-1;i>=0;i--)
	   { if(lar==a[i])
	      { z=i;                  // to find position of 'largest' from top
	        break;
	      }
	      else
	      continue;	   	
	   }
	   
	   
	   if(lar==t)
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

