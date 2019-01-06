#include<iostream>
using namespace std;

class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		int temp = sizeof(int);
		while (temp){
			if (n & 1 == 1){
				count++;
			}
			n >>= 1;
			temp--;
		}
		return count;
	}
};

int main(){
	Solution s;
	cout << s.NumberOf1(-1) << endl;

	system("pause");
	return 0;
}