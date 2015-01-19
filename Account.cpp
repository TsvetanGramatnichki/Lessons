#include <iostream>
using namespace std;

class ACCOUNT
{
    int AccountID;
    int Value;
public:
    ACCOUNT() {};
    ACCOUNT(int idacc, int val)
    {
        AccountID = idacc;
        Value = val;
    }
    int getAccountID()
    {
        return AccountID;
    }
    void setAccountID(int idacc)
    {
        AccountID = idacc;
    }
    int getValue()
    {
        return Value;
    }
    void setValue(int val )
    {
        Value = val;
    }
    void Print()
    {
        cout<<"AccountID=" <<AccountID<<endl;
        cout<<"Value=" <<Value<<endl;
    }
    friend ACCOUNT operator+(ACCOUNT b1, ACCOUNT b2)
    {
        int b = b1.Value + b2.Value;
        return ACCOUNT(1, b);
    };
    friend int operator-(ACCOUNT b1, ACCOUNT b2)
    {
        int b = b1.Value - b2.Value;
        return b;
    };
    friend int operator/(ACCOUNT b1, ACCOUNT b2)
    {
        int b = b1.Value / b2.Value;
        return b;
    };
    friend ACCOUNT operator*(ACCOUNT b1, ACCOUNT b2)
    {
        int b = b1.Value * b2.Value;
        b1.setValue(b);
        return b1;
    };
};

int main()
{
    ACCOUNT a1(1,30);
    ACCOUNT a2(2,3);
    cout<<"Sborut e: "<<(a1+a2).getValue()<<endl;
    cout<<"Razlikata e: "<<(a1-a2)<<endl;
    cout<<"Proizvedenieto e: "<<(a1/a2)<<endl;
    cout<<"Chastnoto e: "<<(a1*a2).getValue()<<endl;

    return 0;
}
