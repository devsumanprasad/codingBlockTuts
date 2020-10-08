//Array challenges wave print columnwise
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[1000][1000]={0};
	int m,n;
	cin>>m>>n;
	if(m<1 || m>10 || n<1 || n>10){
		exit(0);
	}

	for(int row=0; row<=m-1; row++){
		for(int col=0; col<=n-1; col++){
			cin>>a[row][col];
		}
	}

	//wave print columnwise

	for(int col=0; col<n; col++){
		if(col%2==0){
			//even col top-down

			for(int row=0;row<m; row++){
				cout<<a[row][col]<<", ";
			}
		}
		else{
			//bottom-up
			for(int row=m-1; row>=0; row--){
				cout<<a[row][col]<<", ";
			}
		}
	}
	cout<<"END";

	return 0;
}
