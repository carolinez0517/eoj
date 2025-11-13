#include<iostream>
#include<array>//引入头文件
using namespace std;

int main()
{
    array<int, 10> arr = { 5, 3, 1, 9, 6 };
    //定义包含10个int型元素的数组
    cout << "sizeof(array): " << sizeof(arr) << endl;
    cout << "elements of arr: " << arr.size() << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "; //利用[]访问元素
    }
    cout << endl;

    cout << arr.front() << endl; //利用front访问首元素
    arr.back() = -1; //修改arr.back(), 该函数返回最后一个元素的引用

    cout << arr[9] << endl; //可见，最后一个元素也被修改了

    arr.fill(-1); //将数组中的值全部赋为-1（修正了拼写错误）
    cout << arr.at(0) << endl; //利用at访问第一个元素

     //cout << arr.at(10) << endl; //利用at访问边界元素（索引10超出范围）
    
    return 0;
}