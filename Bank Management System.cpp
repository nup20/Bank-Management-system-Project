#include <iostream>
using namespace std;

class Banksystem
{
public:
    int ch4;
    string name,lname,mname,Address,username,password,acctype;
    string nn,nln,nmn,nA;
    string perT;
    double passw;
    double D=0,W=0,T=0,AC=0,R=0;


Banksystem()
{
    D=0,W=0,T=0,AC=0;
    name="unknown";
    lname="unknown";
    mname="unknown";
    Address="unknown";
    username="username";
    password="Not Set";

}


   void createAccount()
   {
       int ch;
        cout<<"First Name :";
        cin>>name;
        cout<<"ok...."<<endl;
        cout<<"Last Name :";
        cin>>lname;
        cout<<"ok...."<<endl;
        cout<<"Mother Name :";
        cin>>mname;
        cout<<"ok...."<<endl;
        cout<<"Address :";
        cin>>Address;
        cout<<"ok...."<<endl<<endl;
        cout<<"Select Account Type:"<<endl;
        cout<<"1.Saving Account"<<endl;
        cout<<"2.Current Account"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"------------Saving Account-----------------"<<endl;
            acctype="Saving Account";
        break;
        case 2:
            cout<<"--------------Current Account-----------------"<<endl;
            acctype="Current Account";
        break;
        default:
            cout<<"--------------wrong Input-----------------"<<endl;
        break;
        }

        cout<<"create Username:";
        cin>>username;
        cout<<"create Password:";
        cin>>password;
        cout<<" Account created Successfully---------------"<<endl;
    }

void checkbalance(Banksystem B[200],int n,string uname)
        {
        string x;
        x=uname;

    cout<<"-------BALANCE DASHBOARD-------"<<endl<<endl;
    cout<<"SNo"<<" "<<"TRANSACTION  AMOUNT"<<endl;
    cout<<"1."<<" "<<"DEPOSITE      "<<" +"<<D<<endl;
    cout<<"2."<<" "<<"WITHDRAWAL    "<<" -"<<W<<endl;
    if(T!=0)
    cout<<"3."<<" "<<"TRANSFER TO   "<<perT<<"-"<<T<<endl;
    if(R!=0)
    cout<<"3."<<" "<<"Recevid from   "<<perT<<"+"<<R<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"ACCOUNT BALANCE :"<<AC<<endl<<"ok"<<endl;
}


    void Depositecash(Banksystem B[200],int n)
{
    cout<<"----------DEPOSIT CASH--------"<<endl;
    cout<<"Current Balance:"<<AC<<endl;
    cout<<"Enter Deposite Amount:"<<endl;
    cin>>D;
    AC=AC+D;
    cout<<"Cash Deposit Successful......"<<endl;
}
void Withdrawlcash(Banksystem B[200],int n)
        {cout<<"-------WITHDRAWAL CASH--------"<<endl;
            cout<<"Current Balance:"<<AC<<endl;
            cout<<"Enter Withdrawal Amount:"<<endl;
            cin>>W;
           if(AC>W)
            {AC=AC-W;
            cout<<"CASH WITHDRAWL SUCCESSFUL........"<<endl;
            }
            else
              {cout<<"Account Balance is less"<<endl;}
        }

