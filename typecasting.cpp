#include<iostream>
using namespace std;

int main(){
    char ch = 255; //implicit type conversion
    cout <<"ch is " <<ch;

    int a =72;
    int b=5;
    cout << endl;
    float c=(float)a/b; //explicit type conversion
    cout << c;
}
