#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#define password 2107017
static int d=6;
static int ch=6;
static int ck=6;
static int b=6;
static int cl=6;

class Item
{
public:
    Item() {}
    string name;
    int quantity;
    float price;
    virtual double buy(int quan)=0;
    virtual void display()=0;
    virtual void returnMoney(double t,double s,int q)=0;
    friend void details();
};

class Drinks:public Item
{
public:
    Drinks() {}
    Drinks(string a,int q,float f)
    {
        this->name=a;
        this->quantity=q;
        this->price=f;
    }
    double buy(int quan)
    {
        if(quan>quantity)
        {
            cout<<"Sorry! The drink is unavailable right now."<<endl;
            return 0.0;
        }
        else
        {
            double x;
            x=price*quan;
            cout<<"Your price for "<<quan<<" "<<name<<" is "<<x<<" taka."<<endl;
            return x;
        }
    }
    void returnMoney(double t,double s,int q)
    {
        if(t<s)
        {
            cout<<"You haven't paid sufficient"<<endl;
            cout<<"Here is your "<<t<<" taka."<<endl;
        }
        else
        {
            quantity=quantity-q;
            double dif;
            dif=t-s;
            if(dif==0.0)
                cout<<"There is no return money.\nThank You for buying."<<endl;
            else
                cout<<"Here is your return "<<dif<<" taka.\n Thank you for buying."<<endl;
        }
    }
    void display()
    {
        cout<<"#Here is the details of the following drink:\n"<<endl;
        cout<<"1.Name of the drink= "<<name<<endl;
        cout<<"2.Stock= "<<quantity<<" pcs"<<endl;
        cout<<"3.Price= "<<price<<" per pcs"<<endl;
    }
};
class Chips: public Item
{
public:
    Chips() {}
    Chips(string a,int q,float f)
    {
        this->name=a;
        this->quantity=q;
        this->price=f;
    }
    double buy(int quan)
    {
        if(quan>quantity)
        {
            cout<<"Sorry! The chips is unavailable right now."<<endl;
            return 0.0;
        }
        else
        {
            double x;
            x=price*quan;
            cout<<"Your price for "<<quan<<" "<<name<<" is "<<x<<" taka."<<endl;
            return x;
        }
    }
    void returnMoney(double t,double s,int q)
    {
        if(t<s)
        {
            cout<<"You haven't paid sufficient"<<endl;
            cout<<"Here is your "<<t<<" taka."<<endl;
        }
        else
        {
            quantity=quantity-q;
            double dif;
            dif=t-s;
            if(dif==0.0)
                cout<<"There is no return money.\nThank You for buying."<<endl;
            else
                cout<<"Here is your return "<<dif<<" taka.\n Thank you for buying."<<endl;
        }
    }
    void display()
    {
        cout<<"#Here is the details of the following chips:\n"<<endl;
        cout<<"1.Name of the chips= "<<name<<endl;
        cout<<"2.Stock= "<<quantity<<" pcs"<<endl;
        cout<<"3.Price= "<<price<<" per pcs"<<endl;
    }
};
class Biscuits: public Item
{
public:
    Biscuits() {}
    Biscuits(string a,int q,float f)
    {
        this->name=a;
        this->quantity=q;
        this->price=f;
    }
    double buy(int quan)
    {
        if(quan>quantity)
        {
            cout<<"The Biscuit is unavailable right now."<<endl;
            return 0.0;
        }
        else
        {
            double x;
            x=price*quan;
            cout<<"Your price for "<<quan<<" "<<name<<" is "<<x<<" taka."<<endl;
            return x;
        }
    }
    void returnMoney(double t,double s,int q)
    {

        if(t<s)
        {
            cout<<"You haven't paid sufficient"<<endl;
            cout<<"Here is your "<<t<<" taka."<<endl;
        }
        else
        {
            quantity=quantity-q;
            double dif;
            dif=t-s;
            if(dif==0.0)
                cout<<"There is no return money.\nThank You for buying."<<endl;
            else
                cout<<"Here is your return "<<dif<<" taka.\n Thank you for buying."<<endl;
        }
    }
    void display()
    {
        cout<<"#Here is the details of the following biscuit:\n"<<endl;
        cout<<"1.Name of the biscuit= "<<name<<endl;
        cout<<"2.Stock= "<<quantity<<" pcs"<<endl;
        cout<<"3.Price= "<<price<<" per pcs"<<endl;
    }

};

