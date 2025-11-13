#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[] = "hello";
    cout << "s1 = " << s1 << endl;
    cout << "addr = " << static_cast<void*>(s1) << endl;
    cout << "sizeof s1: " << sizeof(s1) << endl;
    
    for(int i = 0; i < strlen(s1); i++) {
        cout << static_cast<int>(s1[i]) << " ";
    }
    cout << endl << endl;

    char s2[256] = "forest";
    cout << "s2 = " << s2 << endl;
    
    int i = 0;
    while (s2[i] != 0) {
        s2[i] = s2[i] + ('A' - 'a');
        i++;
    }
    
    cout << "s2 = " << s2 << endl;
    cout << "addr = " << static_cast<void*>(s2) << endl;
    cout << "sizeof s2: " << sizeof(s2) << endl;//数组大小是256
    
    return 0;
}