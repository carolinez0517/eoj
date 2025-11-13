#include <iostream>
using namespace std;

int main()
{
    // 不加结束标记的字符数组1
    char char_arr_1[] = { 'I', ' ', 'a', 'm', ' ', 'h', 'a', 'p', 'p', 'y' };
    // 手动加上结束标记的字符数组2（结束标记的ASCII码值为0）
    char char_arr_2[] = { 'I', ' ', 'a', 'm', ' ', 's', 'a', 'd', 0};

    cout << "char_arr_1的大小为：" << sizeof(char_arr_1) << endl;
    cout << "char_arr_2的大小为：" << sizeof(char_arr_2) << endl;
    
    cout << "用字符数组模拟字符串并打印出来：" << endl;
    cout << "char_arr_1的内容为：" << char_arr_1 << endl;
    cout << "char_arr_2的内容为：" << char_arr_2 << endl;
    
    return 0;
}