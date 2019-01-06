#include<iostream>
using namespace std;

class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		while (0 != n){
			if (n&1==1){
				count++;
			}
			n >>= 1;
		}
		return count;
	}
};

int main(){
	Solution s;
	cout << s.NumberOf1(-3) << endl;

	system("pause");
	return 0;
}