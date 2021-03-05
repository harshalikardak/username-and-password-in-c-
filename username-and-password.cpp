
#include<fstream>
#include<bits/stdc++.h>
using namespace std; 

//declaration of function
void login();
void registr();

//main function to take input from user
int main()
{
 int choice;
 cout<<"1. login"<<endl;
 cout<<"2. registtr"<<endl;
 cout<<"enter choice"<<endl;
 cin>>choice;

 switch(choice)
 {
  case 1:
  login();
  break;

  case 2:
  registr();
  break;

  default:
  cout<<"invalid choice";
  main();
 }
 return 0;
}

//funtion to get registration entry from user
void registr()
{
 char reguser[20],regpass[20];
 ofstream m("database.txt"); //creating a .txt file to write user's username and password in it

 cout<<"enter username"<<endl;
 cin>>reguser;
 m<<reguser<<endl;

 cout<<"enter password"<<endl;
 cin>>regpass;
 m<<regpass;

 cout<<"REGISTRATION SUCCESSFULL";
 m.close();
 main();
}

void login()
{
int count;
char loginuser[20],loginpass[20],reguser[20],regpass[20];
 
 cout<<"USERNAME"<<endl;
 cin>>loginuser;
 cout<<"PASSWORD"<<endl;
 cin>>loginpass;

 ifstream input("database.txt"); //to read the date from .txt file which we created to get registration input
 input>>reguser>>regpass;

  if(strcmp(loginuser,reguser)==0 && strcmp(loginpass,regpass)==0)
  {
     cout<<"login successful";
  }
  else
  {
    cout<<"login error";
  }

 input.close();
}


