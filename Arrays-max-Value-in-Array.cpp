#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n, a[1000000], max=INT_MIN, index=0; cin>>n; 
    if(n<0 || n>1000000000){ exit(0);
     } 
     else
     { 
         for(int i=0; i<n; i++)
         { 
             cin>>a[i];
             if(a[i]<=-1000000000 || a[i]>=1000000000)
             {
                  exit(0);
            }
        } 
        //logic for find max value in the array 
        for(int i=0;i<n;i++)
        { 
            if(max<=a[i])
            { 
                max=a[i]; 
                index = i; 
             } 
        }
            cout<<max<<endl;
     }
     return 0; 
 }
