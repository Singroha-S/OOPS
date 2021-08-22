#include <bits/stdc++.h>
using namespace std;

class fn1{
private:
    int a=1,b=2;
    int x,y;
public:
    int c;
    void out(){
        cout<<"fdFDSF"<<endl;
    }
    void given_P(){
    cout<<c<<endl;
    }
    void pri(){
    cout<<a<<" "<<b;
    }
    void main_dc(int p,int q){
    cout<<endl<<p<<" "<<q;
    }

};

int main()
{
    fn1 a;
    a.out();
    a.c=68;
    a.given_P();
   // a1.a=12;  cannot assign value to a because it is private
    a.pri();
    a.main_dc(33,44);

    return 0;
}

