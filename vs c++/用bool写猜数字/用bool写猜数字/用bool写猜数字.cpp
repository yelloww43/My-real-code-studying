// 用bool写猜数字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "iostream"
#include"random"
using namespace std;
int get_random_num(int min, int max) {
	//创建一个随机数生成器
	random_device rd;
	mt19937 gen(rd());
	//
	uniform_int_distribution<> dis(min, max);
	//
	int random_number = dis(gen);
	return random_number;
}
int main()
{ 
	int guess;
	int num = get_random_num(1, 100);
    cout << "请猜一个数字：";
    cin >> guess;
    for (bool is_continue = true;is_continue;)
    {
		if (guess == num) {
			cout << "猜对了" << endl;
			is_continue = false;
		}
		else if (guess > num) {
			cout << "大了" << endl;
			cout << "请重新猜：" << endl;
			cin >> guess;
		}
		else {
			cout << "小了" << endl;
			cout << "请重新猜：" << endl;
			cin >> guess;
		}
		
    }
	return 0;
    
}
