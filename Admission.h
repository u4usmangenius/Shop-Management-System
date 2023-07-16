#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
class Admission:public student{
	char std_id[100],std_fname[100],std_lname[100],std_gender[100],std_adrs[100],std_mbl_no_1[100];
	char gardian_id[100],gardian_mbl_no[100],std_department[100];
	public:
//		Admission();
//		void new_std_payfees();

		void SendData_to_File(string);
		void new_std_enroll();
		void Admission_class_view();
		void Admission_form_details();
		void new_std_fees(string);
		
};
void Admission::SendData_to_File(string depart)
{
	if(depart=="Biotechnology")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Biotechnology\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	else if(depart=="Computer-Science")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Computer-Science\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	else if(depart=="Botany")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Botany\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	else if(depart=="Chemistry")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Chemistry\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	else if(depart=="English")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\English\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	else if(depart=="Islamiyat")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Islamiyat\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	else if(depart=="Physics")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Physics\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	else if(depart=="Political-Science")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Political-Science\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	else if(depart=="Urdu")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Urdu\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	else if(depart=="Zoology")
	{
		ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Zoology\\new record.txt",ios::app);		
		file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1;
		file<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;
	}
	cout<<"\t\t\t\tYou have successfully enrolled\n\n";
	cout<<"\t\t\t\tThankyou! for taking admission\n\n";
}
void Admission::Admission_class_view()
{
	int i=1;
	student s1;string choice,ch;
	while(i>0)
	{
		cout<<"\t\t\t\tEnter 1 for check existing students\n\n";
		cout<<"\t\t\t\tEnter 2 for Enroll in College\n\n";
		cout<<"\t\t\t\tEnter 3 for Check Admission Form Details\n\n";
		cout<<"\t\t\t\tEnter 4 for Exit\n\n";
		cout<<"\t\t\t\tEnter your choice";cin>>choice;
		if(choice=="1")
		{
			s1.std_details();
		}
		else if(choice=="2")
		{
			new_std_enroll();
		}
		else if(choice=="3")
		{
			Admission_form_details();
		}
		else if(choice=="4")
		{
			cout<<"\t\t\t\tExiting from this Admission Function\n\n";
			break;
		}
		else
		{
			cout<<"\t\t\t\tInvalid Choice\n\n";
		}
		cout<<"\n\n\t\t\t\tDo you want to continue to use this Clgmng view?,press1:";cin>>ch;cout<<endl<<endl;
		if(ch=="1")
		{
			i++;
		}
		else
		{
			i=0;
		}
	}
}
void Admission::new_std_enroll()
{
	string fees;
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
	cout<<"Note: Blank Spaces are not allowd"<<endl;
	cout<<"Enter your id:";
	cin.ignore();
	cin.getline(std_id,100);
	cout<<"Enter your first name:";
	cin.getline(std_fname,100);
	cout<<"Enter your last name:";
	cin.getline(std_lname,100);
	cout<<"Enter your gender:";
	cin.getline(std_gender,100);
	cout<<"Enter your address:";
	cin.getline(std_adrs,100);
	cout<<"Enter your mobile no:";
	cin.getline(std_mbl_no_1,100);
	cout<<"Enter your gardian id:";
	cin.getline(gardian_id,100);
	cout<<"Enter your gardian contact no:";
	cin.getline(gardian_mbl_no,100);
	cout<<"Enter your subject name:";
	cout<<"\n\n**Note**only the first letter should be capital \n\nand two names shoulb be writtern like Computer-Science\n\n";
	cout<<"Enter:";
	cin.getline(std_department,100);
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
	// calling student fees function
	new_std_fees(std_department);	
}
void Admission::new_std_fees(string std_department)
{
	cout<<"bye bye"<<endl;
	string str;
	ifstream departs("departments.txt",ios::in);
	departs>>str;
	int flag=0;
		while(!departs.eof())
		{
			if(str==std_department)
			{
				flag++;
				//Departments exists
				string fees;
			
				cout<<"\t\t\t\t-------------------------------------------------------\n\n";
				cout<<"\t\t\t\tPay Your fees to enroll that is 10000\n";
				cout<<"\t\t\t\totherwise your data will be lost and you're no more enrolled\n\n";
				cout<<"\t\t\t\t-------------------------------------------------------\n\n";
				cout<<"\t\t\t\tEnter:";cin>>fees;
				if(fees=="10000")
				{
					cout<<"\t\t\t\tYour Data is Safe.\n\n";
					SendData_to_File(std_department);
				}
				else
				{
					cout<<"\t\t\t\tInvalid Fees\n\n";
					cout<<"\t\t\t\tYour Data is Lost and you have not enrolled\n\n";		
				}

				break;
			}
			departs>>str;
		}
		if(flag==0)
		{
			cout<<"\t\t\t\tSorry Your Input Department does not exist in our College Management System\n\n";
		}
		
}
void Admission::Admission_form_details()
{
	
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
	cout<<"\t\t\t\tAdmission Form Details are as follows\n\n";
	cout<<"\t\t\t\tYour Identity Card Number is required\n\n";
	cout<<"\t\t\t\tYour First Name is required\n\n";
	cout<<"\t\t\t\tYour Last Name is required\n\n";
	cout<<"\t\t\t\tYour Gender is required\n\n";
	cout<<"\t\t\t\tYour Address is required\n\n";
	cout<<"\t\t\t\tYour Personal Mobile Number is required\n\n";
	cout<<"\t\t\t\tYour Gardian ID Number is required\n\n";
	cout<<"\t\t\t\tYour Gardian Mobile Number is required\n\n";
	cout<<"\t\t\t\tYour Department Name is required\n\n";
	cout<<"\t\t\t\t*******************************************************\n\n";
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
}
