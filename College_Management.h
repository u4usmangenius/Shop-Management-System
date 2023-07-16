#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
#include "student.h"
#include"search_student.h"
#include"classroom.h"
#include"Admission.h"
#include"Result.h"
using namespace std;
class College_Management{
	private:
		string clg_name;
		string city;
		string contact_no;
	public:
		void open();
		void clg_details();
		void Clgmng_view();
		void Main_Menu();
		void Menu();
};
void College_Management::Main_Menu()
{
	int i=0;
	while(i>=0)
	{
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";
		cout<<"\t\t\t\t\t\tEnter 1 for Admin \n\n";
		cout<<"\t\t\t\t\t\tEnter 2 for Fresher/Student \n\n";
		cout<<"\t\t\t\t\t\tEnter 3 for College Details \n\n";
		cout<<"\t\t\t\t\t\tEnter 4 for Check\n\n";
		cout<<"\t\t\t\t\t\tAdmissions are opened or Not\n\n";
		cout<<"\t\t\t\t\t\tEnter 5 for exit\n\n";
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";

		string ch;
		cout<<"\t\t\t\tEnter:";cin>>ch;
		if(ch=="1")
		{	
			string name="Usman",password="1234",input_name,input_pas;
			cout<<"\t\t\t\tEnter Admin Name:";cin>>input_name;
			cout<<"\t\t\t\tEnter Admin Password:";cin>>input_pas;
			if(input_name==name && input_pas==password)
			{
				cout<<endl;
				cout<<"\t\t\t\t*******************************************************\n\n";
				cout<<"\t\t\t\t-------------------------------------------------------\n\n";
				cout<<"\t\t\t\t\t  You are Admin Muhammad Usman Tahir\n\n";
				cout<<"\t\t\t\t\t  So You have fully access admin\n\n";				
				cout<<"\t\t\t\t*******************************************************\n\n";
				cout<<"\t\t\t\t-------------------------------------------------------\n\n";
				search_student s1;
				s1.view();
			}
			else
			{
			cout<<"\t\t\t\t-------------------------------------------------------\n\n";
				cout<<"\t\t\t\t\tYou are not an Admin\n\n";
				cout<<"\t\t\t\t\tSo You don't have access like your admin\n\n\t\t\t\t\t**Muhammad Usman Tahir**\n\n";				
			cout<<"\t\t\t\t-------------------------------------------------------\n\n";
			};

		}
		else if(ch=="2")
		{
			Menu();
		}
		else if(ch=="3")
		{
			Clgmng_view();
		}
		else if(ch=="4")
		{
			open();
		}
		else if(ch=="5")
		{
			cout<<"\t\t\t\tExiting from Main Menu\n\n";
			break;
		}
		else 
		{
			cout<<"\t\t\t\tInvalid Choice\n\n";
		}
		string choice;
		cout<<"\t\t\t\tContinue to this Main Menu?\n\n\t\t\t\tpress 1:";cin>>choice;cout<<endl;
		if(choice=="1")
		{
			i++;
		}
		else
		{
			i=-1;
		}
	}
}
void College_Management::Menu()
{
		int i=0;
	while(i>=0)
	{
		string ch;
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";
		cout<<"\t\t\t\t\t\tEnter 1 for Check ClassRooms \n\n";
		cout<<"\t\t\t\t\t\tEnter 2 for Admissions \n\n";
		cout<<"\t\t\t\t\t\tEnter 3 for Check Result\n\n";
		cout<<"\t\t\t\t\t\tEnter 4 for Main Menu\n\n";
		cout<<"\t\t\t\t\t\tEnter 5 for Exit\n\n";
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";
		cout<<"\t\t\t\tEnter:";cin>>ch;
		if(ch=="1")
		{
			class_room c1;
			c1.class_view();
		}
		else if(ch=="2")
		{
			Admission a1;
			a1.Admission_class_view();
		}
		else if(ch=="3")
		{
			Result r1;
			r1.res_view();
		}
		else if(ch=="4")
		{
			Main_Menu();
		}
		else if(ch=="5")
		{
			cout<<"\t\t\t\tExiting from Menu\n\n";
			break;
		}
		else 
		{
			cout<<"\t\t\t\tInvalid Choice\n\n";
		}
		string choice;
		cout<<"\t\t\t\tContinue to this Menu Check Function:?\n\n\t\t\t\tpress 1:";cin>>choice;
		if(choice=="1")
		{
			i++;
		}
		else
		{
			i=-1;
		}
	}
}
void College_Management::open()
{
	string str;
	cout<<endl;
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
	cout<<"\t\t\t\t\t\tCollege is opened"<<endl<<endl;
	cout<<"\t\t\t\t\t\tAdmissions are opened"<<endl<<endl;
	cout<<"\t\t\t\t\t\tAre You New?\n\n";
	cout<<"\t\t\t\t\t\tWant to go for Admission or Details\n\n";
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
	cout<<"\t\t\t\tPress 1:";cin>>str;
	if(str=="1")
	{
			Admission a1;
			a1.Admission_class_view();
	}
	else
	{
		cout<<"\t\t\t\tInvalid Choice\n\n";
		cout<<"\t\t\t\tYou may leave,Thankyou!\n\n";
	}
}
void College_Management::clg_details()
{
	cout<<endl;
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
	cout<<"\t\t\t\t\tThe College Details are as follows\n\n";
	cout<<"\t\t\t\t\tGovt Boys Affiliate Degree Collegen\n\n";
	cout<<"\t\t\t\t\tChowk Azam\n\n";
	cout<<"\t\t\t\t\tWard no 3 Layyah road Chowk Azam \n\n\t\t\t\t\t...in front of Almustafa Sarjikal Hospital\n\n";
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";

}
void College_Management::Clgmng_view()
{
	string ch,choice;
	cout<<endl;
	int i=1;
	while(i>0)
	{
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";
		cout<<"\t\t\t\tEnter 1 for Check College Avaivability\n\n";
		cout<<"\t\t\t\tEnter 2 for Check College Details\n\n";
		cout<<"\t\t\t\tEnter 3 for exit\n\n";
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";
		cout<<"\t\t\t\tEnter Your Choice:";cin>>ch;
		if(ch=="1")
		{
			open();
		}
		else if(ch=="2")
		{
			clg_details();
		}
		else if(ch=="3")
		{
			cout<<"\t\t\t\tExiting from this College Management Details\n\n";
			break;
		}
		else
		{
			cout<<"\t\t\t\tInvalid Choice\n\n";
		}
		cout<<"\n\n\t\t\t\tDo you want to continue to use this College Management view?,press1:";cin>>choice;cout<<endl<<endl;
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
