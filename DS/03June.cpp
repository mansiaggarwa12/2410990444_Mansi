#include <iostream>
using namespace std;

int main(){
    
    cout<<"Elon "<<"Musk"<<endl<<"Jeff "<<"Bezos"<<endl;
    int x;
    cout<<"Enter x: ";
    cin>>x;
    cout<<endl;
    int y;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"product is: "<<x*y;

    
    // int *p;    
    // int  i = 3;
    // p = &i;   
    // cout<<*p;

    int *ptr = NULL;
    *ptr = 20;
    cout<<*ptr;
}

