/********************************************************************************
 * @file test.cc
 * @author lxy (2305195328@qq.com)
 * @brief 测试文件可以随时重写
 * @version 1.0.0
 * @date 2022-11-25
 ********************************************************************************/
#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char **argv)
{
    unordered_map<string, int> HashMap{{"Aa", 0}, {"Bb", 222}, {"Cc", 333}, {"Dd", 444}};
    // try
    // {
        // HashMap.at("Cc");
        cout << HashMap["Aa"] << endl;
    // }
    // catch (logic_error e)
    // {
    //     cout << "ERROR!" << endl;
    // }
    return 0;
}