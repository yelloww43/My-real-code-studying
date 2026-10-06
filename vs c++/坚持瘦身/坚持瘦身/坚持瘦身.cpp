// 坚持瘦身.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "iostream"
using namespace std;


int main()
{
    cout << "有点胖需要减掉10斤体重，计划5天，每天目标2斤体重。加油！" << endl;

    int i, j, k;
    int decline=0;
    for (i = 0; i < 5; i++) {
        cout << "今天是减肥的第" << i+1 << "天!" << endl;
        for (j = 0; j < 3; j++) {
            cout << "开始做减肥第" << i + 1 << "天的第" << j + 1 << "个俯卧撑!  ";
        }
        decline++;
        cout << "减肥第" << i + 1 << "天的3个俯卧撑做完，体重减少1斤" << "目前累计计减少体重:" << decline << "斤!"<<endl;
        for (k = 1; k <= 3; k++) {
            cout << "开始减肥第" << i + 1 << "天的第" << k << "批次400米冲刺跑!  ";
        }
        cout << endl;
        decline++;
        cout << "减肥第" << i + 1 << "天的3批次400米冲刺跑完成，体重减少1斤，" << "目前累计减少体重:" << decline << "斤!" << endl << endl;
    }
    cout << "4天减肥完成，体重累计减少:" << decline << "斤!" << endl;
    return 0;
}


