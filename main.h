#include<iostream>
#include <iomanip>
#include<conio.h>
#include<fstream>
#include "admin.h"
#include "customer.h"
using namespace std;
class maiin{
	public:
		void mainmenu();
};
void maiin::mainmenu()
{
	admins *admn;
	admn->adding_to_linklist_from_file();
	//ooper wali line hamesha ooper pr hi rakhni ha
//	customer c1;
//	c1.purchases();
	
	customer cstmer;
	int i=1;
	string ch,choice;
	while(i>0)
	{
	cout<<"\t\t\t\t**************************************************\n"<<endl;
	cout<<"\t\t\t\t||            Shopping Club System                ||\n"<<endl;
	cout<<"\t\t\t\t**************************************************\n"<<endl;
    cout<<"\n\t\t\t\t\t|--------<Main Menu>-----------|";
     cout<<"\n\n";
	cout<<"\t\t\t\t 1)Administator of Market\n\n";
	cout<<"\t\t\t\t 2)Customer\n\n";
	cout<<"\t\t\t\t 3)Exit\n\n";
	cout<<"\n\t\t\t\tEnter Your choice:";
	cin>>ch;
	// neechy wala function mny is lye call kia ha kyunky jo data mera file me store kr rakha ha wo khud hi liklist 
	// me aa jaye
		if(ch=="1")
		{
			admn->admin();
			string ch;
			
		}
		else if(ch=="2")
		{
			cstmer.customer_purchase();
		}
//		else if((ch>="a" && ch<="z")||(ch>="A" && ch<="Z") || (ch<="0" || ch>"3"))
		else if(ch=="3")
		{
			break;
		}
		else
		{
			if(ch!="3")
			{
				cout<<"\t\t\t\tInvalid Choice\n"<<endl;
				cout<<"\t\t\t\tPlease enter your choice again\n"<<endl;
				continue;		
			}
		}
		cout<<"\t\t\t\tDo you want to continue to mainmenu,press y/Y:";
		cin>>choice;
		if(choice=="y" || choice=="Y")
		{
			i++;
		}	
		else
		{
			i=0;
		}
	}
}
