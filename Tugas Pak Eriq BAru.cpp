#include<iostream>
using namespace std;

class mamalia{
public :
    void hidup1(){
        cout << "Hidup di darat ";
    }
    void bernafas(){
        cout << "\nbernafas dengan udara"<< endl;
    }
};

class pisces{
public :
    void hidup2(){
        cout << "Hidup di air ";
    }
    void bernafas(){
        cout << "\nbernafas dengan air"<< endl;
    }
};

class amfibi:public mamalia,public pisces{
    public:
    void bernafas(){
        cout << "\nbernafas dengan udara dan air"<< endl;
    }
};

int main(){
mamalia bebek;
cout << "Bebek \n";
bebek.hidup1();
bebek.bernafas();
cout << endl;

pisces ikan;
cout << "Ikan \n";
ikan.hidup2();
ikan.bernafas();
cout << endl;

amfibi katak;
cout << "Katak \n";
katak.hidup1();
cout << " dan ";
katak.hidup2();
katak.bernafas();
cout << endl;

}
