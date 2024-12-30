#include<iostream>

int main() {
	vector<int> vec_underlying_all = {1,2,3,4,5};
	for(int i = 0;i < vec_underlying_all.size();i++) {
		if(i != vec_underlying_all.size-1) {
			cout << vec_underlying_all[i] << ",";
		} else {
			cout << vec_underlying_all[i] << endl;
		}
	}
	int a = 111;
	int b = 123;
	int c = 222;
	return 0;
} 