#include <iostream>
#include<string.h>
#include<fstream>
using namespace std;
void main_menu();

class Management{
    public:
    Management(){
        main_menu();
    }
};
//CLASS TO RESERVE TICKETS//
class Reserve{
    public:
    static string name,gender;
    string phone_no;
    int age;
    int p_no;
    string add;
    static int c_id;
    string ar;
    void information(){
        cout<<"1) Enter your Custome Id : ";
        cin>>c_id;
        cout<<"\n2) Enter your name : ";
        cin>>name;
        cout<<"\n3) Enter your Passport Number : ";
	    cin>>p_no;
        cout<<"\n4) Enter your Address : ";
        cin>>add;
        cout<<"\n5) Enter your Gender : ";
        cin>>gender;
        cout<<"\n6) Enter your Phone no : ";
        cin>>phone_no;
        cout<<"\n7) Enter your Age : ";
        cin>>age;
        cout<<"\n-----Your details are saved with us-----"<<endl;
         
    }
};
int Reserve::c_id;
string Reserve::name;
string Reserve::gender;

class Registration:public Reserve{
  private:
    char f_na[20];
    int CLASS;
  public:
    static int f_n;
    void flight_inf(){
        information();
	cout<<"\n\n\t\t\t*** Flight Details ***\n";
	cout<<"\n\n->The flights are available for following destination : \n";
    		cout<<" 1. ENGLAND\n 2. USA\n 3. SOUTH AFRICA\n 4. CHINA\n 5. EGYPT\n";
	 	cout<<"\n1) Enter Destination no from the above list : ";
        cin>>f_n;
	if(f_n==1||f_n==2||f_n==3||f_n==4||f_n==5)
	{
	   	cout<<"\n\n->Choose class\n 1.Economy Class(Press 1)\n 2.Business Class(Press 2)\n ";
	   	cout<<"\n->Enter Your Choice : "; 
	      cin>>CLASS;
	   if(CLASS==1&&(f_n==1))
	   {
	   	cout<<"\nFlights Available are : \n 1] PR-101\n 2] PR-102\n 3] PR-103\n 4] PR-104\n 5] PR-105\n ";
	   }
	  if(CLASS==1&&(f_n==2))
	   {
	   	 	cout<<"\nFlights Available are : \n 1] PRS-101\n 2] PRS-102\n 3] PRS-103\n 4] PRS-104\n 5] PRS-105\n";
	   }
	   if(CLASS==1&&(f_n==3))
	   {
	   	 	cout<<"\nFlights Available are : \n 1] U-101\n 2] U-102\n 3] U-104\n 4] U-105\n";
	   }
	  if(CLASS==1&&(f_n==4))
	   {
	   	 cout<<"\nFlights Available are : \n 1] US-101\n 2] US-102\n 3] US-104\n 4] US-105\n";
	   }
	   if(CLASS==1&&(f_n==5))
	   {
	   	 	cout<<"\nFlights Available are : \n 1] S-101\n 2] S-102\n 3] S-103\n 4] S-104\n";
	   }
	   if(CLASS==2&&(f_n==3))
	   {
	   	 	cout<<"\nFlights Available are : \n 1] SS-101\n 2] SS-102\n 3] SS-103\n 4] SS-104\n";
	   }
	   if(CLASS==2&&(f_n==4))
	   {
	   	 	cout<<"\nFlights Available are : \n 1] CH-101\n 2] CH-102\n 3] CH-103\n 4] CH-104\n 5] CH-105\n";
	   }
	   if(CLASS==2&&(f_n==2))
	   {
	   	  	cout<<"\nFlights Available are : \n 1] CHS-101\n 2] CHS-102\n 3] CHS-103\n 4] CHS-104\n 5] CHS-105\n";
	   }
	   if(CLASS==2&&(f_n==5))
	   {
	   	 	cout<<"\nFlights Available are : \n 1] E-101\n 2] E-102\n 3] E-103\n 4] E-104\n 5] E-105\n";
	   }
	  if(CLASS==2&&(f_n==1))
	   {
	   	 	cout<<"\nFlights Available are : \n 1] E-101\n 2] E-102\n 3] E-103\n 4] E-104\n 5] E-105\n";
	   }
	   	cout<<"\n\n2) Enter Flight Number : ";
         cin>>f_na;
       
       if(strcmp(f_na,"PR-101")==0||strcmp(f_na,"PR-102")==0||strcmp(f_na,"PR-103")==0||strcmp(f_na,"PR-104")==0||strcmp(f_na,"PR-105")==0||strcmp(f_na,"U-101")==0||strcmp(f_na,"U-102")==0||strcmp(f_na,"U-104")==0||strcmp(f_na,"U-105")==0||strcmp(f_na,"S-101")==0||strcmp(f_na,"S-102")==0||strcmp(f_na,"S-103")==0||strcmp(f_na,"S-104")==0||strcmp(f_na,"CH-101")==0||strcmp(f_na,"CH-102")==0||strcmp(f_na,"CH-103")==0||strcmp(f_na,"CH-104")==0||strcmp(f_na,"CH-105")==0||strcmp(f_na,"E-101")==0||strcmp(f_na,"E-102")==0||strcmp(f_na,"E-103")==0||strcmp(f_na,"E-104")==0||strcmp(f_na,"E-105")==0||strcmp(f_na,"PRS-101")==0||strcmp(f_na,"PRS-102")==0||strcmp(f_na,"PRS-103")==0||strcmp(f_na,"PRS-104")==0||strcmp(f_na,"PRS-105")==0||strcmp(f_na,"US-101")==0||strcmp(f_na,"US-102")==0||strcmp(f_na,"US-104")==0||strcmp(f_na,"US-105")==0||strcmp(f_na,"SS-101")==0||strcmp(f_na,"SS-102")==0||strcmp(f_na,"SS-103")==0||strcmp(f_na,"SS-104")==0||strcmp(f_na,"CHS-101")==0||strcmp(f_na,"CHS-102")==0||strcmp(f_na,"CHS-103")==0||strcmp(f_na,"CHS-104")==0||strcmp(f_na,"CHS-105")==0||strcmp(f_na,"ES-101")==0||strcmp(f_na,"ES-102")==0||strcmp(f_na,"ES-103")==0||strcmp(f_na,"ES-104")==0||strcmp(f_na,"ES-105")==0)
	   {
	   	cout<<"\n\t\t-----Flight booking successfull-----"<<endl;
	   	cout<<"\t\t-----You can go to main menu to take your tickets or press :"<<endl;
	   	cout<<"\t\t\t-> 1 to take your ticket"<<endl;
	   	cout<<"\t\t\t-> or any key to go to main menu"<<endl;
	}
       else
       {
    	   	cout<<"\n\t\t------- Sorry no flight is available -------";
	   }}
	else
	{
			cout<<"\n\t\t....... Sorry No flight is available for input destination .......";
	}   
}
};
int Registration::f_n;

