#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    char vm, vmtype;
    string vmname;
    int order;
    float tprice, price, cash, change;
    cout<<"|================================================|"<<endl
        <<"| Welcome to Gramatnichki`s Fast Food Restaurant |"<<endl
        <<"|================================================|"<<endl<<endl;
n:
    cout<<"Please choose from the following Value Meal:"<<endl
        <<"<B>urger Meal"<<endl
        <<"<C>hicken Meal"<<endl
        <<"<P>asta Meal"<<endl
        <<"Value Meal -> ";
    cin>>vm;

    switch(vm)
    {
    case 'b':
        cout<<endl<<"Please choose Value Meal for Burger"<<endl
            <<"<R>egular Burger"<<endl
            <<"<C>heese Burger"<<endl
            <<"<H>amburger"<<endl
            <<"Burger Meal -> ";
        cin>>vmtype;

        switch(vmtype)

        {
        case 'r':
            vmname = "Regular Burger";
            price = 2.00;
            break;
        case 'c':
            vmname = "Cheese Burger";
            price = 2.50;
            break;
        case 'h':
            vmname = "Hamburger";
            price = 3.00;
            break;
        default:
            cout<<"Invalid input, please come again!"<<endl;
            return 0;
            break;
        }
        break;

    case 'c':
        cout<<endl<<"Please choose Value Meal for Chicken"<<endl
            <<"<F>ried Chicken"<<endl
            <<"<G>rilled Chicken"<<endl
            <<"<C>hef's Chicken"<<endl
            <<"Chicken Meal -> ";
        cin>>vmtype;

        switch(vmtype)
        {
        case 'f':
            vmname = "Fried Chicken";
            price = 4.00;
            break;
        case 'g':
            vmname = "Grilled Chicken";
            price = 5.00;
            break;
        case 'c':
            vmname = "Chef's Chicken";
            price = 6.00;
            break;
        default:
            cout<<"Invalid input, please come again!"<<endl;
            return 0;
            break;
        }
        break;

    case 'p':
        cout<<endl<<"Please choose Value Meal for Pasta"<<endl
            <<"<S>paghetti de Italiano"<<endl
            <<"<L>asagna Supreme"<<endl
            <<"<M>acaroni Special"<<endl
            <<"Pasta Meal -> ";
        cin>>vmtype;

        switch(vmtype)
        {
        case 's':
            vmname = "Spaghetti de Italiano";
            price = 3.00;
            break;
        case 'l':
            vmname = "Lasagna Supreme";
            price = 4.00;
            break;
        case 'm':
            vmname = "Macaroni Special";
            price = 3.50;
            break;
        default:
            cout<<"Invalid input, please come again!"<<endl;
            return 0;
            break;
        }
        break;

    default:
        cout<<"Invalid Input, please come again!"<<endl;
        return 0;
        break;
    }

    cout<<endl<<"No. of orders: ";
    cin>>order;

    tprice = price * order;

    cout<<endl<<"-------Summary of orders-------"<<endl<<endl
        <<"Value Meal -> "<<vmname<<endl
        <<"No. of orders -> "<<order<<endl
        <<"Price -> $"<<price<<endl
        <<"Total amount to pay -> is $"<<tprice<<endl
        <<"Enter Customer Cash -> $";
    cin>>cash;
    change = cash - tprice;
    cout<<"Customer Change -> $"<<change<<endl<<endl;


    ofstream myfile;
    myfile.open ("otchet.txt",ios::app);
    myfile << "-------Summary of orders-------"<<endl<<endl
           <<"Value Meal -> "<<vmname<<endl
           <<"No. of orders -> "<<order<<endl
           <<"Price -> $"<<price<<endl
           <<"Total amount to pay -> is $"<<tprice<<endl
           <<"Customer Change -> $"<<change<<endl<<endl;
    myfile.close();

    char order2;
    cout<<"Do you want to make another order?"<<endl
        <<"<Y>es, please!"<<endl
        <<"<N>o, thank you!"<<endl;
        cin>>order2;

    switch(order2)

    {
    case 'y':
        goto n;
        break;
    case 'n':
        cout<<"Thank you for choosing our restaurant! Have a nice day!"<<endl;
        break;
    default:
        cout<<"Invalid input, please try again!"<<endl;
        return 0;
        break;
    }
    return 0;
}
