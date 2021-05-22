#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		if(n1==0 || n2==0 || n3==0){
			cout<<-1;
			continue;
		}
		if(n2<2 || n3<3){
			cout<<-1;
			continue;
		}
		int num=0;
		if(n1>n2){
			num+=n1-n2+1;
			n1-=n1-n2+1;
		}
		else if(n2>n3){
			num+=n2-n3+1;
			n2-=n2-n3+1;
		}
		cout<<num<<endl;
	}
	return 0;
} 
