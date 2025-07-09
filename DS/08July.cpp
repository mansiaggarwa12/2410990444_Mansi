#include <iostream>
using namespace std;
// //1 Static
// void fun(){
//     static int a = 10;
//     ++a;
//     cout<<a<<endl;
// }
// int main(){
//     fun();
//     fun();
//     fun();
//     return 0;
// }

// 2 errors
int main()
{
    int x = 3, y = 4;
    y += x++ + --y + x - y + x + y-- - --y + x + y;
    cout << x << " " << y;
}