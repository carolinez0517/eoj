#include <iostream>
using namespace std;

int main()
{
    //使用字符串来初始化字符数组，会自动在末尾加上 '\0'
    char char_arr_1[] = { "good" }; //编译器自行根据字符串长度分配大小
    cout << sizeof(char_arr_1) << endl;
    //元素个数等于字符串有效字符数+1
    cout << char_arr_1 << endl; //内部有结束标记，可以正确输出

    char char_arr_2[10] = { "sad" }; //数组大小至少应该为4
    cout << sizeof(char_arr_2) << endl;
    //元素个数等于程序员指定的数量
    cout << char_arr_2 << endl;

    /*
    char char_arr_3[3] = {"Artificial"};
    char char_arr_4[3] = {"Cat"};
    二者均发生数组界限溢出，编译器会报错
    */
    
    return 0;
}