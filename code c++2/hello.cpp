#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "================================" << endl;
    cout << "  Hello, C++ World!" << endl;
    cout << "  环境配置成功！" << endl;
    cout << "================================" << endl;
    cout << endl;

    // 测试 C++17 特性
    vector<string> langs = {"C", "C++", "Python", "Java"};
    cout << "支持的语言列表（C++17 auto + 范围for）：" << endl;
    for (const auto& lang : langs) {
        cout << "  - " << lang << endl;
    }

    cout << endl;
    cout << "编译器: g++ (GCC) 14.2.0" << endl;
    cout << "C++ 标准: C++17" << endl;
    cout << "调试器: gdb 15.1" << endl;

    return 0;
}
