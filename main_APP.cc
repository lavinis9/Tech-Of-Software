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

/*Kommati Sunarthsewn*/

double metatroph_varous(string *ep, double *wht)
{
    if (*ep == "A")
    {
        return *wht = *wht / 1000000;
    }
    else if (*ep == "B")
    {
        return *wht = *wht / 1000;
    }
    else if (*ep == "C")
    {
        return *wht;
    }
}

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
        cout << "--------------------------------" << endl;
        cout << "Twra Mporeis Na Ftiaxeis" << count << "Prointa Gia Faghto" << endl;
        cout << "--------------------------------" << endl;
        /*Prwta Thelw Na Diavazw To Onoma Tou Proiontos*/
        cin.ignore();
        cout << "Vale Onoma Proiontos (Oti Thes)" << endl;
        getline(cin, Product_Name);
        cout << "--------------------------------" << endl;
        cout << "To Onoma Einai " << Product_Name << endl;
        cout << "--------------------------------" << endl;
        /*Varos Tha Metatrepetai Panta Se kg*/
        cout << "Dwse Varos Tou Proiontos" << endl;
        cin >> Weight;
        cout << "--------------------------------" << endl;
        cout << "Se Ti Monada Metrhshs Einai To Varos Tou Prointos?(Epilexe A eite B eite C)" << endl;
        cout << "--------------------------------" << endl;
        string epilogh;
        do
        {
            cout << "A.mg" << endl;
            cout << "B.gr" << endl;
            cout << "C.kg" << endl;
            cout << "D.kamia" << endl;
            cin >> epilogh;
        } while (epilogh == "D");
        cout << "To Proion Einai " << metatroph_varous(&epilogh, &Weight) << " Kila" << endl;
        cout << "--------------------------------" << endl;
        cout << "Dwse Thermides Gia To Proion" << endl;
        cin >> Calories;
        cout << "--------------------------------" << endl;
        cout << "Dwse Proitenes Gia To Proion" << endl;
        cin >> Proteins;
        cout << "--------------------------------" << endl;
    }
    return 0;
}
