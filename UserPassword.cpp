#include <iostream>
using namespace std;

class User
{
    int userID;
    string modificationTime;
    string email;
    string enabled;
    string password;
    string username;

public:
    User() {}
    User(int userId)
    {
        userId = userID;
    }

    User(int userId, string modtime, string eemail, string enable, string pass, string username1)
    {
        userId = userID;
        modtime = modificationTime;
        eemail = email;
        enable = enabled;
        pass = password;
        username1 = username;
    }

    void Print()
    {
        cout<<"UserID="<<userID<<endl;
        cout<<"Modification Time="<<modificationTime<<endl;
        cout<<"Email="<<email<<endl;
        cout<<"Enabled="<<enabled<<endl;
        cout<<"Password="<<password<<endl;
        cout<<"Username="<<username<<endl;
    }
};

int main()
{
    int userid;
    string modtime;
    string email;
    string enabled;
    string pass;
    string username;
    User Array[2];
    int i;
    for(i=0; i<2; i++)
    {
        cout<<"Enter UserID:\n";
        cin>>userid;
        cout<<"Enter modification time:\n";
        cin>>modtime;
        cout<<"Enter email:\n";
        cin>>email;
        cout<<"Enter if the account is enabled or not?:\n";
        cin>>enabled;
        cout<<"Enter password:\n";
        cin>>pass;
        cout<<"Enter username:\n";
        cin>>username;
        cout<<"===========================================\n";
        cout<<endl;
        User object(userid, modtime, email, enabled, pass, username);
        Array[i] = object;
    }

    cout<<"Information for the user:\n";
    for(int i=0; i<2; i++)
    {
        Array[i].Print();
        cout<<endl;
    }

    return 0;
}
