#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int a , b, c, d, k;
		cin>>a>>b>>c>>d>>k;
		int diff1 = abs(a-c);
		int diff2 = abs(b-d);
		int min = diff1 +diff2;
		if(min%2==0){
			if(k%2==0 and min<=k){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else if(min%2!=0){
			if(k%2!=0 and min<=k){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		

	
	}
	    
}
