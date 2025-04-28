#include <iostream>
using namespace std;

class persegipanjang
{
public:
    float panjang, lebar, luas;
    void inputData()
    {
        cout << "Input Panjang = ";
        cin >> panjang;
        cout << "Input Lebar = ";
        cin >> lebar;
    }
    void menghitungluas()
    {
        luas = panjang * lebar;
    }
    void displayData()
    {
        cout << "Luas Persegi Panjang = " << luas << endl;
    }
};

int main()
{
    persegipanjang per;
    per.inputData();
    per.menghitungluas();
    per.displayData();
    return 0;
}