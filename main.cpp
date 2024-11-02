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
	return 0;
}