#include <iostream>
using namespace std;

class Planet
{
private:
    float gravitasi;

public:
    string nama;
    float diameter;

    void displaydata()
    {
        cout << "Gravitasi ku " << gravitasi << endl;
    }
    void inputdata()
    {
        cout << "Input nama : ";
        cin >> nama;
        cout << "Ukuranku : ";
        cin >> diameter;
        cout << "Gravitasi : ";
        cin >> gravitasi;
    }
};
int main()
{
    Planet venus;
    venus.inputdata();
    cout << "Namanya adalah " << venus.nama << endl;
    cout << "Diameternya adalah " << venus.diameter << endl;

    venus.displaydata();
}