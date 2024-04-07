#include <iostream>
#include <fstream>
#include<cstdio>
using namespace std;
class vehicle
{ 

 public:
int no_of_seats;
int carcode;
 float mileage, rent,dep;
 string vehicle_no,carname;
 public:
        vehicle()
        { rent=0;
          dep=0;}
  void add();
void addsedan();
void addsuv();
void addhatchback();
 void edit();
void editsedan();
void editsuv();
void edithatchback();
void del();
void delsedan();
void delsuv();
void delhatch();
void listsedan();
void listsuv();
void listhatch();
  void menu();
void rent_vehicle();

friend class user_info;
};

class four_wheeler:public vehicle
{ 
  public: 
        void sedan();
        void hatchback();
        void suv();
};
void vehicle::add()
{
  int ch;
  cout<<"\n\n\t\t Enter 1 to add data in sedan \n";
  cout<<"\n\n\t\t Enter 2 to add data in suv \n";
  cout<<"\n\n\t\t Enter 3 to add data in hatchback \n";
  cin>>ch;
  switch(ch)
    {
      case 1:
      this->addsedan();
      break;
        case 2:
      this->addsuv();
      break;
        case 3:
      this->addhatchback();
      break;
    }
}
void vehicle:: addsedan()
{  
  m:
fstream data;
  int c,s,token=0;
  string n,v;
  float r,d;
  
  cout<<"\n\n\n\t\t\t Add the vehicle \n ";
  cout<<"\n \n\t Enter the code\n";
  cin>> carcode;
   cout<<"\n \n\t Enter the car name \n";
  cin>> carname;
  cout<<"\n\n \t Enter car number \n";
  cin>>  vehicle_no;
  cout<<"\n\n \t Enter number of seats \n";
  cin>>  no_of_seats;;
   cout<<"\n\n \t Enter percent Rent \n";
  cin>> rent;
   cout<<"\n \t Enter percent deposite \n";
  cin>> dep;
  data.open("sedan.txt",ios::in);
  if (!data)
  {
    data.open("sedan.txt",ios::app|ios::out);
    data<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
    data.close();
 }
  else
{
    data>>c>>n>>v>>s>>r>>d;
    while(!data.eof())
      {
        if(c==carcode)
        {
          token++;
        }
        data>>c>>n>>v>>s>>r>>d;
      }
  data.close();
  
  if(token==1)
  {
    cout<<"\n \t code is already used Enter valid code \n";
    goto m;
  }
  else
  {
     data.open("sedan.txt",ios::app|ios::out);
    data<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
    data.close();
    
  }

}
cout<<"\n\n\t\t\t Data is added in system \n";

 }

void vehicle:: addsuv()
{  
  m:
fstream data;
  int c,s,token=0;
  string n,v;
  float r,d;
  
  cout<<"\n\n\n\t\t\t Add the vehicle \n ";
  cout<<"\n \n\t Enter the code\n";
  cin>> carcode;
   cout<<"\n \n\t Enter the car name \n";
  cin>> carname;
  cout<<"\n\n \t Enter car number \n";
  cin>>  vehicle_no;
  cout<<"\n\n \t Enter number of seats \n";
  cin>>  no_of_seats;;
   cout<<"\n\n \t Enter percent Rent \n";
  cin>> rent;
   cout<<"\n \t Enter percent deposite \n";
  cin>> dep;
  data.open("suv.txt",ios::in);
  if (!data)
  {
    data.open("suv.txt",ios::app|ios::out);
    data<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
    data.close();
 }
  else
{
    data>>c>>n>>v>>s>>r>>d;
    while(!data.eof())
      {
        if(c==carcode)
        {
          token++;
        }
        data>>c>>n>>v>>s>>r>>d;
      }
  data.close();
  
  if(token==1)
  {
    cout<<"\n \t code is already used Enter valid code \n";
    goto m;
  }
  else
  {
     data.open("suv.txt",ios::app|ios::out);
    data<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
    data.close();
    
  }

}
cout<<"\n\n\t\t\t Data is added in system \n";

 }
