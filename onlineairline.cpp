#include<iostream>
#include<windows.h>
#include<string.h>
using namespace std;
void setConsoleColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
class international
{ 
 public:
 virtual void show1()
 	{
 		setConsoleColor(3);
	        cout<<"            ======================================================================================================"<<endl;
			cout<<"           ||                                         NATIONAL AIRLINE SCHEDULE                                   ||"<<endl;
			cout<<"            ======================================================================================================"<<endl;
			cout<<"           || SR NO.||  TIME  || DELAY || DESTINATION || FLIGHT  || FLIGHT NO. || CHECK IN || GATE   ||  STATUS   ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  1.   ||  10PM  ||       ||     SURAT   || INDIGO  ||   ST920    ||    9PM   || 'AU2'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  2.   ||  12AM  ||       ||     BHOPAL  ||AIR INDIA||   ST560    ||    11AM  || 'AU8'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  3.   ||  1AM   || 3AM   ||     MUMBAI  || SPICEJET||   ST340    ||    12AM  || 'AU5'  ||           ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  5.   ||  11PM  ||       ||     JAIPUR  || VISTRA  ||   ST890    ||    10PM  || 'AU3'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  6.   ||  8PM   || 9PM   ||     AMBALA  || GOFIRST ||   ST790    ||    7PM   || 'AU9'  ||           ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  7.   ||  3AM   ||       ||     RAJKOT  || SPICEJET||   ST340    ||    2AM   || 'AU4'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  8.   || 5:30PM ||       ||     INDORE  || INDIGO  ||   ST920    || 4:30PM   || 'AU1'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  9.   || 9:50PM ||       ||     LAHORE  || GOFIRST ||   ST790    ||    8PM   || 'AU8'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  10.  ||  10AM  ||       ||     MADRAS  ||AIR INDIA||   ST560    ||    9AM   || 'AU2'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<endl;
	     }
	     };
	     
	     class schedule
	     {
            public:
            	void show1()
            	{
            		setConsoleColor(12);
            cout<<"            ======================================================================================================"<<endl;		
            cout<<"           ||                                   INTERNATIONAL AIRLINE SCHEDULE                                     ||"<<endl;		
		    cout<<"            ======================================================================================================="<<endl;
			cout<<"           || SR NO.||  TIME  || DELAY || DESTINATION || FLIGHT   || FLIGHT NO. || CHECK IN || GATE   ||  STATUS   ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  1.   ||  11AM  ||       ||    PRAGUE   || INDIGO   ||   AA002    ||    10AM  || 'AK9'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  2.   ||  12AM  ||       ||    MOSCOW   ||  AKASA   ||   AA875    ||    11AM  || 'AK4'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  3.   ||  1AM   || 2AM   ||    LISBON   || SPICEJET ||   AA356    ||    12AM  || 'AK7'  ||           ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  5.   ||  2AM   ||       ||    WARSAW   || VISTRA   ||   AA789    ||    1AM   || 'AK1'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  6.   ||  3AM   ||       ||    VIENNA   || GOFIRST  ||   AA589    ||    2AM   || 'AK2'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  7.   ||  4AM   ||       ||    ATHENS   ||AIXCONNECT||   AA673    ||    3AM   || 'AK8'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  8.   ||  5AM   ||       ||    BERLIN   || LUFTHANSA||   AA920    ||  4:30AM  || 'AK3'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  9.   ||  6AM   ||       ||    SYDNEY   || GOFIRST  ||   AA790    ||    5AM   || 'AK5'  ||  ON TIME  ||"<<endl;
			cout<<"            ======================================================================================================="<<endl;
			cout<<"           ||  10.  ||  7AM   ||       ||    ZURICH   || AEROFLOT ||   AA560    ||    6AM   || 'AK9'  ||  ON TIME  ||"<<endl;
			cout<<"            ========================================================================================================"<<endl;
			cout<<endl;
			setConsoleColor(14);
		}
};
class nationalticket
{ public:  
  char name[20];
  string date,gender;
    char fname[20];
    char sname[20];
    char adhar[12];
	int flightno,age;
    char desti[20];
    char from[20];
    int carr,price;
    	void ninfo()
    	{
	cout<<"           ENTER FOLLOWING INFORMATION FOR 'NATIONAL' AIR LINE BOOKING:"<<endl;
	cout<<"           1:NAME- ";
	cin>>name;
	cout<<"           2.MIDDLE NAME-";
	cin>>fname;
	cout<<"           3.SURNAME-";
	cin>>sname;
	cout<<"           4.GENDER[F/M/OTHER]-";
	cin>>gender;
	cout<<"           5.AADHAR NO-";
	cin>>adhar;
	cout<<"           6.AGE-";
	cin>>age;
	cout<<"           7.FROM-";
	cin>>from;
	cout<<"           8.TO-";
	cin>>desti;
	cout<<"           9.ON- ";
	cin>>date;
	cout<<"           10.CLASS [1.FIRST CLASS 2.BUSINESS CLASS  3.ECONOMY CLASS]"<<endl;
	cout<<"               (enter no for the class type)"<<endl;
	cin>>   carr;
	switch(carr)
	{
   case 1: 
  this->price=8000;
    
    	setConsoleColor(10);cout<<"           ____________________________________________________________________________________"<<endl;
	cout<<"           |/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/|"<<endl;
	cout<<"           |                                                                                   |"<<endl;
	setConsoleColor(14);	cout<<"           |NAME:"<<name<<" "<<fname<<" "<<sname<<"                                   	                    |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |GENDER[F/M/OTHER]:"<<gender<<"                                                                      |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |CARRIER:FIRST CLASS                                                                |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |LUGGAGE:Y[maximum 30kg per person]                                                 |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |FROM:"<<from<<"                                                                        |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |TO:"<<desti<<"                                                                          |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |DATE:"<<date<<"                                                                      |"<<endl;
    cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |PRICE:"<<price<<"                                                                         |"<<endl;
    	setConsoleColor(10);cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/|"<<endl;
     cout<<endl;
    	setConsoleColor(14);cout<<"           SAFE TRAVELS"<<endl;
    break;
    	case 2:		
this-> price=12000;
    setConsoleColor(10);cout<<"            ___________________________________________________________________________________"<<endl;
	cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;
	cout<<"           |                                                                                   |"<<endl;
	setConsoleColor(14);cout<<"           | NAME-"<<name<<" "<<fname<<" "<<sname<<"                                                         |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           | GENDER[F/M/OTHER]-"<<gender<<"                                                                     |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;    
	cout<<"           |Class-BUSINESS CLASS                                                               |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |LUGGAGE-Y[maximum 30kg per person]                                                 |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |FROM-"<<from<<"                                                                        |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |TO:"<<desti<<"                                                                          |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |DATE-"<<date<<"                                                                      |"<<endl;
    cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |PRICE-"<<price<<"                                                                        |"<<endl;
    setConsoleColor(10);cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;
    cout<<endl;
    setConsoleColor(14);cout<<"SAFE TRAVELS"<<endl;
    break;
    case 3:
 this->price=5000;
    setConsoleColor(1);cout<<"           _____________________________________________________________________________________"<<endl;
    cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;
    cout<<"           |                                                                                   |"<<endl;
	setConsoleColor(5);cout<<"           | NAME-"<<name<<" "<<fname<<" "<<sname<<"                                                         |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           | GENDER[F/M/OTHER]-"<<gender<<"                                                                     |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |CARRIER-ECONOMY CLASS                                                              |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |LUGGAGE-Y[maximum 30kg per person]                                                 |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |FROM-"<<from<<"                                                                        |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |TO-"<<desti<<"                                                                          |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |DATE-"<<date<<"                                                                      |"<<endl;
    cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |PRICE-"<<price<<"                                                                         |"<<endl;
    setConsoleColor(1);cout<<"           |___________________________________________________________________________________|"<<endl; 
    cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;
     cout<<endl;
    setConsoleColor(5);cout<<"           SAFE TRAVELS"<<endl;
    break;
}
}
};
class internationaltic
{  public:  
char name[20];
    char fname[20];
    char sname[20];
    char adhar[12];
    string gender,date,visano,passport;
	int age,carr,price;
    char desti[20];
    char from[20];
    	void interinfo()
    	{
	cout<<"           ENTER FOLLOWING INFORMATION FOR 'INTERNATIONAL' AIR LINE BOOKING:"<<endl;
	cout<<"           1.NAME- ";
	cin>>name;
	cout<<"           2.MIDDLE NAME- ";
	cin>>fname;
	cout<<"           3.SURNAME- ";
	cin>>sname;
	cout<<"           4.GENDER [F/M/OTHER]-";
	cin>>gender;
	cout<<"           5.AADHAR NO-";
	cin>>adhar;
	cout<<"           6.AGE-";
	cin>>age;
	cout<<"           7.VISA*-";
	cin>>visano;
	cout<<"           8.PAASPORT*-";
	cin>>passport;
	cout<<"           9.FROM CITY-";
	cin>>from;
	cout<<"           10.TO CITY-";
	cin>>desti;
	cout<<"           11.ON-";
	cin>>date;
	cout<<"           12.CARRIER[1.FIRST 2.BUSINESS 3.ECONOMIC]"<<endl;
	cout<<"                 ENTER NUMBER FOR GIVEN CLASS:"<<endl;
	cin>>carr;
switch(carr)
{   
case 1:
	this->price=12000;
	setConsoleColor(10);cout<<"           _____________________________________________________________________________________"<<endl;
    cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;
	cout<<"           |                                                                                  |"<<endl;
	cout<<"           |NAME-"<<name<<" "<<fname<<" "<<sname<<"                                            |"<<endl;
	cout<<"           |__________________________________________________________________________________|"<<endl;
	cout<<"           |GENDER [F/M/OTHER]-"<<gender<<"                                                         |"<<endl;
	cout<<"           |__________________________________________________________________________________|"<<endl;
	cout<<"           |CLASS- FIRST CLASS                                                                 |"<<endl;
	cout<<"           |__________________________________________________________________________________|"<<endl;
	cout<<"           |LUGGAGE- Y[maximum 30kg per person]              							      |"<<endl;
	cout<<"           |__________________________________________________________________________________|"<<endl;
	cout<<"           |FROM- "<<from<<"                                								      |"<<endl;
	cout<<"           |__________________________________________________________________________________|"<<endl;
    cout<<"           |TO- "<<desti<<"                                 								      |"<<endl;
	cout<<"           |__________________________________________________________________________________|"<<endl;
    cout<<"           |DATE- "<<date<<"                                    								  |"<<endl;
    cout<<"           |__________________________________________________________________________________|"<<endl;
    cout<<"           |PRICE- "<<price<<"                                  								  |"<<endl;
    cout<<"           |__________________________________________________________________________________|"<<endl;
	cout<<"           |VISA*- "<<visano<<"                                  								  |"<<endl;
    cout<<"           |__________________________________________________________________________________|"<<endl;
	cout<<"           |PASSPORT*- "<<passport<<"                                  								  |"<<endl;
    setConsoleColor(10);cout<<"           |___________________________________________________________________________________|"<<endl; 
    cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;                             
	cout<<endl;
	setConsoleColor(14);cout<<"           SAFE TRAVELS"<<endl;
	break;                         
	case 2:
	this->price=10000;
	setConsoleColor(10);cout<<"           _____________________________________________________________________________________"<<endl;
    cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;
    cout<<"           |                                                                                   |"<<endl;
	cout<<"           |NAME-"<<name<<" "<<fname<<" "<<sname<<"                                            |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |GENDER [F/M/OTHER]-"<<gender<<"                                                          |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |CARRIER- BUSINESS CLASS                                                             |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |LUGGAGE- Y[maximum 30kg per person]                                                 |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |FROM- "<<from<<"                                                                    |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |TO- "<<desti<<"                                                                     |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |DATE- "<<date<<"                                                                    |"<<endl;
    cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |PRICE- "<<price<<"                                                                  |"<<endl;
    cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |VISA*- "<<visano<<"                                                               |"<<endl;
    cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |PASSPORT*- "<<passport<<"                                                         |"<<endl;
    setConsoleColor(10);cout<<"           |___________________________________________________________________________________|"<<endl; 
    cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;  
	 cout<<endl;
    setConsoleColor(14);cout<<"SAFE TRAVELS"<<endl;
	break;                      
	case 3:
	this->price=5000;
	setConsoleColor(10);cout<<"           _____________________________________________________________________________________"<<endl;
    cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;
	cout<<"           |                                                                                   |"<<endl;
	cout<<"           |NAME- "<<name<<" "<<fname<<" "<<sname<<"           								   |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |GENDER [F/M/OTHER]-"<<gender<<"                                                          |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |CARRIER- ECONOMIC CLASS                                                             |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |LUGGAGE- Y[maximum 30kg per person]                                                 |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |FROM- "<<from<<"                                                                    |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |TO- "<<desti<<"                                                                     |"<<endl;
	cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |DATE- "<<date<<"                                                                    |"<<endl;
    cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |PRICE- "<<price<<"                                                                  |"<<endl;
    cout<<"           |___________________________________________________________________________________|"<<endl;
    cout<<"           |VISA*- "<<visano<<"                                                               |"<<endl;
    cout<<"           |___________________________________________________________________________________|"<<endl;
	cout<<"           |PASSPORT*- "<<passport<<"                                                         |"<<endl;
    setConsoleColor(10);cout<<"           |___________________________________________________________________________________|"<<endl; 
    cout<<"           |_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_|"<<endl;   
	 cout<<endl;
    setConsoleColor(14);cout<<"                  SAFE TRAVELS"<<endl;
	break;                   
	}
}
};
int main()
{ //by using virtual functions
 international in;
 schedule sc,*sptr;
 international *bptr;
 bptr=&in;
 bptr->show1();
sptr=&sc;
sptr->show1();
nationalticket tic,*ptr;
ptr=&tic;
internationaltic n,*nptr;
nptr=&n;
cout<<"           WELCOME! TO INDIA AIRLINES"<<endl;
cout<<"           ABOVE IS SCHEDULE FOR NATIONAL & INTERNATIONAL AIRLINES"<<endl;
cout<<"           FOR BOOKING TICKET PRESS NATIONAL= 'N' AND INTERNATIONAL= 'I' "<<endl;
char opt;
int num;
int num1;
cin>>opt;
switch(opt)
{  
 case 'N':
	{ cout<<"           NATIONAL FLIGHTS"<<endl;
	cout<<"           AVAILABLE FLIGHTS TODAY:"<<endl;
	cout<<"           1.INDIGO   2.AIRINDIA   3.SPICEJET  4.VISTRA   5.GOFIRST" <<endl;
	cin>>num;
	switch(num)
	{
		case 1:
			{
				cout<<"           FLIGHT NUMBER=14920"<<endl;
				ptr->ninfo();
				ptr++;
				break;
			}
			case 2:
			{
				cout<<"           FLIGHT NUMBER=11560"<<endl;
				ptr->ninfo();
				ptr++;
				break;
			}
			case 3:
			{
				cout<<"           FLIGHT NUMBER=67340"<<endl;
				ptr->ninfo();
				ptr++;
				break;
			}
			case 4:
			{
				cout<<"           FLIGHT NUMBER=12890"<<endl;
				ptr->ninfo();
				ptr++;
				break;
			}
			case 5:
			{
				cout<<"           FLIGHT NUMBER=16790"<<endl;
				ptr->ninfo();
				ptr++;
				break;
			}
			default:
				{
					cout<<"           invalid choice"<<endl;
				}
	}
	break;
}
	case 'I':
		cout<<"           INTERNATIONAL FLIGHTS"<<endl;
		cout<<"           AVAILABLE FLIGHTS TODAY:"<<endl;
		cout<<"           1.INDIGO   2.AKASA   3.SPICEJET   4.VISTRA   5.GOFIRST   6.AIXCONNECT  7.LUFTHANSA  8.AEROFLOT"<<endl;
		cin>>num1;
		switch(num1)
		{
				case 1:
			{
				cout<<"           FLIGHT NUMBER=10002"<<endl;
				nptr->interinfo();
				nptr++;
				break;
			}
			case 2:
			{
				cout<<"           FLIGHT NUMBER=11875"<<endl;
				nptr->interinfo();
				nptr++;
				break;
			}
			case 3:
			{
				cout<<"           FLIGHT NUMBER=12356"<<endl;
				nptr->interinfo();
				nptr++;
				break;
			}
			case 4:
			{
				cout<<"           FLIGHT NUMBER=16789"<<endl;
				nptr->interinfo();
				nptr++;
				break;
			}
			case 5:
			{
				cout<<"           FLIGHT NUMBER=14589"<<endl;
				nptr->interinfo();
				nptr++;
				break;
			}
			case 6:
			{
				cout<<"           FLIGHT NUMBER=25673"<<endl;
				nptr->interinfo();
				nptr++;
				break;
			}
			case 7:
			{
				cout<<"           FLIGHT NUMBER=14923"<<endl;
				nptr->interinfo();
				nptr++;
				break;
			}
			case 8:
			{
				cout<<"           FLIGHT NUMBER=11560"<<endl;
				nptr->interinfo();
				nptr++;
				break;
			}
	}
	
 return 0;

}}

