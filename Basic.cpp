#include <bits/stdc++.h>
using namespace std;

class fn1{
private:
    int a=1,b=2;
public:
    int c;
    void out(){
        cout<<"fdFDSF"<<endl;
    }
    void display(){
    cout<<c<<endl;
    }
    void in(){
    cout<<a<<" "<<b;
    }
};

int main()
{
    fn1 a1;
    a1.out();
    a1.c=68;
    a1.display();
   // a1.a=12;  cannot assign value to a because it is private
    a1.in();
    return 0;
}
