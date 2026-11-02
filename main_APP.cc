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
    try
    {
        cout << "Posa Prointa Theleis Na Eisageis???" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Prepei Na Einai Ypoxrewtika MegaLutero Tou 0" << endl;
        cin >> count;
        if (count <= 0)
            throw logic_error("Einai Mikrotero Apo 0");
        else
        {
            cout << "-----------------------------------" << endl;
            cout << "Ftiaxnw Kanonika Ta Prointa" << endl;
            for (int i = 0; i < count; i++)
            {
                /*Vazw Stoixeia Gia Ta Prointa*/
                /*---------------------------*/
                /*Prwta Vazw To Onoma Prointos*/
                getline(cin, Product_Name);
                /*---------------------------*/
                /*Meta Vazw Ton Monadiko Arithmo Tou Prointos*/
                cin>>Product_ID;
                /*Isws Ftiaxw Sunarthsh*/
            }
        }
    }
    catch (logic_error &e)
    {
        cout << "Den Mporeis Na Trexeis Thn Efarmogh Epeidh To Plithos Prointwn Sou " << e.what() << endl;
    }
    return 0;
}