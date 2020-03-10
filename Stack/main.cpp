#include<iostream>
#include"stack.cpp"
using namespace std;

int main(){
    Stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    Stack b;
    b.push(1);
    b.push(2);
    b.push(3);
    b.push(4);
    cout<< a.isequal(b);

}