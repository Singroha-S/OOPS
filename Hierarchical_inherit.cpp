#include <bits/stdc++.h>
using namespace std;

class A{
public:
     void out(){
     cout<<"yo aagya"<<endl;}
};

class B:public A{
public:
    string s1="Singroha";
    void print(){
        cout<<s1;
    }
};

class C:public A{
public:
    int a=0;
};

int main()
{
    C obj;
    obj.out();
    B b;
    b.print();
    return 0;
}
