#include <iostream>

using namespace std;

int n,q,z;
int a[200000];

int main(){
	
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	
	while(q<n){
		if(a[q]==q)
			q++;
		else{			
			swap(a[a[q]],a[q]);
			z++;
		}		
	}
	cout<<z<<endl;
	
	return 0;
}
