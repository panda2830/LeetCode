/********************************************************************************
 * @file test.cc
 * @author lxy (2305195328@qq.com)
 * @brief 测试文件可以随时重写
 * @version 1.0.0
 * @date 2022-11-25
 ********************************************************************************/
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a = 10; //bin 1010
    int b = 12; //bin 1100
    int c = a & b;
    /*
        1010
       &
        1100
        1000    十进制8
    */
    cout << c << endl;  //c为8
    return 0;
}