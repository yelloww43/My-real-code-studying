#include"iostream"
#include"random"
using namespace std;
int get_random_num(int min, int max) {
	//创建一个随机数生成器
	random_device rd;
	mt19937 gen(  rd());
	//
	uniform_int_distribution<> dis(min, max);
	//
	int random_number = dis(gen);
	return random_number;
}
int main() {
	int num=get_random_num(1, 100);
	//cout << num << endl;
	cout << "请猜一个数字（1-100）:" ;
	int guess = 0;
	cin >> guess;
	while (guess != num) {
		
		if (guess > num) {
			cout << "大了" << endl;
		}else {
			cout << "小了" << endl;
		}
		cout << "继续猜：" ;
		cin >> guess;
	}
	if (guess == num) {
		cout << "猜对了" << endl;
	}

	return 0;
}




