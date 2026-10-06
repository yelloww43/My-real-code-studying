// Atm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void check_money(string *name,int* money)
{
    cout << "---------------------查询余额---------------------" << endl;
    cout << *name << "，您好，您的余额剩余：" << *money << "元" << endl;
}
void getin_money(string *name,int in_money, int* money)
{
    *money += in_money;
    cout << *name << "，您好，您存款" << in_money << "元成功" << endl;
    cout << *name << "，您好，您的余额剩余：" << *money << "元" << endl;
}
void getout_money(string* name, int out_money, int* money)
{
    *money -= out_money;
    cout << *name << "，您好，您取款" << out_money << "元成功" << endl;
    cout << *name << "，您好，您的余额剩余：" << *money << "元" << endl;
}
int menu(string *name)
{
    cout << *name << "，您好，欢迎来到黑马银行ATM。请选择操作：" << endl;
    cout << "查询余额\t【输入1】" << endl;
    cout << "存款\t\t【输入2】" << endl;
    cout << "取款\t\t【输入3】" << endl;
    cout << "退出\t\t【输入4】" << endl;
    cout << "请输入您的选择：";
    int choice;
    cin >> choice;
    return choice;
}


int main()
{
    string name;
    int money=500000;
    cout << "请输入您的名字：";
    cin >> name;
    bool is_run = true;
    while (is_run)
    {
        int choice = menu(&name);
        switch (choice)
        {
        case 1:
            check_money(&name, &money);
            break;
        case 2:
            int in_money;
            cout << "请输入存款金额：";
            cin >> in_money;
            getin_money(&name, in_money, &money);
            break;

        case 3:
            int out_money;
            cout << "请输入取款金额：";
            cin >> out_money;
            getout_money(&name, out_money, &money);
            break;
        default:
            is_run = false;
            break;
        }
    }
    return 0;
}


