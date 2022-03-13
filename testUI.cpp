#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <time.h>
using namespace std;

class ticket{
	public:
	char name[20];
	char cno[11];
} t;


class card :  public ticket{
public:
	char address[50];
	char emailid[20];
} v;


void pay(int);
void random();
void card();


int main(){
	system("CLS");

	int ent, a, b, N, x, cardid;
	char ans;
	do{
		cout<<"\n\t\t----------------------------------";
		cout<<"\n\t\t    Movie Ticket Booking System";
		cout<<"\n\t\t----------------------------------";
		cout<<"\n\t\t\tWelcome Customer!";
		cout<<"\n\n\t\t\t<1> Movie Timings";
		cout<<"\n\t\t\t<2> Contact Us";
		cout<<"\n\t\t\t<3> Exit \n\n";
		cout<<"\t\t\tEnter Your Choice :"<<"\t";
		cin>>ent;
	switch(ent)
	{

		case 1:
		system("CLS");
		cout<<"\n\n\t\t\tThe Shows are :";
			cout<<"\n\n\t\t\t1. Avengers: Endgame";
			cout<<"\n\n\t\t\t2. Titanic";
			cout<<"\n\n\t\t\t3. Deadpool 2";
			cout<<"\n\n\t\t\t4. No Time to Die";
			cout<<"\n\n\t\t\t5. The King's Man\n";
			cout<<"\n\t\t\tEnter Your Choice :"<<"\t";
			cin>>a;
			cout<<"\n\n\t\t\tThe Timings for the selected show are:";
			switch(a)
			{
				case 1:
					system("CLS");
				 cout<<"\n\n\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t1. 0800";
					cout<<"\n\t\t\t2. 1300";
					cout<<"\n\t\t\t3. 1450";
					cout<<"\n\t\t\t4. 1800";
					cout<<"\n\t\t\t5. 2100";
					cout<<"\n\t\t\t6. 0100 \n";
					cout<<"\n\n\t\tPlease select the timings: ";
					cin>>b;
					cout<<"\n\n\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\n\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\n\t\tEnter the number of tickets you want to purchase: ";
					int x;
					cin>>x;
					pay(x);
cout<<"\n\n\n\n\t\t\t________________________________________________________________________\n";
cout<<"\t\t\t|                                                                       |\n";
cout<<"\t\t\t|   Dear Customer,                                                      |\n";
cout<<"\t\t\t|                      Congratulation!! Your tickets has been booked.   |\n";
cout<<"\t\t\t|                                                                       |\n";
cout<<"\t\t\t|                  THE DETAILS:                                         |\n";
cout<<"\t\t\t|                            MOVIE NAME: "<<1<<"                        |\n";
cout<<"\t\t\t|                            SHOW STARTS:"<<2<<"                        |\n";
cout<<"\t\t\t|                            NUMBER OF TICKETS BOOKED: "<<x<<"          |\n";
cout<<"\t\t\t|                                                     QR CODE           |\n";
cout<<"\t\t\t|                                                       ..++>>>         |\n";
cout<<"\t\t\t|                                                       ..__***         |\n";
cout<<"\t\t\t|                                                       &%^>>>>         |\n";
cout<<"\t\t\t|                                                       :::::::         |\n";
cout<<"\t\t\t|_______________________________________________________________________|\n";
					switch(b)
						{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
						}
						cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2:
				system("CLS");
				cout<<"\n\n\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t1. 0900";
					cout<<"\n\t\t\t2. 1100";
					cout<<"\n\t\t\t3. 1250";
					cout<<"\n\t\t\t4. 1500";
					cout<<"\n\t\t\t5. 2000";
					cout<<"\n\t\t\t6. 2200";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\tYour ticket is here:";
					cout<<"\n\t\t\tName 		:"<<t.name;
					cout<<"\n\t\t\tContact No	:"<<t.cno;
					cout<<"\n\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
					cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3:
				system("CLS");
				cout<<"\n\n\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t1. 0800";
					cout<<"\n\t\t\t2. 1300";
					cout<<"\n\t\t\t3. 1450";
					cout<<"\n\t\t\t4. 1800";
					cout<<"\n\t\t\t5. 2100";
					cout<<"\n\t\t\t6. 0100";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					cout<<"\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
cout<<"\n\n\n\n\t\t\t________________________________________________________________________\n";
cout<<"\t\t\t|                                                                       |\n";
cout<<"\t\t\t|   Dear Customer,                                                      |\n";
cout<<"\t\t\t|                      Congratulation!! Your tickets has been booked.   |\n";
cout<<"\t\t\t|                                                                       |\n";
cout<<"\t\t\t|                  THE DETAILS:                                         |\n";
cout<<"\t\t\t|                            MOVIE NAME: "<<1<<"                        |\n";
cout<<"\t\t\t|                            SHOW STARTS:"<<2<<"                        |\n";
cout<<"\t\t\t|                            NUMBER OF TICKETS BOOKED: "<<x<<"          |\n";
cout<<"\t\t\t|                                                     QR CODE           |\n";
cout<<"\t\t\t|                                                       ..++>>>         |\n";
cout<<"\t\t\t|                                                       ..__***         |\n";
cout<<"\t\t\t|                                                       &%^>>>>         |\n";
cout<<"\t\t\t|                                                       :::::::         |\n";
cout<<"\t\t\t|_______________________________________________________________________|\n";
					switch(b)
					{
							case 1:	cout<<"0900";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
					cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4:
				system("CLS");
				cout<<"\n\n\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t1. 0800";
					cout<<"\n\t\t\t2. 1300";
					cout<<"\n\t\t\t3. 1450";
					cout<<"\n\t\t\t4. 1800";
					cout<<"\n\t\t\t5. 2100";
					cout<<"\n\t\t\t6. 0100";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					cout<<"\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\tYour ticket is here: ";
					cout<<"\n\t\t\tName 		:"<<t.name;
					cout<<"\n\t\t\tContact No	:"<<t.cno;
					cout<<"\n\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
						cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 5:
				system("CLS");
				cout<<"\n\n\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t1. 0800";
					cout<<"\n\t\t\t2. 1300";
					cout<<"\n\t\t\t3. 1450";
					cout<<"\n\t\t\t4. 1800";
					cout<<"\n\t\t\t5. 2100";
					cout<<"\n\t\t\t6. 0100";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					cout<<"\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
cout<<"\n\n\n\n\t\t\t________________________________________________________________________\n";
cout<<"\t\t\t|                                                                       |\n";
cout<<"\t\t\t|   Dear Customer,                                                      |\n";
cout<<"\t\t\t|                      Congratulation!! Your tickets has been booked.   |\n";
cout<<"\t\t\t|                                                                       |\n";
cout<<"\t\t\t|                  THE DETAILS:                                         |\n";
cout<<"\t\t\t|                            MOVIE NAME: "<<1<<"                        |\n";
cout<<"\t\t\t|                            SHOW STARTS:"<<2<<"                        |\n";
cout<<"\t\t\t|                            NUMBER OF TICKETS BOOKED: "<<x<<"          |\n";
cout<<"\t\t\t|                                                     QR CODE           |\n";
cout<<"\t\t\t|                                                       ..++>>>         |\n";
cout<<"\t\t\t|                                                       ..__***         |\n";
cout<<"\t\t\t|                                                       &%^>>>>         |\n";
cout<<"\t\t\t|                                                       :::::::         |\n";
cout<<"\t\t\t|_______________________________________________________________________|\n";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
					cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}break;

		case 2: system("CLS");
				cout<<"Contact us via FIST MMU";
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				system("CLS");
				break;

				if(ans=='y')
				{
					system("CLS");
					break;
				}
				else
				{
					exit(0);
				}
				break;
		case 5:
		system("CLS");
		system("PAUSE");
		exit(0);
				break;
	}
	}while(ans=='y');
	}


void pay(int a)
{
	int normal, gold, amt[2],id;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	fstream fin;
	fin.open("card.dat", ios::in|ios::app);
	fin>>id;
	cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1.Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class";
	cout<<" : ";
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<"\n\n\t\t\tYou selected for a Normal show \n\n\t\t\t\t";
		system("PAUSE");
		system("CLS");
		amt[1] = a * 15;
		char final;
	}
	else
	{
		cout<<"\n\n\t\t\tYou selected for the Gold Class \n\t\t\t\t";
			system("PAUSE");
		system("CLS");
		amt[2] = a * 20;
		char final;
	}

}
