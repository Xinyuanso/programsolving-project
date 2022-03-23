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


int main()
{

	int ent, a, b, x, p;
	string movie_name, timings, Price, payment, FnD;
	char ans, pay, o;
    start:
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
		cout<<"\n\n\t\t\tThe Shows are :";
			cout<<"\n\n\t\t\t1. Avengers: Endgame";
			cout<<"\n\n\t\t\t2. Titanic";
			cout<<"\n\n\t\t\t3. Deadpool 2";
			cout<<"\n\n\t\t\t4. No Time to Die";
			cout<<"\n\n\t\t\t5. The King's Man\n";
			cout<<"\n\t\t\tEnter Your Choice :"<<"\t";
			cin>>a;
			if (a == 1)
            {
                movie_name = "Avengers: Endgame";
            }
            if (a == 2)
            {
                movie_name = "Titanic";
            }
            if (a == 3)
            {
                movie_name = "Deadpool 2";
            }
            if (a == 4)
            {
                movie_name = "No Time to Die";
            }
            if (a == 5)
            {
                movie_name = "The King's Man";
            }
			cout<<"\n\n\t\t\tThe Timings for the selected show are:";
			switch(a)
			{
				case 1:
				 cout<<"\n\n\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t1. 0800";
					cout<<"\n\t\t\t2. 1300";
					cout<<"\n\t\t\t3. 1450";
					cout<<"\n\t\t\t4. 1800";
					cout<<"\n\t\t\t5. 2100";
					cout<<"\n\t\t\t6. 0100 \n";
					cout<<"\n\n\t\tPlease select the timings: ";
					cin>>b;
					if (b == 1)
                    {
                        timings = "0800";
                    }
                    if (b == 2)
                    {
                        timings = "1300";
                    }
                    if (b == 3)
                    {
                        timings = "1450";
                    }
                    if (b == 4)
                    {
                        timings = "1800";
                    }
                    if (b == 5)
                    {
                        timings = "2100";
                    }
                    if (b == 6)
                    {
                        timings = "0100";
                    }
					cout<<"\n\n\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\n\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\n\t\tEnter the number of tickets you want to purchase: ";
					int x;
					cin>>x;

            int payment;
            int normal, gold, tktprice;
            cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1. Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class" << endl;
            cout<<"\t\t\t\t : ";
            int c;
            cin>>c;
            if(c==1)
            {
            cout<<"\n\n\t\t\tYou selected for a Normal Class \n\n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 15;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else if (c == 2)
            {
            cout<<"\n\n\t\t\tYou selected for the Gold Class \n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 20;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else
            cout << "\t\t\tError. Please input valid option." << endl;

					cout << "\n\n\t\t\tDo you want to purchase food and drinks?(y/n)";cin >> o;
					if (o == 'y' || o == 'Y')
                    {
                        cout<<"\n\n\t\t\tThe Food and Drinks options are :";
                            cout<<"\n\n\t\t\t1. Regular Drink only";
                            cout<<"\n\n\t\t\t2. Regular Drink and Regular Caramel Popcorn";
                            cout<<"\n\n\t\t\t3. Large Drink only";
                            cout<<"\n\n\t\t\t4. Large Drink and Large Caramel Popcorn";
                            cout<<"\n\n\t\t\t5. Large Drink and Cheesy Wedges Combo\n";
                            cout<<"\n\t\t\tEnter Your Choice :"<<"\t";
                            cin>>p;
                            if (p == 1)
                            {
                                FnD = "Regular Drink only";
                            }
                            if (p == 2)
                            {
                                FnD = "Regular Drink and Regular Caramel Popcorn";
                            }
                            if (p == 3)
                            {
                                FnD = "Large Drink only";
                            }
                            if (p == 4)
                            {
                                FnD = "Large Drink and Large Caramel Popcorn";
                            }
                            if (p == 5)
                            {
                                FnD = "Large Drink and Cheesy Wedges Combo";
                            }

                             if (p == 1)
                                    {
                                        Price = "RM 7";
                                    }
                                    if (p == 2)
                                    {
                                        Price  = "RM 15";
                                    }
                                    if (p == 3)
                                    {
                                        Price = "RM 9";
                                    }
                                    if (p == 4)
                                    {
                                        Price = "RM 19";
                                    }
                                    if (p == 5)
                                    {
                                        Price = "RM 23";
                                    }
                        cout<<"\n\n\t\t\tThe price for " << FnD << " is " << Price << endl;
                        cout<<"\t\tPlease make the payment and collect the food and/or drinks at the food stall" << endl;

                    }
                    else if (o == 'n' || 'N');



cout<<"\n\n\n\n\t\t\t________________________________________________________________________________\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|   Dear Customer,                                                              |\n";
cout<<"\t\t\t|                      Congratulation!! Your tickets has been booked.           |\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|                  THE DETAILS:                                                 |\n";
cout<<"\t\t\t|                            MOVIE NAME: "<<movie_name<<"                      |\n";
cout<<"\t\t\t|                            SHOW STARTS: "<<timings<<"                                  |\n";
cout<<"\t\t\t|                            NUMBER OF TICKETS BOOKED: "<<x<<"                        |\n";
cout<<"\t\t\t|                                                     QR CODE                   |\n";
cout<<"\t\t\t|                                                       ..++>>>                 |\n";
cout<<"\t\t\t|                                                       ..__***                 |\n";
cout<<"\t\t\t|                                                       &%^>>>>                 |\n";
cout<<"\t\t\t|                                                       :::::::                 |\n";
cout<<"\t\t\t|_______________________________________________________________________________|\n";


						cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
						cin>>ans;
						if (ans == 'y' || 'Y'){
                            goto start;
						}else
						break;

				case 2:
				cout<<"\n\n\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t1. 0900";
					cout<<"\n\t\t\t2. 1100";
					cout<<"\n\t\t\t3. 1250";
					cout<<"\n\t\t\t4. 1500";
					cout<<"\n\t\t\t5. 2000";
					cout<<"\n\t\t\t6. 2200";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					if (b == 1)
                    {
                        timings = "0900";
                    }
                    if (b == 2)
                    {
                        timings = "1100";
                    }
                    if (b == 3)
                    {
                        timings = "1250";
                    }
                    if (b == 4)
                    {
                        timings = "1500";
                    }
                    if (b == 5)
                    {
                        timings = "2000";
                    }
                    if (b == 6)
                    {
                        timings = "2200";
                    }
					cout<<"\n\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;


            cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1. Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class" << endl;
            cout<<"\t\t\t\t : ";
            cin>>c;
            if(c==1)
            {
            cout<<"\n\n\t\t\tYou selected for a Normal Class \n\n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 15;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else if (c == 2)
            {
            cout<<"\n\n\t\t\tYou selected for the Gold Class \n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 20;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else
            cout << "\t\t\tError. Please input valid option." << endl;

					cout << "\n\n\t\t\tDo you want to purchase food and drinks?(y/n)";cin >> o;
					if (o == 'y' || o == 'Y')
                    {
                        cout<<"\n\n\t\t\tThe Food and Drinks options are :";
                            cout<<"\n\n\t\t\t1. Regular Drink only";
                            cout<<"\n\n\t\t\t2. Regular Drink and Regular Caramel Popcorn";
                            cout<<"\n\n\t\t\t3. Large Drink only";
                            cout<<"\n\n\t\t\t4. Large Drink and Large Caramel Popcorn";
                            cout<<"\n\n\t\t\t5. Large Drink and Cheesy Wedges Combo\n";
                            cout<<"\n\t\t\tEnter Your Choice :"<<"\t";
                            cin>>p;
                            if (p == 1)
                            {
                                FnD = "Regular Drink only";
                            }
                            if (p == 2)
                            {
                                FnD = "Regular Drink and Regular Caramel Popcorn";
                            }
                            if (p == 3)
                            {
                                FnD = "Large Drink only";
                            }
                            if (p == 4)
                            {
                                FnD = "Large Drink and Large Caramel Popcorn";
                            }
                            if (p == 5)
                            {
                                FnD = "Large Drink and Cheesy Wedges Combo";
                            }

                             if (p == 1)
                                    {
                                        Price = "RM 7";
                                    }
                                    if (p == 2)
                                    {
                                        Price  = "RM 15";
                                    }
                                    if (p == 3)
                                    {
                                        Price = "RM 9";
                                    }
                                    if (p == 4)
                                    {
                                        Price = "RM 19";
                                    }
                                    if (p == 5)
                                    {
                                        Price = "RM 23";
                                    }
                        cout<<"\n\n\t\t\tThe price for " << FnD << " is " << Price << endl;
                        cout<<"\t\tPlease make the payment and collect the food and/or drinks at the food stall" << endl;

                    }
                    else if (o == 'n' || 'N');



cout<<"\n\n\n\n\t\t\t________________________________________________________________________________\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|   Dear Customer,                                                              |\n";
cout<<"\t\t\t|                      Congratulation!! Your tickets has been booked.           |\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|                  THE DETAILS:                                                 |\n";
cout<<"\t\t\t|                            MOVIE NAME: "<<movie_name<<"                      |\n";
cout<<"\t\t\t|                            SHOW STARTS: "<<timings<<"                                  |\n";
cout<<"\t\t\t|                            NUMBER OF TICKETS BOOKED: "<<x<<"                        |\n";
cout<<"\t\t\t|                                                     QR CODE                   |\n";
cout<<"\t\t\t|                                                       ..++>>>                 |\n";
cout<<"\t\t\t|                                                       ..__***                 |\n";
cout<<"\t\t\t|                                                       &%^>>>>                 |\n";
cout<<"\t\t\t|                                                       :::::::                 |\n";
cout<<"\t\t\t|_______________________________________________________________________________|\n";


						cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
						cin>>ans;
						if (ans == 'y' || 'Y'){
                            goto start;
						}else
						break;

				case 3:
				cout<<"\n\n\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t1. 0800";
					cout<<"\n\t\t\t2. 1300";
					cout<<"\n\t\t\t3. 1450";
					cout<<"\n\t\t\t4. 1800";
					cout<<"\n\t\t\t5. 2100";
					cout<<"\n\t\t\t6. 0100";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					if (b == 1)
                    {
                        timings = "0800";
                    }
                    if (b == 2)
                    {
                        timings = "1300";
                    }
                    if (b == 3)
                    {
                        timings = "1450";
                    }
                    if (b == 4)
                    {
                        timings = "1800";
                    }
                    if (b == 5)
                    {
                        timings = "2100";
                    }
                    if (b == 6)
                    {
                        timings = "0100";
                    }
					cout<<"\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;


            cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1. Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class" << endl;
            cout<<"\t\t\t\t : ";
            cin>>c;
            if(c==1)
            {
            cout<<"\n\n\t\t\tYou selected for a Normal Class \n\n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 15;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else if (c == 2)
            {
            cout<<"\n\n\t\t\tYou selected for the Gold Class \n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 20;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else
            cout << "\t\t\tError. Please input valid option." << endl;

					cout << "\n\n\t\t\tDo you want to purchase food and drinks?(y/n)";cin >> o;
					if (o == 'y' || o == 'Y')
                    {
                        cout<<"\n\n\t\t\tThe Food and Drinks options are :";
                            cout<<"\n\n\t\t\t1. Regular Drink only";
                            cout<<"\n\n\t\t\t2. Regular Drink and Regular Caramel Popcorn";
                            cout<<"\n\n\t\t\t3. Large Drink only";
                            cout<<"\n\n\t\t\t4. Large Drink and Large Caramel Popcorn";
                            cout<<"\n\n\t\t\t5. Large Drink and Cheesy Wedges Combo\n";
                            cout<<"\n\t\t\tEnter Your Choice :"<<"\t";
                            cin>>p;
                            if (p == 1)
                            {
                                FnD = "Regular Drink only";
                            }
                            if (p == 2)
                            {
                                FnD = "Regular Drink and Regular Caramel Popcorn";
                            }
                            if (p == 3)
                            {
                                FnD = "Large Drink only";
                            }
                            if (p == 4)
                            {
                                FnD = "Large Drink and Large Caramel Popcorn";
                            }
                            if (p == 5)
                            {
                                FnD = "Large Drink and Cheesy Wedges Combo";
                            }

                             if (p == 1)
                                    {
                                        Price = "RM 7";
                                    }
                                    if (p == 2)
                                    {
                                        Price  = "RM 15";
                                    }
                                    if (p == 3)
                                    {
                                        Price = "RM 9";
                                    }
                                    if (p == 4)
                                    {
                                        Price = "RM 19";
                                    }
                                    if (p == 5)
                                    {
                                        Price = "RM 23";
                                    }
                        cout<<"\n\n\t\t\tThe price for " << FnD << " is " << Price << endl;
                        cout<<"\t\tPlease make the payment and collect the food and/or drinks at the food stall" << endl;

                    }
                    else if (o == 'n' || 'N');



cout<<"\n\n\n\n\t\t\t________________________________________________________________________________\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|   Dear Customer,                                                              |\n";
cout<<"\t\t\t|                      Congratulation!! Your tickets has been booked.           |\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|                  THE DETAILS:                                                 |\n";
cout<<"\t\t\t|                            MOVIE NAME: "<<movie_name<<"                      |\n";
cout<<"\t\t\t|                            SHOW STARTS: "<<timings<<"                                  |\n";
cout<<"\t\t\t|                            NUMBER OF TICKETS BOOKED: "<<x<<"                        |\n";
cout<<"\t\t\t|                                                     QR CODE                   |\n";
cout<<"\t\t\t|                                                       ..++>>>                 |\n";
cout<<"\t\t\t|                                                       ..__***                 |\n";
cout<<"\t\t\t|                                                       &%^>>>>                 |\n";
cout<<"\t\t\t|                                                       :::::::                 |\n";
cout<<"\t\t\t|_______________________________________________________________________________|\n";


						cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
						cin>>ans;
						if (ans == 'y' || 'Y'){
                            goto start;
						}else
						break;

				case 4:
				cout<<"\n\n\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t1. 0800";
					cout<<"\n\t\t\t2. 1300";
					cout<<"\n\t\t\t3. 1450";
					cout<<"\n\t\t\t4. 1800";
					cout<<"\n\t\t\t5. 2100";
					cout<<"\n\t\t\t6. 0100";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					if (b == 1)
                    {
                        timings = "0800";
                    }
                    if (b == 2)
                    {
                        timings = "1300";
                    }
                    if (b == 3)
                    {
                        timings = "1450";
                    }
                    if (b == 4)
                    {
                        timings = "1800";
                    }
                    if (b == 5)
                    {
                        timings = "2100";
                    }
                    if (b == 6)
                    {
                        timings = "0100";
                    }
					cout<<"\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;


            cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1. Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class" << endl;
            cout<<"\t\t\t\t : ";
            cin>>c;
            if(c==1)
            {
            cout<<"\n\n\t\t\tYou selected for a Normal Class \n\n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 15;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else if (c == 2)
            {
            cout<<"\n\n\t\t\tYou selected for the Gold Class \n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 20;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else
            cout << "\t\t\tError. Please input valid option." << endl;

					cout << "\n\n\t\t\tDo you want to purchase food and drinks?(y/n)";cin >> o;
					if (o == 'y' || o == 'Y')
                    {
                        cout<<"\n\n\t\t\tThe Food and Drinks options are :";
                            cout<<"\n\n\t\t\t1. Regular Drink only";
                            cout<<"\n\n\t\t\t2. Regular Drink and Regular Caramel Popcorn";
                            cout<<"\n\n\t\t\t3. Large Drink only";
                            cout<<"\n\n\t\t\t4. Large Drink and Large Caramel Popcorn";
                            cout<<"\n\n\t\t\t5. Large Drink and Cheesy Wedges Combo\n";
                            cout<<"\n\t\t\tEnter Your Choice :"<<"\t";
                            cin>>p;
                            if (p == 1)
                            {
                                FnD = "Regular Drink only";
                            }
                            if (p == 2)
                            {
                                FnD = "Regular Drink and Regular Caramel Popcorn";
                            }
                            if (p == 3)
                            {
                                FnD = "Large Drink only";
                            }
                            if (p == 4)
                            {
                                FnD = "Large Drink and Large Caramel Popcorn";
                            }
                            if (p == 5)
                            {
                                FnD = "Large Drink and Cheesy Wedges Combo";
                            }

                             if (p == 1)
                                    {
                                        Price = "RM 7";
                                    }
                                    if (p == 2)
                                    {
                                        Price  = "RM 15";
                                    }
                                    if (p == 3)
                                    {
                                        Price = "RM 9";
                                    }
                                    if (p == 4)
                                    {
                                        Price = "RM 19";
                                    }
                                    if (p == 5)
                                    {
                                        Price = "RM 23";
                                    }
                        cout<<"\n\n\t\t\tThe price for " << FnD << " is " << Price << endl;
                        cout<<"\t\tPlease make the payment and collect the food and/or drinks at the food stall" << endl;

                    }
                    else if (o == 'n' || 'N');



cout<<"\n\n\n\n\t\t\t________________________________________________________________________________\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|   Dear Customer,                                                              |\n";
cout<<"\t\t\t|                      Congratulation!! Your tickets has been booked.           |\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|                  THE DETAILS:                                                 |\n";
cout<<"\t\t\t|                            MOVIE NAME: "<<movie_name<<"                      |\n";
cout<<"\t\t\t|                            SHOW STARTS: "<<timings<<"                                  |\n";
cout<<"\t\t\t|                            NUMBER OF TICKETS BOOKED: "<<x<<"                        |\n";
cout<<"\t\t\t|                                                     QR CODE                   |\n";
cout<<"\t\t\t|                                                       ..++>>>                 |\n";
cout<<"\t\t\t|                                                       ..__***                 |\n";
cout<<"\t\t\t|                                                       &%^>>>>                 |\n";
cout<<"\t\t\t|                                                       :::::::                 |\n";
cout<<"\t\t\t|_______________________________________________________________________________|\n";


						cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
						cin>>ans;
						if (ans == 'y' || 'Y'){
                            goto start;
						}else
						break;

				case 5:
				cout<<"\n\n\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t1. 0800";
					cout<<"\n\t\t\t2. 1300";
					cout<<"\n\t\t\t3. 1450";
					cout<<"\n\t\t\t4. 1800";
					cout<<"\n\t\t\t5. 2100";
					cout<<"\n\t\t\t6. 0100";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					if (b == 1)
                    {
                        timings = "0800";
                    }
                    if (b == 2)
                    {
                        timings = "1300";
                    }
                    if (b == 3)
                    {
                        timings = "1450";
                    }
                    if (b == 4)
                    {
                        timings = "1800";
                    }
                    if (b == 5)
                    {
                        timings = "2100";
                    }
                    if (b == 6)
                    {
                        timings = "0100";
                    }
					cout<<"\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;


            cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1. Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class" << endl;
            cout<<"\t\t\t\t : ";
            cin>>c;
            if(c==1)
            {
            cout<<"\n\n\t\t\tYou selected for a Normal Class \n\n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 15;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else if (c == 2)
            {
            cout<<"\n\n\t\t\tYou selected for the Gold Class \n\t\t\t\t";
            system("PAUSE");
            tktprice = x * 20;
            cout << "\t\t\tThe total price is RM " << tktprice;
            char final;
            }
            else
            cout << "\t\t\tError. Please input valid option." << endl;

					cout << "\n\n\t\t\tDo you want to purchase food and drinks?(y/n)";cin >> o;
					if (o == 'y' || o == 'Y')
                    {
                        cout<<"\n\n\t\t\tThe Food and Drinks options are :";
                            cout<<"\n\n\t\t\t1. Regular Drink only";
                            cout<<"\n\n\t\t\t2. Regular Drink and Regular Caramel Popcorn";
                            cout<<"\n\n\t\t\t3. Large Drink only";
                            cout<<"\n\n\t\t\t4. Large Drink and Large Caramel Popcorn";
                            cout<<"\n\n\t\t\t5. Large Drink and Cheesy Wedges Combo\n";
                            cout<<"\n\t\t\tEnter Your Choice :"<<"\t";
                            cin>>p;
                            if (p == 1)
                            {
                                FnD = "Regular Drink only";
                            }
                            if (p == 2)
                            {
                                FnD = "Regular Drink and Regular Caramel Popcorn";
                            }
                            if (p == 3)
                            {
                                FnD = "Large Drink only";
                            }
                            if (p == 4)
                            {
                                FnD = "Large Drink and Large Caramel Popcorn";
                            }
                            if (p == 5)
                            {
                                FnD = "Large Drink and Cheesy Wedges Combo";
                            }

                             if (p == 1)
                                    {
                                        Price = "RM 7";
                                    }
                                    if (p == 2)
                                    {
                                        Price  = "RM 15";
                                    }
                                    if (p == 3)
                                    {
                                        Price = "RM 9";
                                    }
                                    if (p == 4)
                                    {
                                        Price = "RM 19";
                                    }
                                    if (p == 5)
                                    {
                                        Price = "RM 23";
                                    }
                        cout<<"\n\n\t\t\tThe price for " << FnD << " is " << Price << endl;
                        cout<<"\t\tPlease make the payment and collect the food and/or drinks at the food stall" << endl;

                    }
                    else if (o == 'n' || 'N');



cout<<"\n\n\n\n\t\t\t________________________________________________________________________________\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|   Dear Customer,                                                              |\n";
cout<<"\t\t\t|                      Congratulation!! Your tickets has been booked.           |\n";
cout<<"\t\t\t|                                                                               |\n";
cout<<"\t\t\t|                  THE DETAILS:                                                 |\n";
cout<<"\t\t\t|                            MOVIE NAME: "<<movie_name<<"                      |\n";
cout<<"\t\t\t|                            SHOW STARTS: "<<timings<<"                                  |\n";
cout<<"\t\t\t|                            NUMBER OF TICKETS BOOKED: "<<x<<"                        |\n";
cout<<"\t\t\t|                                                     QR CODE                   |\n";
cout<<"\t\t\t|                                                       ..++>>>                 |\n";
cout<<"\t\t\t|                                                       ..__***                 |\n";
cout<<"\t\t\t|                                                       &%^>>>>                 |\n";
cout<<"\t\t\t|                                                       :::::::                 |\n";
cout<<"\t\t\t|_______________________________________________________________________________|\n";


						cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
						cin>>ans;
						if (ans == 'y' || 'Y'){
                            goto start;
						}else
						break;
			}break;

		case 2:
				cout<<"\t\t\tContact us via FIST MMU";
				cout<<"\n\t\t\tDo you want to choose another option(y/n)";
				cin>>ans;
				break;

				if (ans == 'y' || 'Y')
                {goto start;
                }else
                break;
				break;
		case 3:
		system("PAUSE");
		exit(0);
				break;
    }

    }
