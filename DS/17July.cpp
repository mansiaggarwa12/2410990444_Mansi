#include <iostream>
using namespace std;
// //1
// class Calculator
// {
// private:
//     double num1, num2;

// public:
//     void getInput()
//     {
//         cout << "Enter first number: ";
//         cin >> num1;
//         cout << "Enter second number: ";
//         cin >> num2;
//     }
//     void add()
//     {
//         cout << num1 + num2 << endl;
//     }
//     void sub()
//     {
//         cout << num1 - num2 << endl;
//     }
//     void mul()
//     {
//         cout << num1 * num2 << endl;
//     }
//     void div()
//     {
//         if (num2 != 0)
//         {
//             cout << num1 / num2 << endl;
//         }
//         else
//         {
//             cout << "Error: Division by 0";
//         }
//     }
// };
// int main()
// {
//     Calculator calc;
//     calc.getInput();
//     cout << "Results: "<<endl;
//     calc.add();
//     calc.sub();
//     calc.mul();
//     calc.div();
//     return 0;
// }

// 2
class GradeCalc
{
private:
    float avg; int marks[5], sum;

public:
    
    void setMarks(int m[]){
        for (int i =0; i<5;i++){
            marks[i]=m[i];
        }
    }
    void total()
    {
        sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        cout << sum << endl;
    }
    void average()
    {
        avg = sum / 5;
        cout << avg << endl;
    }
    void gradeCalc()
    {
        if (avg >= 90)
        {
            cout << "A";
        }
        else if (avg >= 80)
        {
            cout << "B";
        }
        else if (avg >= 70)
        {
            cout << "C";
        }
        else if (avg >= 60)
        {
            cout << "D";
        }
    }
};
int main()
{
    int n = 5;
    int arr[n];
    cout << "Enter marks of 5 subjects: " << endl;
    for (int a = 0; a < n; a++)
    {
        cin >> arr[a];
    }
    cout<<"Results: ";
    GradeCalc grade;
    grade.setMarks(arr);
    grade.total();
    grade.average();
    grade.gradeCalc();
}