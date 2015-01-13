#include <iostream>
using namespace std;

class ROLE
{
    int RoleID;
    string RoleName;
public:
    ROLE();
    ROLE(int idrole, string rolename)
    {
        RoleID = idrole;
        RoleName = rolename;
    }
    ROLE(int idrole)
    {
        RoleID = idrole;
    }

    int getRoleID()
    {
        return RoleID;
    }
    void setRoleID(int idrole)
    {
        RoleID = idrole;
    }

    string getRoleName()
    {
        return RoleName;
    }
    void setRoleName(string rolename)
    {
        RoleName = rolename;
    }


    void Print()
    {
        cout<<"RoleID=" <<RoleID<<endl;
        cout<<"RoleName=" <<RoleName<<endl;
    }

};
int main()
{
    cout<<"I started!"<<endl;
}