void vehicle:: addhatchback()
{  
  m:
fstream data;
  int c,s,token=0;
  string n,v;
  float r,d;
  
  cout<<"\n\n\n\t\t\t Add the vehicle \n ";
  cout<<"\n \n\t Enter the code\n";
  cin>> carcode;
   cout<<"\n \n\t Enter the car name \n";
  cin>> carname;
  cout<<"\n\n \t Enter car number \n";
  cin>>  vehicle_no;
  cout<<"\n\n \t Enter number of seats \n";
  cin>>  no_of_seats;;
   cout<<"\n\n \t Enter percent Rent \n";
  cin>> rent;
   cout<<"\n \t Enter percent deposite \n";
  cin>> dep;
  data.open("hatchback.txt",ios::in);
  if (!data)
  {
    data.open("hatchback.txt",ios::app|ios::out);
    data<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
    data.close();
 }
  else
{
    data>>c>>n>>v>>s>>r>>d;
    while(!data.eof())
      {
        if(c==carcode)
        {
          token++;
        }
        data>>c>>n>>v>>s>>r>>d;
      }
  data.close();
  
  if(token==1)
  {
    cout<<"\n \t code is already used Enter valid code \n";
    goto m;
  }
  else
  {
     data.open("hatchback.txt",ios::app|ios::out);
    data<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
    data.close();
    
  }

}
cout<<"\n\n\t\t\t Data is added in system \n";

 }
void vehicle::edit()
{
    int ch;
  cout<<"\n\n\t\t Enter 1 to edit data in sedan \n";
  cout<<"\n\n\t\t Enter 2 to edit data in suv \n";
  cout<<"\n\n\t\t Enter 3 to edit data in hatchback \n";
  cin>>ch;
  switch(ch)
    {
      case 1:
      this->editsedan();
      break;
        case 2:
      this->editsuv();
      break;
        case 3:
      this->edithatchback();
      break;
    }
}

void vehicle::editsedan()
{
  fstream data,data1;
  int c,s,token=0,pkey;
  string n,v;
  float r,d;
  cout<<"\n\t\t\t Modify the record \n";
  cout<<"\n\t Enter car code \n ";
  cin>>pkey;
  data.open("sedan.txt");
  if(!data)
  {
    cout<<"\n\t File does not exist \n";
  }
  else
  {
    data1.open("sedan1.txt",ios::app|ios::out);
    data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
    while(!data.eof())
      {
        if(pkey==carcode)
        {
           cout<<"\n\n\n\t\t\t Add the vehicle \n ";
  cout<<"\n \t Enter the code\n";
  cin>> c;
   cout<<"\n \t Enter the car name \n";
  cin>> n;
  cout<<"\n \t Enter car number \n";
  cin>>  v;
  cout<<"\n \t Enter number of seats \n";
  cin>>  s;
   cout<<"\n \t Enter percent Rent \n";
  cin>> r;
   cout<<"\n \t Enter percent deposite \n";
  cin>> d;
          data1<<" "<<c<<" "<<n<<" "<<v<<" "<<s<<" "<<r<<" "<<d<<" \n";
  cout<<"\n\t\t\t Data is edited";
          token++;
 
        }
        else
        {
          data1<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
        }
         data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
      }
    data1.close();
    data.close();
   
    remove("sedan.txt");
    
    
    rename ("sedan1.txt","sedan.txt");
    
    
    if(token==0)
      cout<<"\n\t\t\t Sorry !Record not found \n";
  }
}

void vehicle::editsuv()
{
  fstream data,data1;
  int c,s,token=0,pkey;
  string n,v;
  float r,d;
  cout<<"\n\t\t\t Modify the record \n";
  cout<<"\n\t Enter car code \n ";
  cin>>pkey;
  data.open("suv.txt");
  if(!data)
  {
    cout<<"\n\t File does not exist \n";
  }
  else
  {
    data1.open("suv1.txt",ios::app|ios::out);
    data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
    while(!data.eof())
      {
        if(pkey==carcode)
        {
           cout<<"\n\n\n\t\t\t Add the vehicle \n ";
  cout<<"\n \t Enter the code\n";
  cin>> c;
   cout<<"\n \t Enter the car name \n";
  cin>> n;
  cout<<"\n \t Enter car number \n";
  cin>>  v;
  cout<<"\n \t Enter number of seats \n";
  cin>>  s;
   cout<<"\n \t Enter percent Rent \n";
  cin>> r;
   cout<<"\n \t Enter percent deposite \n";
  cin>> d;
          data1<<" "<<c<<" "<<n<<" "<<v<<" "<<s<<" "<<r<<" "<<d<<" \n";
  cout<<"\n\t\t\t Data is edited";
          token++;
 
        }
        else
        {
          data1<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
        }
         data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
      }
    data1.close();
    data.close();
   
    remove("suv.txt");
    
    
    rename ("suv1.txt","suv.txt");
    
    
    if(token==0)
      cout<<"\n\t\t\t Sorry !Record not found \n";
  }
}