void Transfermoney(Banksystem B[200],int n)
{
int w=0;
    cout<<"----------TRANSFER MONEY---------"<<endl;
    cout<<"Current Balance:"<<AC<<endl;
    cout<<"Enter The Amount To be Transfered:"<<endl;
    cin>>T;
    cout<<"TRANSFERRED TO(username of person)"<<endl;
    cin>>perT;


    for(int i=0;i<n;i++)
    {
         if(perT==B[i].username)
        {
            B[i].AC=B[i].AC+T;
            AC=AC-T;
          cout<<"Amount SUCCESSFULLY TRANSFERRED........"<<endl;
          B[i].R=T;
        }
        else{
            w++;
        }
    }

    if(w==n)
            cout<<"ACCOUNT NOT EXIST"<<endl;

    w=0;

}


        void info()
         {

            cout<<"----------Account Info----------"<<endl;
            cout<<"AccountType:"<<acctype<<endl;
            cout<<"Username:"<<username<<endl;
            cout<<"Password:"<<password<<endl<<endl;
            cout<<"First Name:"<<name<<endl;
            cout<<"Last Name:"<<lname<<endl;
            cout<<"Mother Name:"<<mname<<endl;
            cout<<"Address:"<<Address<<endl<<"ok"<<endl;
            }


        void updateinfo()
        {
            int ch,chh,o;
            string nacctype,nun,npa;
            cout<<"---------UPDATE INFO-----------"<<endl;
            cout<<"1.AccountType"<<endl;
            cout<<"2.UserName"<<endl;
            cout<<"3.Password"<<endl;
            cout<<"4.First Name"<<endl;
            cout<<"5.Last Name"<<endl;
            cout<<"6.Mother Name"<<endl;
            cout<<"7.Address"<<endl;
            cout<<"0.Exit"<<endl;
            cout<<"Enter Choice:"<<endl;
            cin>>ch;
            switch(ch)
            {
                case 1:
                    cout<<"CurrentAccount Type:"<<acctype<<endl;
                    cout<<"Enter New Account Type:"<<endl;
                    cout<<"Do you really want to change"<<" "<<acctype<<"(y=1),(n=0)"<<endl<<endl<<"choice:"<<endl;
                    cin>>o;
                    if(o==1)
                    {
                    cout<<"1.saving Account"<<endl;
                    cout<<"2.Current account"<<endl;
                    cin>>chh;
                    switch(chh)
                    {
                    case 1:
                        nacctype="Saving Account";
                        acctype=nacctype;
                        break;
                        case 2:
                        nacctype="Current Account";
                        acctype=nacctype;
                        break;
                        default :
                            cout<<"wrong choice"<<endl;
                        break;
                    }
                     cout<<"Present Account Type:"<<acctype<<endl;
                    cout<<".... ok Account Type Updated"<<endl;
                    }
                    else
                        cout<<"ok....Not Updated"<<endl;

                    break;
                    case 2:
                    cout<<"Current User name:"<<username<<endl;
                    cout<<"Do you really want to change"<<" "<<username<<"(y=1),(n=0)"<<endl<<endl<<"choice:"<<endl;
                    cin>>o;
                    if(o==1)
                    {cout<<"Enter New User name:"<<endl;
                    cin>>nun;
                    username=nun;
                    cout<<"Current User name:"<<username<<endl;
                    cout<<".... ok User Name Updated"<<endl;
                    }
                    else
                        cout<<"ok.....Not Updated"<<endl;

                    break;
                    case 3:
                    cout<<"Current Password:"<<password<<endl;
                    cout<<"Do you really want to change"<<" "<<password<<"(y=1),(n=0)"<<endl<<endl<<"choice:"<<endl;
                    cin>>o;
                    if(o==1)
                    {cout<<"Enter New Password:"<<endl;
                    cin>>npa;
                    password=npa;
                     cout<<"Current User name:"<<password<<endl;
                      cout<<".... ok. Password Updated"<<endl;
                      }
                      else
                        cout<<"ok.....Not Updated"<<endl;
                    break;
                    case 4:
                    cout<<"Current First name:"<<name<<endl;
                    cout<<"Do you really want to change"<<" "<<name<<"(y=1),(n=0)"<<endl<<endl<<"choice:"<<endl;
                    cin>>o;
                    if(o==1)
                    {cout<<"Enter New First name:"<<endl;
                    cin>>nn;
                    name=nn;
                     cout<<"Current First name:"<<name<<endl;
                     cout<<".... ok .name Updated"<<endl;}
                     else
                        cout<<"ok......Not Updated"<<endl;
                    break;
                    case 5:
                    cout<<"Current Last name:"<<lname<<endl;
                    cout<<"Do you really want to change"<<" "<<lname<<"(y=1),(n=0)"<<endl<<endl<<"choice:"<<endl;
                    cin>>o;
                    if(o==1)
                    {cout<<"Enter New Last name:"<<endl;
                    cin>>nln;
                    lname=nln;
                     cout<<"Current Last name:"<<lname<<endl;
                      cout<<".... ok. Last name Updated"<<endl;}
                      else
                        cout<<"ok.....Not Updated"<<endl;

                    break;
                    case 6:
                    cout<<"Current Mother name:"<<mname<<endl;
                    cout<<"Do you really want to change"<<" "<<mname<<"(y=1),(n=0)"<<endl<<endl<<"choice:"<<endl;
                    cin>>o;
                    if(o==1)
                    {cout<<"Enter New Mother name:"<<endl;
                    cin>>nmn;
                    mname=nmn;
                     cout<<"Current Mother name:"<<mname<<endl;
                      cout<<".... ok. Mother name Updated"<<endl;}
                      else
                        cout<<"ok......Not Updated"<<endl;
                    break;
                    case 7:
                    cout<<"Current Address:"<<Address<<endl;
                    cout<<"Do you really want to change"<<" "<<Address<<"(y=1),(n=0)"<<endl<<endl<<"choice:"<<endl;
                    cin>>o;
                    if(o==1)
                    {cout<<"Enter New Address:"<<endl;
                    cin>>nA;
                    Address=nA;
                     cout<<"Current Mother name:"<<Address<<endl;
                     cout<<".... ok. Address Updated"<<endl;}
                     else
                     cout<<"ok.......ot Updated"<<endl;


                    break;
                    case 0:
                        cout<<"Exit"<<endl;
                    break;
                    default:
                    cout<<"Wrong choice"<<endl;
                    break;
                    }
        }


};

