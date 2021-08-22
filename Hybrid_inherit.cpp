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
        cout<<s1<<endl;
    }
};

class D{
public:
    int b=0;
    void give(){
    cout<<b<<endl;
    }
};

class C:public B,public D{
public:
    int a=0;
};

int main()
{
    C obj;
    obj.out();
    obj.give();
    B b;
    b.print();
    return 0;
}