void vehicle::edithatchback()
{
  fstream data,data1;
  int c,s,token=0,pkey;
  string n,v;
  float r,d;
  cout<<"\n\t\t\t Modify the record \n";
  cout<<"\n\t Enter car code \n ";
  cin>>pkey;
  data.open("hatchback.txt");
  if(!data)
  {
    cout<<"\n\t File does not exist \n";
  }
  else
  {
    data1.open("hatchback1.txt",ios::app|ios::out);
    data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
    while(!data.eof())
      {
        if(pkey==carcode)
        {
           cout<<"\n\n\n\t\t\t Add the vehicle \n ";
  cout<<"\n \t Enter the code\n";
  cin>> c;
   cout<<"\n \t Enter the car name \n";
  cin>> n;
  cout<<"\n \t Enter car number \n";
  cin>>  v;
  cout<<"\n \t Enter number of seats \n";
  cin>>  s;
   cout<<"\n \t Enter percent Rent \n";
  cin>> r;
   cout<<"\n \t Enter percent deposite \n";
  cin>> d;
          data1<<" "<<c<<" "<<n<<" "<<v<<" "<<s<<" "<<r<<" "<<d<<" \n";
  cout<<"\n\t\t\t Data is edited";
          token++;
 
        }
        else
        {
          data1<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
        }
         data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
      }
    data1.close();
    data.close();
   
    remove("hatchback.txt");
    
    
    rename ("hatchback1.txt","hatchback.txt");
    
    
    if(token==0)
      cout<<"\n\t\t\t Sorry !Record not found \n";
  }
}


void vehicle::del()
{
    int ch;
  cout<<"\n\n\t\t Enter 1 to delete data in sedan \n";
  cout<<"\n\n\t\t Enter 2 to delete data in suv \n";
  cout<<"\n\n\t\t Enter 3 to delete data in hatchback \n";
  cin>>ch;
  switch(ch)
    {
      case 1:
      this->delsedan();
      break;
        case 2:
      this->delsuv();
      break;
        case 3:
      this->delhatch();
      break;
    }
}


