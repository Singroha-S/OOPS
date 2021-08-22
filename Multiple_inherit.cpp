#include <bits/stdc++.h>
using namespace std;

class A{
public:
     void out(){
     cout<<"yo aagya"<<endl;}
};

class B{
public:
    string s1="Singroha";
    void print(){
        cout<<s1;
    }
};

class C:public A,public B{
public:
    int a=0;
};

int main()
{
    C obj;
    obj.out();
    obj.print();

    return 0;
}
