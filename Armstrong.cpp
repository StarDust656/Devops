#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	int  k = n;
	
	int cube_sum = 0;
	int a;
	while(k!=0){
		a = k%10;
		
		cube_sum = cube_sum + a*a*a;
		
		k=k/10;
		
	}	
//	cout<<n<<" "<<cube_sum;
	n == cube_sum ? cout<<"Armstrong Number Found\n" : cout<<"Armstrong Number Not Found\n";
	return 0;
}
