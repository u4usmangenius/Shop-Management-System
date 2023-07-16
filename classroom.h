#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
class class_room{
	public:
		void classroom_details();
		void isoccupied();
		void class_view();
};
void class_room::classroom_details()
{
	cout<<endl;
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
	cout<<"\t\t\t\t\tThere are 50 rooms 5 for each department\n\n";
	cout<<"\t\t\t\t\tID-101,ID-102...ID-105 for Computer Science Department Block\n";
	cout<<"\t\t\t\t\tID-201,ID-202...ID-205 for Botany Department Block\n";
	cout<<"\t\t\t\t\tID-301,ID-302...ID-305 for Zoology Department Block\n";
	cout<<"\t\t\t\t\tID-401,ID-402...ID-405 for Physics Department Block\n";
	cout<<"\t\t\t\t\tID-501,ID-502...ID-505 for English Department Block\n";
	cout<<"\t\t\t\t\tID-601,ID-602...ID-605 for Urdu Department Block\n";
	cout<<"\t\t\t\t\tID-701,ID-702...ID-705 for Political Science Department Block\n";
	cout<<"\t\t\t\t\tID-801,ID-802...ID-805 for Chemistry Department Block\n";
	cout<<"\t\t\t\t\tID-901,ID-902...ID-905 for Islamiyat Science Department Block\n";
	cout<<"\t\t\t\t\tID-1001,ID-102...ID-1005 for Biotechnology Department Block\n\n";
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
}
void class_room::isoccupied()
{
	cout<<endl;
	
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t\t-------------------------------------------------------\n\n";
	cout<<"\t\t\t\t\tThere are 5 rooms occupied by \n\n\t\t\t\t\t4 badges 2020,2021,2022,2023\n\n";
	cout<<"\t\t\t\t\tAnd 1 is available for freshers\n\n";
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
}
void class_room::class_view()
{
	int i=1;
	while(i>0)
	{
		string choice,ch;
		cout<<endl;
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";
		cout<<"\t\t\t\t\tEnter 1 for Check Class Room Details\n\n";
		cout<<"\t\t\t\t\tEnter 2 for Check IsOccupied ?\n\n";
		cout<<"\t\t\t\t\tEnter 3 for exit ?\n\n";
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";
		cout<<"\t\t\t\tEnter Your Choice:";cin>>ch;
		if(ch=="1")
		{
			classroom_details();
		}
		else if(ch=="2")
		{
			isoccupied();
		}
		else if(ch=="3")
		{
			cout<<"\t\t\t\tExiting from this ClassRoom Function\n\n";
			break;
		}
		else
		{
			cout<<"\t\t\t\tInvalid Choice\n\n";
		}
		cout<<"\n\n\t\t\t\tDo you want to continue to use this Clgmng view?,\n\n\t\t\t\tpress1:";cin>>choice;cout<<endl<<endl;
		if(choice=="1")
		{
			i++;
		}
		else
		{
			i=0;
		}
	}
}