//ticket//
class ticket:public Registration{
    public:
      void bill(){
          string destiny="";
          ofstream outf;
          outf.open("records.txt");
          outf<<"\n\t\t\t-----Ticket-----\n\n";
          outf<<"\t\t   Customer id: "<<c_id<<endl;
          outf<<"\t\t   Customer Name: "<<name<<endl;
          outf<<"\t\t   Customer gender: "<<gender;
          outf<<"\n\t\t  Description"<<endl<<endl;
          if(f_n==1){
              destiny="ENGLAND";
          }
          else if(f_n==2){
              destiny="USA";
          }
          else  if(f_n==3){
              destiny="SOUTH AFRICA";
          }
          else  if(f_n==4){
              destiny="CHINA";
              }
          else  if(f_n==5){
              destiny="EGYPT";
          }
          outf<<"\t\t   Destination  : "<<destiny<<endl;
          outf<<"\t\t   Flight cost : "<<"80000"<<endl;
      outf.close();
      }
      void display(){
          ifstream fin;
          fin.open("records.txt");
          if(!fin){
              cout<<"File not found";
          }
          else{
              char mychar;
           while ( fin ) {
              mychar=fin.get();
          cout << mychar;
           }
}
        
          
      
      fin.close();
      }
    
};
//about schedule//
class Schedule{
    public:
    int des;
    	char flight[20];
	int Class_no;
	void about_schedule(){
	cout<<"\n\n\t\t\t**** Welcome to the Airlines! ****";
    cout<<"\n\n\t\t\t\tCHOOSE CLASS : \n\t\t\t\t 1. Economy Class\n\t\t\t\t 2. Business Class\n";
	cout<<"\n\t\t\t\t->Enter one of the following ";
	cin>>Class_no;
    if(Class_no==1)
    {
        cout<<"\n\n\t\t\t**** Welcome To Economy Class ****";
        cout<<"\n\n\t\t\t\tThe flights are available for following destination : ";
        cout<<"\n\t\t\t\t 1. ENGLAND\n\t\t\t\t 2. USA\n\t\t\t\t 3. SOUTH AFRICA\n\t\t\t\t 4. CHINA\n\t\t\t\t 5. EGYPT\n";
        cout<<"\n\t\t\t\t-> Enter Destination no from the above list: ";
        cin>>des;
       if(des==1)
        {
        	cout<<"\n\t\t\t\tFlights Available Are :\n\t\t\t\t  1. PR-101\n\t\t\t\t  2. PR-102\n\t\t\t\t  3. PR-103\n\t\t\t\t  4. PR-104\n\t\t\t\t  5. PR-105\n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"PR-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"PR-102")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"PR-103")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"PR-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
			else if(strcmp(flight,"PR-105")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:15 p.m.\t\t\t  9:25 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
			
		}
		
		else if(des==2)
        {
        	cout<<"\n\t\t\t\tFlights Available are : \n\t\t\t\t  1. U-101\n\t\t\t\t  2. U-102\n\t\t\t\t  3. U-104\n\t\t\t\t  4. U-105 \n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"U-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"U-102")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"U-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"U-105")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
			
		}
		
