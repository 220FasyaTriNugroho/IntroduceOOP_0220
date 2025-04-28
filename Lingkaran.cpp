#include <iostream>
using namespace std;


class Planet{
    private :
        float gravitasi;
    public :
        string nama;
        float diameter;

        void displaydata(){
            cout << "Hallo aku planet " << nama << ", ukuran ku " << diameter << ", Gravitasi ku " << gravitasi << endl;

        }
    void inputdata(){
        cout << "Input nama = ";
        cin >> nama;
        cout << "Ukuran = ";
        cin >> diameter;
        cout << "Gravitasi = ";
        cin >> gravitasi;
    }
};
int main()
{
    Planet venus;
    venus.inputdata();
    cout << "Namanya adalah " << venus.nama << endl;
    cout << "Diameternya adalah " << venus.diameter << endl;
}