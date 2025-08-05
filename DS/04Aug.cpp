#include <iostream>////preprocessor directive //iostream includes namespace std and more
using namespace std;//std contains cin, cout and endl
// namespace MyMath{
//     int add(int a, int b){
//         return a+b;
//     }
// }
// int main(){
// int result = MyMath::add(3,4);//scope resolution operator
// cout<<result<<endl;}

////nested namespace
// namespace Outer{
//     namespace Inner{
//         int x=42;
//     }
// }
// int main(){
//     int y = Outer::Inner::x;
//     cout<<y<<endl;
// }

////anonymous namespace
// namespace{
//     //things to be kept private in the file
//     int secret=123;
// }

// ////Practice Problem 1:
// namespace Hello{
//     void greet(){
//         std::cout<<"Mansi\n";
//     }
// }
// int main(){
//     Hello::greet();
//     return 0;
// }

/////Practice Problem 2:
// namespace Physics{
//     double gravity(){
//         return 9.8;
//     }
// }
// int main(){
//     std::cout<<"Gravity="<<Physics::gravity()<<std::endl;
//     return 0;
// }


///// two methods with same name but in different namespace
// namespace A{
//     int val(){return 2;}
// }
// namespace B{
//     int val(){
//         return 5;
//     }
// }
// using namespace A;
// // using namespace B;

// int main(){
//     //std::cout<<A::val()+B::val();
//     std::cout<<val() + B::val()<<endl;//using directives
//     return 0;
// }


// namespace Lib1{
//     void calculate(){
//         std::cout<<"Calculating from Lib1\n";
//     }
// }
// namespace Lib2{
//     void calculate(){
//         std::cout<<"Calculating from Lib2\n";
//     }
// }
// int main(){
//     Lib1::calculate();
//     Lib2::calculate();
//     return 0;
// }


/////Structures
// ///nested structures
// struct abc{
//     struct 
//     {
//      int x = 2;   
//     }xyz;
    
// }obj;
// int main(){
//     cout<<obj.xyz.x;
//     return 0;
// }