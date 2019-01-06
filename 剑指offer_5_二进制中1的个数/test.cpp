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

//����һ�´��룺 ���СС�Ĵ��룬�������
//���һ��������Ϊ0����ô�������������һλ��1��������ǰ����������1����ôԭ�������������ұߵ�1�ͻ��Ϊ0��
//ԭ����1��������е�0������1(������ұߵ�1���滹��0�Ļ�)����������λ�������ܵ�Ӱ�졣
//�ٸ����ӣ�һ����������1100�����ұ��������λ�Ǵ������ұߵ�һ��1����ȥ1�󣬵���λ���0�����������λ0�����1��
//��ǰ���1���ֲ��䣬��˵õ��Ľ����1011.���Ƿ��ּ�1�Ľ���ǰ����ұߵ�һ��1��ʼ������λ��ȡ���ˡ�
//���ʱ����������ٰ�ԭ���������ͼ�ȥ1֮��Ľ���������㣬��ԭ���������ұ�һ��1��һλ��ʼ����λ������0��
//��1100 & 1011 = 1000.
//Ҳ����˵����һ��������ȥ1���ٺ�ԭ�����������㣬��Ѹ��������ұ�һ��1���0.
//��ôһ�������Ķ������ж��ٸ�1���Ϳ��Խ��ж��ٴ������Ĳ�����
class Solution3 {
public:
	int  NumberOf1(int n) {
		int count = 0;
		while (n){
			++count;
			n = (n - 1)&n;
		}
		return count;
	}
};

int main(){
	cout << "��һ�ַ���" << endl;
	Solution1 s1;
	cout << s1.NumberOf1(-1) << endl;
	cout << "�ڶ��ַ���" << endl;
	Solution2 s2;
	cout << s2.NumberOf1(-1) << endl;
	cout << "�����ַ���" << endl;
	Solution2 s3;
	cout << s3.NumberOf1(-1) << endl;
	system("pause");
	return 0;
}