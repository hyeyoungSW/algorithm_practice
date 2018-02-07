#include <iostream>
#include <algorithm>
using namespace std;
long long findtwo(int n){
	long long cnt2=0;
	for(long long i=2; n/i>=1; i=i*2){
		cnt2 = cnt2 + n/i;
	}
	return cnt2;
}
long long findfive(int n){
	long long cnt5=0;
	for(long long i=5; n/i>=1; i=i*5){
		cnt5 = cnt5 + n/i;
	}
	return cnt5;
}
int main(){
	long long n,m;
	cin >> n >> m;
	cout << min(findtwo(n)-findtwo(m)-findtwo(n-m), findfive(n)-findfive(m)-findfive(n-m))<<endl;
}
	

