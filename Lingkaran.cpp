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

};
int main()
{
    
}