#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
class search_student:public student{
	char std_id[100],std_fname[100],std_lname[100],std_gender[100],std_adrs[100],std_mbl_no_1[100];
	char gardian_id[100],gardian_mbl_no[100],std_department[100];
	public:
		void search_for_std();
		void view();
};

void search_student::view()
{
	string ch,choice;
	cout<<endl;
	int i=1;
	while(i>0)
	{
		
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";
		cout<<"\t\t\t\t\tEnter 1 for Student Details\n\n";
		cout<<"\t\t\t\t\tEnter 2 for Search \n\n";
		cout<<"\t\t\t\t\tany badge student record or any fresher record\n\n";
		cout<<"\t\t\t\t\tEnter 3 for Remove any badge student record or any fresher\n\n";
		cout<<"\t\t\t\t\tEnter 4 for Exit\n\n";
		cout<<"\t\t\t\t*******************************************************\n\n";
		cout<<"\t\t\t\t-------------------------------------------------------\n\n";
		cout<<"\t\t\t\tEnter Your Choice:";cin>>ch;
		if(ch=="1")
		{
			std_details();
		}
		else if(ch=="2")
		{
			search_for_std();
		}
		else if(ch=="3")
		{
			delet_student();
		}
		else if(ch=="4")
		{
			cout<<"\t\t\t\tExiting from this Admin Function\n\n";
			break;
		}
		else
		{
			cout<<"\t\t\t\tInvalid Choices"<<endl;
		}
		cout<<"\n\n\t\t\t\tAdmin Do you want to continue to use this College Management view?,press1:";cin>>choice;cout<<endl;
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
	//for Search any student usman
void search_student::search_for_std()
{
	string id,dpt,badge;
	cout<<"\t\t\t\tProvide Details of student to be Searched from College System\n\n";
	cout<<"\t\t\t\tEnter Department name:";cin>>dpt;
	cout<<"\t\t\t\tEnter Badge year between 2020-2024:";cin>>badge;
	cout<<"\t\t\t\tEnterStudent ID Card number:";cin>>id;
	cout<<"\t\t\t\t\n\n";
	cout<<"\t\t\t\t\n\n";	
	ifstream del_record,dpt1,dpt2,dpt3,dpt4,dpt5,dpt6,dpt7,dpt8,dpt9,dpt10;
	if(badge=="2020")
	{
		dpt1.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Biotechnology\\record.txt",ios::in);
		dpt2.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Botany\\record.txt",ios::in);
		dpt3.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Chemistry\\record.txt",ios::in);
		dpt4.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Computer-Science\\record.txt",ios::in);
		dpt5.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\English\\record.txt",ios::in);
		dpt6.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Islamiyat\\record.txt",ios::in);
		dpt7.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Physics\\record.txt",ios::in);
		dpt8.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Political-Science\\record.txt",ios::in);
		dpt9.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Urdu\\record.txt",ios::in);
		dpt10.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Zoology\\record.txt",ios::in);
		
		if(dpt=="Biotechnology")
		{
			int flag=0;
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
		}
	else if(dpt=="Botany")
		{
			int flag=0;
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}

		}
		
	else if(dpt=="Chemistry")
		{
			int flag=0;
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
	}
	else if(dpt=="Computer-Science")
		{
			int flag=0;
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
	
		}
	else if(dpt=="English")
		{
			int flag=0;
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}

	}
		else if(dpt=="Islamiyat")
		{
			int flag=0;
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
		}
		else if(dpt=="Physics")
		{
			int flag=0;
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
		}
			else if(dpt=="Political-Science")
		{
			int flag=0;
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
		}
		
			else if(dpt=="Urdu")
		{
			int flag=0;
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
		}
		
			else if(dpt=="Zoology")
		{
			int flag=0;
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
		if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
		dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
		if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
		}
	else
	{
		cout<<"\t\t\t\tInvalid Department\n\n"<<endl;
	}
}

	else if(badge=="2021")
	{
		int flag=0;
		dpt1.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Biotechnology\\record.txt",ios::in);
		dpt2.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Botany\\record.txt",ios::in);
		dpt3.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Chemistry\\record.txt",ios::in);
		dpt4.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Computer-Science\\record.txt",ios::in);
		dpt5.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\English\\record.txt",ios::in);
		dpt6.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Islamiyat\\record.txt",ios::in);
		dpt7.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Physics\\record.txt",ios::in);
		dpt8.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Political-Science\\record.txt",ios::in);
		dpt9.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Urdu\\record.txt",ios::in);
		dpt10.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Zoology\\record.txt",ios::in);
		
		if(dpt=="Biotechnology")
		{
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		}
	else if(dpt=="Botany")
		{
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
			if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
						dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
		}
		
	else if(dpt=="Chemistry")
		{
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
	if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
		}
	else if(dpt=="Computer-Science")
		{
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
		if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}	
							dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
		}
	else if(dpt=="English")
		{
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
		}
		else if(dpt=="Islamiyat")
		{
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
		}
		else if(dpt=="Physics")
		{
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
		}
			else if(dpt=="Political-Science")
		{
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
		}
		
			else if(dpt=="Urdu")
		{
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
		}
		
			else if(dpt=="Zoology")
		{
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
		}
	else
	{
		cout<<"\t\t\t\tInvalid Department\n\n"<<endl;
	}
	if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
}

	else if(badge=="2022")
	{
		int flag=0;
		dpt1.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Biotechnology\\record.txt",ios::in);
		dpt2.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Botany\\record.txt",ios::in);
		dpt3.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Chemistry\\record.txt",ios::in);
		dpt4.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Computer-Science\\record.txt",ios::in);
		dpt5.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\English\\record.txt",ios::in);
		dpt6.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Islamiyat\\record.txt",ios::in);
		dpt7.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Physics\\record.txt",ios::in);
		dpt8.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Political-Science\\record.txt",ios::in);
		dpt9.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Urdu\\record.txt",ios::in);
		dpt10.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Zoology\\record.txt",ios::in);
		
		if(dpt=="Biotechnology")
		{
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		}
	else if(dpt=="Botany")
		{
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
		}
		
	else if(dpt=="Chemistry")
		{
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
		}
	else if(dpt=="Computer-Science")
		{
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
		}
	else if(dpt=="English")
		{
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
		}
		else if(dpt=="Islamiyat")
		{
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
		}
		else if(dpt=="Physics")
		{
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
		}
			else if(dpt=="Political-Science")
		{
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
		}
		
			else if(dpt=="Urdu")
		{
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
		}
		
			else if(dpt=="Zoology")
		{
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
		}
		else
		{
			cout<<"\t\t\t\tInvalid Department\n\n"<<endl;
		}
		if(flag==0)
			{
				cout<<"\t\t\t*********************************************************\n\n";
				cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
				cout<<"\t\t\t*********************************************************\n\n";
			}
}
	else if(badge=="2023")
	{
		int flag=0;
		dpt1.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Biotechnology\\record.txt",ios::in);
		dpt2.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Botany\\record.txt",ios::in);
		dpt3.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Chemistry\\record.txt",ios::in);
		dpt4.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Computer-Science\\record.txt",ios::in);
		dpt5.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\English\\record.txt",ios::in);
		dpt6.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Islamiyat\\record.txt",ios::in);
		dpt7.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Physics\\record.txt",ios::in);
		dpt8.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Political-Science\\record.txt",ios::in);
		dpt9.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Urdu\\record.txt",ios::in);
		dpt10.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Zoology\\record.txt",ios::in);
		
		if(dpt=="Biotechnology")
		{
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		}
	else if(dpt=="Botany")
		{
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
		}
		
	else if(dpt=="Chemistry")
		{
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
		}
	else if(dpt=="Computer-Science")
		{
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
		}
	else if(dpt=="English")
		{
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
		}
		else if(dpt=="Islamiyat")
		{
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
		}
		else if(dpt=="Physics")
		{
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
		}
			else if(dpt=="Political-Science")
		{
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
		}
		
			else if(dpt=="Urdu")
		{
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
		}
		
			else if(dpt=="Zoology")
		{
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
		}
	else
	{
		cout<<"\t\t\t\tInvalid Department\n\n"<<endl;
	}
	if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
}
	else if(badge=="2024")
	{
		int flag=0;
		dpt1.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Biotechnology\\record.txt",ios::in);
		dpt2.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Botany\\record.txt",ios::in);
		dpt3.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Chemistry\\record.txt",ios::in);
		dpt4.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Computer-Science\\record.txt",ios::in);
		dpt5.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\English\\record.txt",ios::in);
		dpt6.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Islamiyat\\record.txt",ios::in);
		dpt7.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Physics\\record.txt",ios::in);
		dpt8.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Political-Science\\record.txt",ios::in);
		dpt9.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Urdu\\record.txt",ios::in);
		dpt10.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Zoology\\record.txt",ios::in);
		
		if(dpt=="Biotechnology")
		{
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		}
	else if(dpt=="Botany")
		{
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
		}
		
	else if(dpt=="Chemistry")
		{
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
		}
	else if(dpt=="Computer-Science")
		{
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
		}
	else if(dpt=="English")
		{
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
		}
		else if(dpt=="Islamiyat")
		{
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
		}
		else if(dpt=="Physics")
		{
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
		}
			else if(dpt=="Political-Science")
		{
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
		}
		
			else if(dpt=="Urdu")
		{
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
		}
		
			else if(dpt=="Zoology")
		{
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
				if(std_id==id)
				{
					flag++;
					cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\n"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
					break;
				}
				dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
		}
	else
	{
		cout<<"\t\t\t\tInvalid Department\n\n"<<endl;
	}
	if(flag==0)
		{
			cout<<"\t\t\t*********************************************************\n\n";
			cout<<"\t\t\t\tYour ID |"<<id<<"| is not valid in our record\n\n";
			cout<<"\t\t\t*********************************************************\n\n";
		}
}
	else
	{
		cout<<"\t\t\t\tInvalid Department\n\n"<<endl;
	}
}