		else if(des==3)
        {
        	cout<<"\n\t\t\t\tFlights Available are : \n\t\t\t\t  1. S-101\n\t\t\t\t  2. S-102\n\t\t\t\t  3. S-103\n\t\t\t\t  4. S-104 \n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"S-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"S-102")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"S-103")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"S-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
		}
		else if(des==4)
        {
        	cout<<"\n\t\t\t\tFlights Available Are :\n\t\t\t\t  1. CH-101\n\t\t\t\t  2. CH-102\n\t\t\t\t  3. CH-103\n\t\t\t\t  4. CH-104\n\t\t\t\t  5. CH-105\n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"CH-105")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"CH-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"CH-103")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"CH-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
			
		}
		
		else if(des==5)
        {
        	cout<<"\n\t\t\t\tFlights Available Are :\n\t\t\t\t  1. E-101\n\t\t\t\t  2. E-102\n\t\t\t\t  3. E-103\n\t\t\t\t  4. E-104\n\t\t\t\t  5. E-105\n\n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"E-105")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"E-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"E-103")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"E-102")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
				else if(strcmp(flight,"E-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
			
		}
		else if(Class_no==2)
    {
        cout<<"\n\n\t\t\t**** Welcome To Simple Class ****";
        cout<<"\n\n\t\t\t\tThe flights are available for following destination : ";
        cout<<"\n\t\t\t\t 1. ENGLAND\n\t\t\t\t 2. USA\n\t\t\t\t 3. SOUTH AFRICA\n\t\t\t\t 4. CHINA\n\t\t\t\t 5. EGYPT\n";
        cout<<"\n\t\t\t\t-> Enter Destination no from the above list: ";
        cin>>des;
       if(des==1)
        {
        	cout<<"\n\t\t\t\tFlights Available Are :\n\t\t\t\t  1. PR-101\n\t\t\t\t  2. PR-102\n\t\t\t\t  3. PR-103\n\t\t\t\t  4. PR-104\n\t\t\t\t  5. PR-105\n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"PR-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"PR-102")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"PR-103")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"PR-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
			else if(strcmp(flight,"PR-105")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:15 p.m.\t\t\t  9:25 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
			
		}
		
		else if(des==2)
        {
        	cout<<"\n\t\t\t\tFlights Available are : \n\t\t\t\t  1. U-101\n\t\t\t\t  2. U-102\n\t\t\t\t  3. U-104\n\t\t\t\t  4. U-105 \n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"U-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"U-102")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"U-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"U-105")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
			
		}
		
		else if(des==3)
        {
        	cout<<"\n\t\t\t\tFlights Available are : \n\t\t\t\t  1. S-101\n\t\t\t\t  2. S-102\n\t\t\t\t  3. S-103\n\t\t\t\t  4. S-104 \n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"S-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"S-102")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"S-103")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"S-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
		}
		else if(des==4)
        {
        	cout<<"\n\t\t\t\tFlights Available Are :\n\t\t\t\t  1. CH-101\n\t\t\t\t  2. CH-102\n\t\t\t\t  3. CH-103\n\t\t\t\t  4. CH-104\n\t\t\t\t  5. CH-105\n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"CH-105")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"CH-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"CH-103")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"CH-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
			
		}
		
		else if(des==5)
        {
        	cout<<"\n\t\t\t\tFlights Available Are :\n\t\t\t\t  1. E-101\n\t\t\t\t  2. E-102\n\t\t\t\t  3. E-103\n\t\t\t\t  4. E-104\n\t\t\t\t  5. E-105\n\n";
		    cout<<"\n\t\t\t->Enter flight number from the above choices for arrival and departure time ";
			cin>>flight;
			if(strcmp(flight,"E-105")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  6:00 a.m.\t\t\t  7:00 a.m.\n";
			}
			else if(strcmp(flight,"E-104")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  7:00 a.m.\t\t\t  8:00 a.m.\n";
			}
			else if(strcmp(flight,"E-103")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  10:00 p.m.\t\t\t  11:15 p.m.\n";
			}
			else if(strcmp(flight,"E-102")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
				else if(strcmp(flight,"E-101")==0)
			{
				cout<<"\n\t\t\t\t\tArrival time\t\t\tDeparture time\n\t\t\t\t\t  8:00 p.m.\t\t\t  9:15 p.m.\n";
			}
		   else
		   { 
			    cout<<"\n\t\t\t------- No such flight is available -------";
		   }	
			
		}
    }}}};


void main_menu(){
    int lchoice;
    while(1){
    cout<<"\n\n\n\t\t\t\t--------- Welcome User ---------\n\n";
	cout<<"\t\t\t****** Flight Booking Reservation System ********\n\n\n\n";
	cout<<"\t\t\t\t\tMENU : \n\n";
	cout<<"\t\t\t\t  1. Flight Schedule\n";
	cout<<"\t\t\t\t  2. Reserve Tickets\n";
	cout<<"\t\t\t\t  3. For Ticket and Charges\n";
	cout<<"\t\t\t\t  4. Exit Menu\n\n";
	cout<<"\t\t\t\t->Enter Your choice : ";

	cin>>lchoice;
     Schedule s;
     ticket t;
	 Registration r;
	  if(lchoice==1){
	      s.about_schedule();
	  }
	   else if(lchoice==2)
	      r.flight_inf();
	      
	  else if(lchoice==3)
	      cout<<"Your ticket is printed you can collect it"<<endl;
	      t.bill();
	      
	      int disp;
	      cin>>disp;
	      if(disp==1){
	          t.display();
	      }
	      
	   else if(lchoice==4)
	   {
	     cout<<"----Thank You----";
	     exit(0);
	   }
    }
	   
};
int main()
{
    Management m;
}