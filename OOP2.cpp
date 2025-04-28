#include <iostream>
using namespace std;

class persegipanjang
{
public:
    float panjang, lebar, luas;
    void inputdata()
    {
        cout << "Input Panjang = ";
        cin >> panjang;
        cout << "Input Lebar = ";
        cin >> lebar;
    }
    void menghitungluas()
    {
        luas = panjang*lebar;
        cout << "Luas Persegi Panjang = " << luas << endl;
    }
};

int main()
{
    persegipanjang per;
    per.inputdata();
    per.menghitungluas();
    return 0;
}