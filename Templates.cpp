#include <iostream>
using namespace std;

class Firma
{
    string id;
    string phone;
    string adres;
    string prdeinost;

public:
    virtual void setID(string ID)
    {
        id = ID;
    }

    virtual string getID()
    {
        return id;
    }
};

class TrudovD:public Firma
{
    string id;
};

class DostavkiD:public Firma
{
    string id;
public:
    DostavkiD(string ID)
    {
        id = ID;
    }

    void setID(string ID)
    {
        id = ID;
    }

    string getID()
    {
        return id;
    }

};

class Turgoviq:public Firma
{
    string cena;
public:
    Turgoviq(string cenA)
    {
        cena=cenA;
    }
};

int main()
{
    Firma** templates= new Firma*[3];
    templates[0] = new DostavkiD("15423");
    templates[1] = new Turgoviq ("158.20");

    string x;
    cout<<"---Vuvedete tursenoto neshto:---"<<endl;
    cin>>x;
    for (int i=0; i<2; i++)
    {

        if(templates[i]->getID()== x)
        {
            cout<<"Obektut e nameren! --> id="<<templates[i]->getID()<<endl;
        }
    }

    delete[] templates;
    return 0;
}
