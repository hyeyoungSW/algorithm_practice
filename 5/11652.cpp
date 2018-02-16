#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	map <long long, int> jk;
	for(int i=0; i<n; i++){
		long long a;
		cin >> a;
		jk[a] = jk[a] + 1;
	}
	map <long long, int> :: iterator iter;
	int max=0;
	long long ans;
	for(iter = jk.begin(); iter != jk.end(); iter++){
		if(iter->second > max){
			max = iter->second;
			ans = iter->first;
		}
	}
	cout << ans << "\n";
}
