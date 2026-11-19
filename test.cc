#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
#include <vector>

using namespace std;

class APP
{
private:
    string Product_Name;
    long long Product_ID;
    long Expiration_Date;
    double Weight, Calories, Proteins;

public:
    /*Ftiaxnw me ton constructora to proion pou sxetizetai me to faghto*/
    APP(string P_R, long long P_ID, long DATE, double Wght, double Clrs, double Prtn)
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
/*          */
/*         */
string epep(string epep)
{
    while (epep != "A" && epep != "B" && epep != "C")
    {
        cout << "Ksanavale Epilogh Broski Mou" << endl;
        cout << "--------------------" << endl;
        cout << "Den ginetai na valeis kati allo pera apo A EITAI B EITAI C" << endl;
        cin >> epep;
    }
    return epep;
}
/*          */
/*         */
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
    else
    {
        return *wht;
    }
}
/*          */
/*         */
double eisodos_varous(double wh)
{
    while (wh <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Ksanavale Varos" << endl;
        cout << "--------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Varos" << endl;
        cin >> wh;
    }
    return wh;
}
/*          */
/*         */
double eisodos_thermidwn(double cl)
{
    while (cl <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Ksanavale Thermides" << endl;
        cout << "--------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Arithmo Thermidwn" << endl;
        cin >> cl;
    }
    return cl;
}
/*          */
/*         */
double eisodos_proteinwn(double pr)
{
    while (pr <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Ksanavale Proteines" << endl;
        cout << "--------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Arithmo Prwteinwn" << endl;
        cin >> pr;
    }
    return pr;
}
/*          */
/*         */
int main()
{
    cout << "KalwsHrthes Sir" << endl;
    int count;
    string Product_Name;
    long long Product_ID; // Διορθώθηκε σε long long
    long Expiration_Date; // Διορθώθηκε σε long
    double Weight, Calories, Proteins;
    vector<long long> v1; // Dhlwsh Vector Gia Monadikothta Kwdikou

    cout << "Posa Prointa Theleis Na Eisageis???" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Prepei Na Einai Ypoxrewtika MegaLutero Iso Tou 0" << endl;

    cin >> count;
    while (cin.fail() || count <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
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
        cout << "Twra Mporeis Na Ftiaxeis " << count << " Prointa Gia Faghto" << endl;
        cout << "--------------------------------" << endl;
        /*Prwta Thelw Na Diavazw To Onoma Tou Proiontos*/
        cin.ignore(); // Gia Na Glitwsw Tuxon Enapomeinanta Stoixeia Sto Input Buffer Kai Na Proxwrisw Sta Epomena Inputs
        cout << "Vale Onoma Proiontos (Oti Thes)" << endl;
        getline(cin, Product_Name);
        cout << "--------------------------------" << endl;
        cout << "To Onoma Einai tou prointos einai " << Product_Name << endl;
        cout << "--------------------------------" << endl;
        /*Varos Tha Metatrepetai Panta Se kg*/
        cout << "Dwse Varos Tou Proiontos Ypoxreotika Megalutero Iso Tou 0" << endl;
        cin >> Weight;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        Weight = eisodos_varous(Weight);
        cout << "--------------------------------" << endl;
        cout << "Se Ti Monada Metrhshs Einai To Varos Tou Prointos?(Epilexe A eite B eite C)" << endl;
        cout << "--------------------------------" << endl;
        string epilogh;
        do
        {
            cout << "A.mg" << endl; // Miligram
            cout << "B.gr" << endl; // Gram
            cout << "C.kg" << endl; // Kilogram
            cout << "D.kamia(DEN GINETAI KSANADWSE)" << endl;
            cin >> epilogh;
            epilogh = epep(epilogh);
        } while (epilogh == "D");
        Weight = metatroph_varous(&epilogh, &Weight);
        cout << "To Proion Einai " << Weight << " Kila" << endl;
        cout << "--------------------------------" << endl;
        cout << "Dwse Thermides Gia To Proion Ypoxreotika Megalutero Iso Tou 0" << endl;
        cin >> Calories;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        Calories = eisodos_thermidwn(Calories);
        cout << "--------------------------------" << endl;
        cout << "Dwse Proitenes Gia To Proion Ypoxrewtika Megalutero Iso Tou 0" << endl;
        cin >> Proteins;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        Proteins = eisodos_proteinwn(Proteins);
        cout << "--------------------------------" << endl;
        /*Twra Pame Na Ftiaxoume Tis Eisodous Gia To Product_ID Kai To Expiration Date
        O kwdikos thelw na einai monadikos
        */
        /*EISAGWGH MONADIKOU KWDIKOU PROIONTOS Product_Id*/
        cout << "Dwse Kwdiko Proiontos Prosoxh Prepei Na Einai Monadikos" << endl;
        cin >> Product_ID;
        cout << "--------------------------------" << endl;
        if (v1.empty())
        {
            v1.push_back(Product_ID);
        }
        else
        {
            cout << "Elegxe Monadikothta Kwdikou" << endl;
            cout << "--------------------------------" << endl;
            v1.push_back(Product_ID);
            for (int i = 1; i < count; i++)
            {
                while (v1[i - 1] == v1[i] || v1[0] == v1[i])
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    cout << "Ksanavale Kwdiko Den Einai Monadikos " << endl;
                    cout << "--------------------" << endl;
                    v1.erase(v1.begin() + i);
                    cin >> Product_ID;
                    v1.push_back(Product_ID);
                }
                cout << "Komple" << endl;
                cout << "--------------------" << endl;
            }
        }
        cout << "Emfanise To Vector" << endl;
        cout << "--------------------" << endl;
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << endl;
    }
    return 0;
}
