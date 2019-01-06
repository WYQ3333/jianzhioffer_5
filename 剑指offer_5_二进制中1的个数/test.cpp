#include<iostream>
using namespace std;

class Solution1 {
public:
	int  NumberOf1(int n) {
		int count = 0;
		int temp = sizeof(int)*8;
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

class Solution2 {
public:
	int  NumberOf1(int n) {
		int count = 0;
		unsigned int flag = 1;
		while (flag){
			if (n & flag){
				count++;
			}
			flag = flag << 1;
		}
		return count;
	}
};
int main(){
	cout << "第一种方法" << endl;
	Solution1 s1;
	cout << s1.NumberOf1(-1) << endl;
	cout << "第二种方法" << endl;
	Solution2 s2;
	cout << s2.NumberOf1(-1) << endl;
	system("pause");
	return 0;
}