class Chocolates: public Item
{
public:
    Chocolates() {}
    Chocolates(string a,int q,float f)
    {
        this->name=a;
        this->quantity=q;
        this->price=f;
    }
    double buy(int quan)
    {
        if(quan>quantity)
        {
            cout<<"The Chocolate is unavailable right now."<<endl;
            return 0.0;
        }
        else
        {
            double x;
            x=price*quan;
            cout<<"Your price for "<<quan<<" "<<name<<" is "<<x<<" taka."<<endl;
            return x;
        }
    }
    void returnMoney(double t,double s,int q)
    {
        if(t<s)
        {
            cout<<"You haven't paid sufficient"<<endl;
            cout<<"Here is your "<<t<<" taka."<<endl;
        }
        else
        {
            quantity=quantity-q;
            double dif;
            dif=t-s;
            if(dif==0.0)
                cout<<"There is no return money.\nThank You for buying."<<endl;
            else
                cout<<"Here is your return "<<dif<<" taka.\n Thank you for buying."<<endl;
        }
    }
    void display()
    {
        cout<<"#Here is the details of the following chocolate:\n"<<endl;
        cout<<"1.Name of the chocolate= "<<name<<endl;
        cout<<"2.Stock= "<<quantity<<" pcs"<<endl;
        cout<<"3.Price= "<<price<<" per pcs"<<endl;
    }

};

class Cakes: public Item
{
public:
    Cakes() {}
    Cakes(string a,int q,float f)
    {
        this->name=a;
        this->quantity=q;
        this->price=f;
    }
    double buy(int quan)
    {
        if(quan>quantity)
        {
            cout<<"The Cake is unavailable right now."<<endl;
            return 0.0;
        }
        else
        {
            double x;
            x=price*quan;
            cout<<"Your price for "<<quan<<" "<<name<<" is "<<x<<" taka."<<endl;
            return x;
        }
    }
    void returnMoney(double t,double s,int q)
    {
        if(t<s)
        {
            cout<<"You haven't paid sufficient"<<endl;
            cout<<"Here is your "<<t<<" taka."<<endl;
        }
        else
        {
            quantity=quantity-q;
            double dif;
            dif=t-s;
            if(dif==0.0)
                cout<<"There is no return money.\nThank You for buying."<<endl;
            else
                cout<<"Here is your return "<<dif<<" taka.\n Thank you for buying."<<endl;
        }
    }
    void display()
    {
        cout<<"#Here is the details of the following cake:\n"<<endl;
        cout<<"1.Name of the cake= "<<name<<endl;
        cout<<"2.Stock= "<<quantity<<" pcs"<<endl;
        cout<<"3.Price= "<<price<<" per pcs"<<endl;
    }
};

ostream& operator<<(ostream& print,Item *obj)
{
    obj->display();
    return print;
}

void details()
{
    cout<<"\n     Option 1-->Drinks."<<endl;
    cout<<"     Option 2-->Chips."<<endl;
    cout<<"     Option 3-->Biscuits."<<endl;
    cout<<"     Option 4-->Chocolates."<<endl;
    cout<<"     Option 5-->Cakes.\n"<<endl;
    cout<<"**Press any of these options that you want to proceed**"<<endl;
}

