//left rotation of the array in the respect of d
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,a[100];
    cin>>n>>d;
    for(int i=0; i<n; i++){
        //a[(i+n-d)%n] = a[i];
        cin>>a[(i+n-d)%n];
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