int main()
{Banksystem B[200];

int ch1,ch2,ch3,l=1,ll=1,i=1,n=1,x=0;;
string uname,upass;

cout<<"welcome to bank Account System"<<endl<<endl;
while(l)
{cout<<endl<<"1.create new Account"<<endl;
cout<<"2.Login Account"<<endl;
cout<<"0.Exit"<<endl;
cout<<"Enter your choice:"<<endl;
cin>>ch1;
switch(ch1)
{   case 1:
    cout<<"---------------create  Account--------------------"<<endl;
    B[n].createAccount();
    n++;
    break;
    case 2:
        cout<<"---------------Login  Account--------------------"<<endl;
        cout<<"Enter Username:"<<endl;
        cin>>uname;
        cout<<"Enter Password:"<<endl;
        cin>>upass;
         for(i=1;i<n;i++)
        {
            if(uname==B[i].username &&upass==B[i].password)
           {  cout<<endl<<"---User Login----"<<endl;
            cout<<"Welcome"<<" "<<B[i].name<<" "<<B[i].lname<<endl;
            ll=1;

            while(ll)
            {
                cout<<endl<<"1.CHECK BALANCE"<<endl;
                cout<<"2.DEPOSIT CASH"<<endl;
                cout<<"3.WITHDRAWAL CASH"<<endl;
                cout<<"4.TRANSFER MONEY"<<endl;
                cout<<"5.ACCOUNT INFO"<<endl;
                cout<<"6.UPDATE INFO"<<endl;
                cout<<"0.EXIT.........."<<endl;
                cout<<"Enter choice:"<<endl;
                cin>>ch3;
                switch(ch3)
                {
                case 1:
                    B[i].checkbalance(B,n,uname);
                break;
                case 2:
                    B[i].Depositecash(B,n);
                break;
                case 3:
                    B[i].Withdrawlcash(B,n);
                break;
                case 4:
                    B[i].Transfermoney(B,n);
                break;
                case 5:
                    B[i].info();
                break;
                case 6:
                    B[i].updateinfo();
                break;
                case 0:
                    ll=0;
                break;
                default:
                    cout<<"Wrong Username and password!"<<endl<<"Try Again"<<endl;
                break;
                }
            }
        }


        }

    break;
    case 0:
        cout<<"-----------THANK YOU !----------"<<"---------For using System---------"<<endl;
        l=0;
        break;
    default:
        cout<<"-----------------------wrong Input.........."<<endl;
    break;
}
}
    return 0;
}