int main()
{
    Item *drink,*chips,*biscuit,*chocolate,*cake;
    Drinks arr1[100];
    Chips arr2[100];
    Biscuits arr3[100];
    Chocolates arr4[100];
    Cakes arr5[100];
    drink=arr1;
    chips=arr2;
    biscuit=arr3;
    chocolate=arr4;
    cake=arr5;
    arr1[0]=Drinks("Coca Cola",10,50.0);
    arr1[1]=Drinks("Sprite",10,40.0);
    arr1[2]=Drinks("Pepsi",10,30.0);
    arr1[3]=Drinks("Fanta",10,40.0);
    arr1[4]=Drinks("7 Up",10,35.0);
    arr1[5]=Drinks("Mojo",10,30.0);
    arr2[0]=Chips("Lays",10,50.0);
    arr2[1]=Chips("Mr. Twist",10,20.0);
    arr2[2]=Chips("Potato Crackers",10,10.0);
    arr2[3]=Chips("Sun",10,25.0);
    arr2[4]=Chips("Alooz",10,20.0);
    arr2[5]=Chips("Kurkure",10,10.0);
    arr3[0]=Biscuits("Energy",10,15.0);
    arr3[1]=Biscuits("Nutty",10,20.0);
    arr3[2]=Biscuits("Digestive",10,35.0);
    arr3[3]=Biscuits("Potata",10,30.0);
    arr3[4]=Biscuits("Fit",10,20.0);
    arr3[5]=Biscuits("Lexus",10,5.0);
    arr4[0]=Chocolates("Dairy Milk",10,180.0);
    arr4[1]=Chocolates("Kitkat",10,40.0);
    arr4[2]=Chocolates("Five Stars",10,30.0);
    arr4[3]=Chocolates("Safari",10,20.0);
    arr4[4]=Chocolates("Munch",10,25.0);
    arr4[5]=Chocolates("Tobleron",10,200.0);
    arr5[0]=Cakes("All Time Chocolate",10,35.0);
    arr5[1]=Cakes("All Time Plain",10,30.0);
    arr5[2]=Cakes("Dan Cake Chocolate",10,35.0);
    arr5[3]=Cakes("Dan Cake Fruity",10,35.0);
    arr5[4]=Cakes("Fu Wang Pie Cake",10,25.0);
    arr5[5]=Cakes("Pran Mini Pie",10,10.0);
Home:
    cout<<"                              ---------------------------------\n                              Welcome to KUET's Vending Machine\n                              ---------------------------------\n\n"<<endl;
    cout<<"#Are you a buyer?(If Yes,Press 1)\n\n#Are you a manager?(If Yes,Press 2)\n\n**Exit from the system.(Press 3)**\n"<<endl;
    int ex,op,z,qn;
    double mn,xn;
    string p,q;
    double paid_amount,returned_amount,bought_quantity;
    string bought_item;
D:
    cin>>ex;
    if(ex==1)
    {
A:
        cout<<"**Which item do you want to buy?**"<<endl;
        details();
B:
        cin>>op;
        cin.ignore();
        if(op==1)
        {
            cout<<"\n";
            for(int i=0; i<d; i++)
            {
                cout<<"#"<<(drink+i)->name<<"-"<<(drink+i)->price;
                cout<<endl;
            }
            cout<<"Which item do you want to buy from these? Please write the product name:";
            getline(cin,p);
            z=0;
            for(int i=0; i<d; i++)
            {
                if(p==(drink+i)->name)
                {
                    z++;
                    cout<<"Enter quantity:";
                    cin>>qn;
                    xn=(drink+i)->buy(qn);
                    if(xn==0)
                    {
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {
                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    else
                    {
                        cout<<"Give money for your desiring product/products:";
                        cin>>mn;
                        bought_item=p;
                        paid_amount=mn;
                        returned_amount=mn-xn;
                        bought_quantity=qn;
                        (drink+i)->returnMoney(mn,xn,qn);
                        ofstream fout("Payment History.txt",ios::app);
                        fout<<"#Bought item name: "<<bought_item<<"\nTotal quantity: "<<bought_quantity<<" pcs\n"<<"Total Bill: "<<xn<<"\nMoney paid: "<<paid_amount<<" Taka\nReturned amount: "<<returned_amount<<" Taka\n"<<endl;
                        fout.close();
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {
                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    break;
                }
            }
            if(z==0)
            {
                cout<<"The item u have entered is not in the list.Do you want to buy anything else? [Y/N] :";
                cin>>q;
                if(q=="Y" || q=="y")
                    goto A;
                else
                {
                    cout<<"Thanks for using me.Have a good day!"<<endl;
                    goto Home;
                }
            }
        }
        else if(op==2)
        {
            cout<<"\n";
            for(int i=0; i<ch; i++)
            {
                cout<<"#"<<(chips+i)->name<<"-"<<(chips+i)->price;
                cout<<endl;
            }
            cout<<"Which item do you want to buy from these? Please write the product name:";
            getline(cin,p);
            z=0;
            for(int i=0; i<ch; i++)
            {
                if(p==(chips+i)->name)
                {
                    z++;
                    cout<<"Enter quantity:";
                    cin>>qn;
                    xn=(chips+i)->buy(qn);
                    if(xn==0)
                    {
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {
                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    else
                    {
                        cout<<"Give money for your desiring product/products:";
                        cin>>mn;
                        bought_item=p;
                        paid_amount=mn;
                        returned_amount=mn-xn;
                        bought_quantity=qn;
                        (drink+i)->returnMoney(mn,xn,qn);
                        ofstream fout("Payment History.txt",ios::app);
                        fout<<"#Bought item name: "<<bought_item<<"\nTotal quantity: "<<bought_quantity<<" pcs\n"<<"Total Bill: "<<xn<<"\nMoney paid: "<<paid_amount<<" Taka\nReturned amount: "<<returned_amount<<" Taka\n"<<endl;
                        fout.close();
                        (chips+i)->returnMoney(mn,xn,qn);
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {
                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    break;
                }
            }
            if(z==0)
            {
                cout<<"The item u have entered is not in the list.Do you want to buy anything else? [Y/N] :";
                cin>>q;
                if(q=="Y" || q=="y")
                    goto A;
                else
                {
                    cout<<"Thanks for using me.Have a good day!"<<endl;
                    goto Home;
                }
            }
        }
        else if(op==3)
        {
            cout<<"\n";
            for(int i=0; i<b; i++)
            {
                cout<<"#"<<(biscuit+i)->name<<"-"<<(biscuit+i)->price;
                cout<<endl;
            }
            cout<<"Which item do you want to buy from these? Please write the product name:";
            getline(cin,p);
            z=0;
            for(int i=0; i<b; i++)
            {
                if(p==(biscuit+i)->name)
                {
                    z++;
                    cout<<"Enter quantity:";
                    cin>>qn;
                    xn=(biscuit+i)->buy(qn);
                    if(xn==0)
                    {
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {

                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    else
                    {
                        cout<<"Give money for your desiring product/products:";
                        cin>>mn;
                        bought_item=p;
                        paid_amount=mn;
                        returned_amount=mn-xn;
                        bought_quantity=qn;
                        (drink+i)->returnMoney(mn,xn,qn);
                        ofstream fout("Payment History.txt",ios::app);
                        fout<<"#Bought item name: "<<bought_item<<"\nTotal quantity: "<<bought_quantity<<" pcs\n"<<"Total Bill: "<<xn<<"\nMoney paid: "<<paid_amount<<" Taka\nReturned amount: "<<returned_amount<<" Taka\n"<<endl;
                        fout.close();
                        (biscuit+i)->returnMoney(mn,xn,qn);
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {
                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    break;
                }
            }
            if(z==0)
            {
                cout<<"The item u have entered is not in the list.Do you want to buy anything else? [Y/N] :";
                cin>>q;
                if(q=="Y" || q=="y")
                    goto A;
                else
                {
                    cout<<"Thanks for using me.Have a good day!"<<endl;
                    goto Home;
                }
            }
        }
        else if(op==4)
        {
            cout<<"\n";
            for(int i=0; i<cl; i++)
            {
                cout<<"#"<<(chocolate+i)->name<<"-"<<(chocolate+i)->price;
                cout<<endl;
            }
            cout<<"Which item do you want to buy from these? Please write the product name:";
            getline(cin,p);
            z=0;
            for(int i=0; i<cl; i++)
            {
                if(p==(chocolate+i)->name)
                {
                    z++;
                    cout<<"Enter quantity:";
                    cin>>qn;
                    xn=(chocolate+i)->buy(qn);
                    if(xn==0)
                    {
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {
                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    else
                    {
                        cout<<"Give money for your desiring product/products:";
                        cin>>mn;
                        bought_item=p;
                        paid_amount=mn;
                        returned_amount=mn-xn;
                        bought_quantity=qn;
                        (drink+i)->returnMoney(mn,xn,qn);
                        ofstream fout("Payment History.txt",ios::app);
                        fout<<"#Bought item name: "<<bought_item<<"\nTotal quantity: "<<bought_quantity<<" pcs\n"<<"Total Bill: "<<xn<<"\nMoney paid: "<<paid_amount<<" Taka\nReturned amount: "<<returned_amount<<" Taka\n"<<endl;
                        fout.close();
                        (chocolate+i)->returnMoney(mn,xn,qn);
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {
                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    break;
                }
            }
            if(z==0)
            {
                cout<<"The item u have entered is not in the list.Do you want to buy anything else? [Y/N] :";
                cin>>q;
                if(q=="Y" || q=="y")
                    goto A;
                else
                {
                    cout<<"Thanks for using me.Have a good day!"<<endl;
                    goto Home;
                }
            }
        }
        else if(op==5)
        {
            cout<<"\n";
            for(int i=0; i<ck; i++)
            {
                cout<<"#"<<(cake+i)->name<<"-"<<(cake+i)->price;
                cout<<endl;
            }
            cout<<"Which item do you want to buy from these? Please write the product name:";
            getline(cin,p);
            z=0;
            for(int i=0; i<ck; i++)
            {
                if(p==(cake+i)->name)
                {
                    z++;
                    cout<<"Enter quantity:";
                    cin>>qn;
                    xn=(cake+i)->buy(qn);
                    if(xn==0)
                    {
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {
                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    else
                    {
                        cout<<"Give money for your desiring product/products:";
                        cin>>mn;
                        bought_item=p;
                        paid_amount=mn;
                        returned_amount=mn-xn;
                        bought_quantity=qn;
                        (drink+i)->returnMoney(mn,xn,qn);
                        ofstream fout("Payment History.txt",ios::app);
                        fout<<"#Bought item name: "<<bought_item<<"\nTotal quantity: "<<bought_quantity<<" pcs\n"<<"Total Bill: "<<xn<<"\nMoney paid: "<<paid_amount<<" Taka\nReturned amount: "<<returned_amount<<" Taka\n"<<endl;
                        fout.close();
                        (cake+i)->returnMoney(mn,xn,qn);
                        cout<<"Do you want to buy anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto A;
                        else
                        {
                            cout<<"Thanks for using me.Have a good day!"<<endl;
                            goto Home;
                        }
                    }
                    break;
                }
            }
            if(z==0)
            {
                cout<<"The item u have entered is not in the list.Do you want to buy anything else? [Y/N] :";
                cin>>q;
                if(q=="Y" || q=="y")
                    goto A;
                else
                {
                    cout<<"Thanks for using me.Have a good day!"<<endl;
                    return 0;
                }
            }
        }
        else
        {
            cout<<"You have given a wrong input.\nPlease give the correct input."<<endl;
            goto B;
        }
    }
    else if(ex==2)
    {
        int y;
        int pass,tr=1;
R:
        cout<<"Give your Password:";
        cin>>pass;
        if(pass!=password)
        {
            cout<<"You have given a wrong Password."<<endl;
            if(tr>=3)
            {
                cout<<"Your try limit has been reached.System is exiting..."<<endl;
                return 0;
            }
            else
            {
                tr++;
                cout<<"Try Again!"<<endl;

                goto R;
            }
        }
        else
        {
Q:
            cout<<"**Which item do you want to add?**"<<endl;
            details();
DFG:
            cin>>op;
            cin.ignore();
            if(op==1)
            {
                cout<<"     Option 1-->Do you want to increase the quantity of any previous item?\n     Option 2-->Do you want to add new item?"<<endl;
                cout<<"Enter your option:";
F:
                cin>>y;
                if(y==1)
                {
                    cout<<"\n";
                    for(int i=0; i<d; i++)
                    {
                        cout<<"#"<<(drink+i)->name<<"-"<<(drink+i)->price;
                        cout<<endl;
                    }
                    cout<<"Which item's quantity do u want to increase? Please write the name:";
                    cin.ignore();
X1:
                    getline(cin,p);
                    z=0;
                    for(int i=0; i<d; i++)
                    {

                        if(p==(drink+i)->name)
                        {
                            z++;
                            cout<<"Enter quantity:";
                            cin>>qn;
                            (drink+i)->quantity=(drink+i)->quantity+qn;
                            break;
                        }
                    }
                    if(z==0)
                    {
                        cout<<"You have given a wrong input.\nPlease enter the correct input.\n"<<endl;
                        goto X1;
                    }
                    else
                    {
                        cout<<"Successfully added the quantity."<<endl;
                        cout<<"Do you want to add anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto Q;
                        else
                        {
                            cout<<"Taking you back to the main menu..."<<endl;
                            goto Home;
                        }
                    }
                }
                else if(y==2)
                {
                    string nme;
                    int qne;
                    float fpe;
                    int i;
                    int xzd;
                    cout<<"Enter how many items do you want to add?:";
                    cin>>xzd;
                    for(i=d; i<d+xzd; i++)
                    {
                        cin.ignore();
                        cout<<"Enter the name of the drink:";
                        getline(cin,nme);
                        cout<<"Enter quantity of the drink:";
                        cin>>qne;
                        cout<<"Enter the price of the drink:";
                        cin>>fpe;
                        arr1[i]=Drinks(nme,qne,fpe);
                    }
                    d=i;
                    cout<<"Do you want to add more item?[Y/N]:";
                    cin>>nme;
                    if(nme=="Y" || nme=="y")
                        goto Q;
                    else
                    {
                        cout<<"Taking you back to the main menu.."<<endl;
                        goto Home;
                    }
                }
                else
                {
                    cout<<"You have entered a wrong input.\nPlease enter a correct input.";
                    goto F;
                }
            }
            else if(op==2)
            {
                cout<<"     Option 1-->Do you want to increase the quantity of any previous item?\n     Option 2-->Do you want to add new item?"<<endl;
                cout<<"Enter your option:";
F2:
                cin>>y;
                if(y==1)
                {
                    cout<<"\n";
                    for(int i=0; i<ch; i++)
                    {
                        cout<<"#"<<(chips+i)->name<<"-"<<(chips+i)->price;
                        cout<<endl;
                    }
                    cout<<"Which item's quantity do u want to increase? Please write the name:";
                    cin.ignore();
X2:
                    getline(cin,p);
                    z=0;
                    for(int i=0; i<ch; i++)
                    {
                        if(p==(chips+i)->name)
                        {
                            z++;
                            cout<<"Enter quantity:";
                            cin>>qn;
                            (chips+i)->quantity=(chips+i)->quantity+qn;
                            break;
                        }
                    }
                    if(z==0)
                    {
                        cout<<"You have given a wrong input.\nPlease enter the correct input.\n"<<endl;
                        goto X2;
                    }
                    else
                    {
                        cout<<"Successfully added the quantity."<<endl;
                        cout<<"Do you want to add anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto Q;
                        else
                        {
                            cout<<"Taking you back to the main menu...."<<endl;
                            goto Home;
                        }
                    }
                }
                else if(y==2)
                {
                    string nme;
                    int qne;
                    float fpe;
                    int xzd;
                    int i;
                    cout<<"Enter how many items do you want to add?:";
                    cin>>xzd;
                    for(i=ch; i<ch+xzd; i++)
                    {
                        cin.ignore();
                        cout<<"Enter the name of the Chips:";
                        getline(cin,nme);
                        cout<<"Enter quantity of the Chips:";
                        cin>>qne;
                        cout<<"Enter the price of the Chips:";
                        cin>>fpe;
                        arr2[i]=Chips(nme,qne,fpe);
                    }
                    ch=i;
                    cout<<"Do you want to add more item?[Y/N]:";
                    cin>>nme;
                    if(nme=="Y" || nme=="y")
                        goto Q;
                    else
                    {
                        cout<<"Taking you back to the main menu.."<<endl;
                        goto Home;
                    }
                }
                else
                {
                    cout<<"You have entered a wrong input.\nPlease enter a correct input.";
                    goto F2;
                }
            }
            else if(op==3)
            {
                cout<<"     Option 1-->Do you want to increase the quantity of any previous item?\n     Option 2-->Do you want to add new item?"<<endl;
                cout<<"Enter your option:";
F3:
                cin>>y;
                if(y==1)
                {
                    cout<<"\n";
                    for(int i=0; i<b; i++)
                    {
                        cout<<"#"<<(biscuit+i)->name<<"-"<<(biscuit+i)->price;
                        cout<<endl;
                    }
                    cout<<"Which item's quantity do u want to increase? Please write the name:";
                    cin.ignore();
X3:
                    getline(cin,p);
                    z=0;
                    for(int i=0; i<b; i++)
                    {
                        if(p==(biscuit+i)->name)
                        {
                            z++;
                            cout<<"Enter quantity:";
                            cin>>qn;
                            (biscuit+i)->quantity=(biscuit+i)->quantity+qn;
                            break;
                        }
                    }
                    if(z==0)
                    {
                        cout<<"You have given a wrong input.\nPlease enter the correct input.\n"<<endl;
                        goto X3;
                    }
                    else
                    {
                        cout<<"Successfully added the quantity."<<endl;
                        cout<<"Do you want to add anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto Q;
                        else
                        {
                            cout<<"Taking you back to the main menu...."<<endl;
                            goto Home;
                        }
                    }
                }
                else if(y==2)
                {
                    string nme;
                    int qne;
                    float fpe;
                    int xzd;
                    int i;
                    cout<<"Enter how many items do you want to add?:";
                    cin>>xzd;
                    for(i=b; i<b+xzd; i++)
                    {
                        cin.ignore();
                        cout<<"Enter the name of the biscuit:";
                        getline(cin,nme);
                        cout<<"Enter quantity of the biscuit:";
                        cin>>qne;
                        cout<<"Enter the price of the biscuit:";
                        cin>>fpe;
                        arr3[i]=Biscuits(nme,qne,fpe);
                    }
                    b=i;
                    cout<<"Do you want to add more item?[Y/N]:";
                    cin>>nme;
                    if(nme=="Y" || nme=="y")
                        goto Q;
                    else
                    {
                        cout<<"Taking you back to the main menu.."<<endl;
                        goto Home;
                    }
                }
                else
                {
                    cout<<"You have entered a wrong input.\nPlease enter a correct input.";
                    goto F3;
                }
            }
            else if(op==4)
            {
                cout<<"     Option 1-->Do you want to increase the quantity of any previous item?\n     Option 2-->Do you want to add new item?"<<endl;
                cout<<"Enter your option:";
F4:
                cin>>y;
                if(y==1)
                {
                    cout<<"\n";
                    for(int i=0; i<cl; i++)
                    {
                        cout<<"#"<<(chocolate+i)->name<<"-"<<(chocolate+i)->price;
                        cout<<endl;
                    }
                    cout<<"Which item's quantity do u want to increase? Please write the name:";
                    cin.ignore();
X4:
                    getline(cin,p);
                    z=0;
                    for(int i=0; i<cl; i++)
                    {
                        if(p==(chocolate+i)->name)
                        {
                            z++;
                            cout<<"Enter quantity:";
                            cin>>qn;
                            (chocolate+i)->quantity=(chocolate+i)->quantity+qn;
                            break;
                        }
                    }
                    if(z==0)
                    {
                        cout<<"You have given a wrong input.\nPlease enter the correct input.\n"<<endl;
                        goto X4;
                    }
                    else
                    {
                        cout<<"Successfully added the quantity."<<endl;
                        cout<<"Do you want to add anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto Q;
                        else
                        {
                            cout<<"Taking you back to the main menu...."<<endl;
                            goto Home;
                        }
                    }
                }
                else if(y==2)
                {
                    string nme;
                    int qne;
                    float fpe;
                    int xzd;
                    int i;
                    cout<<"Enter how many items do you want to add?:";
                    cin>>xzd;
                    for(i=cl; i<cl+xzd; i++)
                    {
                        cin.ignore();
                        cout<<"Enter the name of the chocolate:";
                        getline(cin,nme);
                        cout<<"Enter quantity of the chocolate:";
                        cin>>qne;
                        cout<<"Enter the price of the chocolate:";
                        cin>>fpe;
                        arr4[i]=Chocolates(nme,qne,fpe);
                    }
                    cl=i;
                    cout<<"Do you want to add more item?[Y/N]:";
                    cin>>nme;
                    if(nme=="Y" || nme=="y")
                        goto Q;
                    else
                    {
                        cout<<"Taking you back to the main menu.."<<endl;
                        goto Home;
                    }
                }
                else
                {
                    cout<<"You have entered a wrong input.\nPlease enter a correct input.";
                    goto F4;
                }
            }
            else if(op==5)
            {
                cout<<"     Option 1-->Do you want to increase the quantity of any previous item?\n     Option 2-->Do you want to add new item?"<<endl;
                cout<<"Enter your option:";
F5:
                cin>>y;
                if(y==1)
                {
                    cout<<"\n";
                    for(int i=0; i<ck; i++)
                    {
                        cout<<"#"<<(cake+i)->name<<"-"<<(cake+i)->price;
                        cout<<endl;
                    }
                    cout<<"Which item's quantity do u want to increase? Please write the name:";
                    cin.ignore();
X5:
                    getline(cin,p);
                    z=0;
                    for(int i=0; i<ck; i++)
                    {

                        if(p==(cake+i)->name)
                        {
                            z++;
                            cout<<"Enter quantity:";
                            cin>>qn;
                            (cake+i)->quantity=(cake+i)->quantity+qn;
                            break;
                        }
                    }
                    if(z==0)
                    {
                        cout<<"You have given a wrong input.\nPlease enter the correct input.\n"<<endl;
                        goto X5;
                    }
                    else
                    {
                        cout<<"Successfully added the quantity."<<endl;
                        cout<<"Do you want to add anything else? [Y/N] :";
                        cin>>q;
                        if(q=="Y" || q=="y")
                            goto Q;
                        else
                        {

                            cout<<"Taking you back to the main menu...."<<endl;
                            goto Home;
                        }
                    }
                }
                else if(y==2)
                {
                    string nme;
                    int qne;
                    float fpe;
                    int xzd;
                    int i;
                    cout<<"Enter how many items do you want to add?:";
                    cin>>xzd;
                    for(i=ck; i<ck+xzd; i++)
                    {
                        cin.ignore();
                        cout<<"Enter the name of the cake:";
                        getline(cin,nme);
                        cout<<"Enter quantity of the cake:";
                        cin>>qne;
                        cout<<"Enter the price of the cake:";
                        cin>>fpe;
                        arr5[i]=Cakes(nme,qne,fpe);
                    }
                    ck=i;
                    cout<<"Do you want to add more item?[Y/N]:";
                    cin>>nme;
                    if(nme=="Y" || nme=="y")
                        goto Q;
                    else
                    {
                        cout<<"Taking you back to the main menu.."<<endl;
                        goto Home;
                    }
                }
                else
                {
                    cout<<"You have entered a wrong input.\nPlease enter a correct input.";
                    goto F5;
                }
            }
            else
            {
                cout<<"You have entered wrong options.Please enter correct options."<<endl;
                goto DFG;
            }
        }
    }
    else if(ex==3)
    {
        return 0;
    }
    else
    {
        cout<<"You have given a wrong input.\nPlease give the correct input.\n"<<endl;
        goto D;
    }
    return 0;
}










