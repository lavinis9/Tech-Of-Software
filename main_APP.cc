#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class APP
{
private:
    string Product_Name;
    int Product_ID, Expiration_Date;
    double Weight, Calories, Proteins;

public:
    /*Ftiaxnw me ton constructora to proion pou sxetizetai me to faghto*/
    APP(string P_R, int P_ID, int DATE, double Wght, double Clrs, double Prtn)
    {
        Product_Name = P_R;
        Product_ID = P_ID;
        Expiration_Date = DATE;
        Weight = Wght;
        Calories = Clrs;
        Proteins = Prtn;
    }
};

int main()
{
    cout << "KalwsHrthes Sir" << endl;
    int count;
    string Product_Name;
    int Product_ID, Expiration_Date;
    double Weight, Calories, Proteins;
    cout << "Posa Prointa Theleis Na Eisageis???" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Prepei Na Einai Ypoxrewtika MegaLutero Iso Tou 0" << endl;
    cin >> count;
    while (count <= 0)
    {
        cout << "Ksanavale Plithos" << endl;
        cout << "--------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Plithos" << endl;
        cin >> count;
    }
    cout << "-------------------------------" << endl;
    cout << "Ntaxei Sir" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Divilis Sony" << endl;
    }
    return 0;
}