void vehicle::delsedan()
{
  fstream data,data1;
  int pkey,token=0;
  cout<<"\n\n\t\t DELETE PRODUCT \n";
  cout<<"\n\t\t Enter the carcode for deletion \n";
  cin>>pkey;
  data.open("sedan.txt",ios::in);
  if(!data)
  {
    cout<<"\n\t\t File does not exist \n";
  }
  else
  {
    data1.open("sedan1.txt",ios::app|ios::out);
    data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
    while(!data.eof())
      {
        if(pkey==carcode)
        {
          cout<<"\n\t\t Data is deleted \n";
          token++;
        }
        else
        {
          data1<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
        }
         data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
      }
     data1.close();
    data.close();
   
    remove("sedan.txt");
    
    
    rename ("sedan1.txt","sedan.txt");
    if(token==0)
      cout<<"\n\t\t\t Sorry !Record not found \n";
    
    }
}
void vehicle::delsuv()
{
  fstream data,data1;
  int pkey,token=0;
  cout<<"\n\n\t\t DELETE PRODUCT \n";
  cout<<"\n\t\t Enter the carcode for deletion \n";
  cin>>pkey;
  data.open("suv.txt",ios::in);
  if(!data)
  {
    cout<<"\n\t\t File does not exist \n";
  }
  else
  {
    data1.open("suv1.txt",ios::app|ios::out);
    data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
    while(!data.eof())
      {
        if(pkey==carcode)
        {
          cout<<"\n\t\t Data is deleted \n";
          token++;
        }
        else
        {
          data1<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
        }
         data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
      }
     data1.close();
    data.close();
   
    remove("suv.txt");
    
    
    rename ("suv1.txt","suv.txt");
    if(token==0)
      cout<<"\n\t\t\t Sorry !Record not found \n";
    
    }
}
void vehicle::delhatch()
{
  fstream data,data1;
  int pkey,token=0;
  cout<<"\n\n\t\t DELETE PRODUCT \n";
  cout<<"\n\t\t Enter the carcode for deletion \n";
  cin>>pkey;
  data.open("hatchback.txt",ios::in);
  if(!data)
  {
    cout<<"\n\t\t File does not exist \n";
  }
  else
  {
    data1.open("hatchback1.txt",ios::app|ios::out);
    data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
    while(!data.eof())
      {
        if(pkey==carcode)
        {
          cout<<"\n\t\t Data is deleted \n";
          token++;
        }
        else
        {
          data1<<" "<<carcode<<" "<<carname<<" "<<vehicle_no<<" "<<no_of_seats<<" "<<rent<<" "<<dep<<" \n";
        }
         data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
      }
     data1.close();
    data.close();
   
    remove("hatchback.txt");
    
    
    rename ("hatchback1.txt","hatchback.txt");
    if(token==0)
      cout<<"\n\t\t\t Sorry !Record not found \n";
    
    }
}
void vehicle::listsedan()
{
  fstream data;
  cout<<"\n\n\t\t AVILABLE CARS ARE \n\n";
/*  cout<<"\t Carcode"<<"\t\t Carname"<<"\t\t Number"<<"\t\t Seats "<<"\t\t Rent"<<"\t\t Deposite ";*/
  data.open("sedan.txt",ios::in);
  data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
  while(!data.eof())
    {
cout<<"\t\t "<<carcode<<"\t\t "<<carname<<"\t\t "<<vehicle_no<<"\t\t"<<no_of_seats <<"\t\t "<<rent<<"\t\t "<<dep<<"\n";
      data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
  
    }
  data.close();
  
}
void vehicle::listsuv()
{
  fstream data;
  cout<<"\n\n\t\t AVILABLE CARS ARE \n\n";
/*  cout<<"\t Carcode"<<"\t\t Carname"<<"\t\t Number"<<"\t\t Seats "<<"\t\t Rent"<<"\t\t Deposite ";*/
  data.open("suv.txt",ios::in);
  data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
  while(!data.eof())
    {
cout<<"\t\t "<<carcode<<"\t\t "<<carname<<"\t\t "<<vehicle_no<<"\t\t"<<no_of_seats <<"\t\t "<<rent<<"\t\t "<<dep<<"\n";
      data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
  
    }
  data.close();
  
}
void vehicle::listhatch()
{
  fstream data;
  cout<<"\n\n\t\t AVILABLE CARS ARE \n\n";
/*  cout<<"\t Carcode"<<"\t\t Carname"<<"\t\t Number"<<"\t\t Seats "<<"\t\t Rent"<<"\t\t Deposite ";*/
  data.open("hatchback.txt",ios::in);
  data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
  while(!data.eof())
    {
cout<<"\t\t "<<carcode<<"\t\t "<<carname<<"\t\t "<<vehicle_no<<"\t\t"<<no_of_seats <<"\t\t "<<rent<<"\t\t "<<dep<<"\n";
      data>>carcode>>carname>>vehicle_no>>no_of_seats>>rent>>dep;
  
    }
  data.close();
  
}





 

class two_wheeler:public vehicle
{ public:
        void mopaid();
        void bike();
};


class user_info
{
 long int mob_no,aadhar_no;
 string name,add;
 int days_no;
 public:
       void get_info();
       void recipt();
};

void vehicle::menu()

{
  f:
  string email;
  string pass;
  cout<<"\t\t\t\t Enter Email \n";
  cin>> email;
   cout<<"\t\t\t\t Enter password \n";
  cin>> pass;
  if (email=="admin123@gmail.com" && pass=="admin@123" )
  {
  
  m:
  int choice;
  cout<<"\t\t\t\t___________________________________________\n";
  cout<<"\t\t\t\t                                         \n";
  cout<<"\t\t\t\t               ADMIN LOGIN               \n";
  cout<<"\t\t\t\t___________________________________________\n";
  cout<<"\t\t\t\t| 1. Rent a vehicle  for customer         |      \n";
  cout<<"\t\t\t\t| 2. To add new Vehicle's data            |     \n";
  cout<<"\t\t\t\t| 3. To delete data of scrapped vehicle   |     \n";
  cout<<"\t\t\t\t| 4. To edit data of existing vehicle     |      \n";
  cout<<"\t\t\t\t| 5. To exit                              |           \n";
  cin>>choice;
  switch(choice)
    {
      case 1://rent_vehicle();
      break;
      case 2:add();
      break;
      case 3:del();
      break;
      case 4:edit();
      break;
      case 5:
      break;
      default: cout<<"Invalid input";
    }
    if(choice!=5)
    goto m;
    }
  else {
    cout<<"\t\t\t\t Enter the valid email or passward \n";
    cout<<endl;
    cout<<endl;
    cout<<endl;
    goto f;
  }
  }



int main() {
 vehicle v;
 v.menu();
  
  return 0;
}