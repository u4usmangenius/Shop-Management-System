#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class student{
	char std_id[100],std_fname[100],std_lname[100],std_gender[100],std_adrs[100],std_mbl_no_1[100];
	char gardian_id[100],gardian_mbl_no[100],std_department[100];
	public:
		void std_details();
//		void std_payfees();
//		void std_IsPresent();
//		void std_class_view();
		void view_dept_details(string,string);
		void delet_student();
};
//void student::std_class_view()
//{	
//	
//		std_details();	
//}
void student::std_details()
{
	string dpt,badge;
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
	cout<<"\t\t\t\tEnter Badge Start year for details:";cin>>badge;
	cout<<"\t\t\t\tAnd Enter Department Name for details:";cin>>dpt;
	cout<<"\t\t\t\t-------------------------------------------------------\n\n";
	view_dept_details(badge,dpt);
}
void student::view_dept_details(string badge,string dpt)
{
//yahan pr badge is lye lia ha kyunky hamen pta ho ky kis waly year ka data usy utha kr display krwana ha
	ifstream read_2020,read_2021,read_2022,read_2023;
	if(dpt=="Biotechnology")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Biotechnology\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Biotechnology\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Biotechnology\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Biotechnology\\record.txt",ios::in);
	}
	else if(dpt=="Computer-Science")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Computer-Science\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Computer-Science\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Computer-Science\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Computer-Science\\record.txt",ios::in);		
	}
	else if(dpt=="Botany")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Botany\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Botany\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Botany\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Botany\\record.txt",ios::in);		
	}
	else if(dpt=="Chemistry")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Chemistry\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Chemistry\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Chemistry\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Chemistry\\record.txt",ios::in);		
	}
	else if(dpt=="English")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\English\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\English\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\English\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\English\\record.txt",ios::in);		
	}
	else if(dpt=="Islamiyat")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Islamiyat\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Islamiyat\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Islamiyat\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Islamiyat\\record.txt",ios::in);		
	}
	else if(dpt=="Physics")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Physics\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Physics\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Physics\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Physics\\record.txt",ios::in);		
	}
	else if(dpt=="Political-Science")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Political-Science\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Political-Science\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Political-Science\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Political-Science\\record.txt",ios::in);		
	}
	else if(dpt=="Urdu")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Urdu\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Urdu\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Urdu\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Urdu\\record.txt",ios::in);		
	}
	else if(dpt=="Zoology")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Zoology\\record.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Zoology\\record.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Zoology\\record.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Zoology\\record.txt",ios::in);		
	}
	else 
	{
		cout<<"\t\t\t\tInvalid Department\n\n";
	}
	if(badge=="2020")
	{
		read_2020>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
		while(!read_2020.eof())
		{
			cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
			read_2020>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
		}
	}
	else if(badge=="2021")
	{
		read_2021>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
		while(!read_2021.eof())
		{
			cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
			read_2021>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
		}
	}
	else if(badge=="2022")
	{
		read_2022>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
		while(!read_2022.eof())
		{
			cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
			read_2022>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
		}
	}
	else if(badge=="2023")
	{
		read_2023>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
		while(!read_2023.eof())
		{
			cout<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
			read_2023>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
		}
	}
	else
	{
		cout<<"\t\t\t\tInvalid Record\n\n"<<endl;
	}
}
//for delete any student usman
void student::delet_student()
{
	string id,dpt,badge;
	cout<<"\t\t\t\tProvide Details of student to be remove from College System\n\n";
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Biotechnology\\new.txt");
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		file.close();
		remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Biotechnology\\record.txt");
		rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Biotechnology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Biotechnology\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Botany\\new.txt");
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Botany\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Botany\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Botany\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Chemistry\\new.txt");
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Chemistry\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Chemistry\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Chemistry\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Computer-Science\\new.txt");
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Computer-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Computer-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Computer-Science\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\English\\new.txt");
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\English\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\English\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\English\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Islamiyat\\new.txt");
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Islamiyat\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Islamiyat\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Islamiyat\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Physics\\new.txt");
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Physics\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Physics\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Physics\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Political-Science\\new.txt");
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Political-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Political-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Political-Science\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Urdu\\new.txt");
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Urdu\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Urdu\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Urdu\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Zoology\\new.txt");
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Zoology\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Zoology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Zoology\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Biotechnology\\new.txt");
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		file.close();
		remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Biotechnology\\record.txt");
		rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Biotechnology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Biotechnology\\record.txt");
		}
	else if(dpt=="Botany")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Botany\\new.txt");
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Botany\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Botany\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Botany\\record.txt");
		}
		
	else if(dpt=="Chemistry")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Chemistry\\new.txt");
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Chemistry\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Chemistry\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Chemistry\\record.txt");
		}
	else if(dpt=="Computer-Science")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Computer-Science\\new.txt");
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Computer-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Computer-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Computer-Science\\record.txt");
		}
	else if(dpt=="English")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\English\\new.txt");
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\English\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\English\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\English\\record.txt");
		}
		else if(dpt=="Islamiyat")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Islamiyat\\new.txt");
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Islamiyat\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Islamiyat\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Islamiyat\\record.txt");
		}
		else if(dpt=="Physics")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Physics\\new.txt");
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Physics\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Physics\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Physics\\record.txt");
		}
			else if(dpt=="Political-Science")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Political-Science\\new.txt");
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Political-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Political-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Political-Science\\record.txt");
		}
		
			else if(dpt=="Urdu")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Urdu\\new.txt");
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Urdu\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Urdu\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Urdu\\record.txt");
		}
		
			else if(dpt=="Zoology")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Zoology\\new.txt");
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Zoology\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Zoology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Zoology\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Biotechnology\\new.txt");
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		file.close();
		remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Biotechnology\\record.txt");
		rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Biotechnology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Biotechnology\\record.txt");
		}
	else if(dpt=="Botany")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Botany\\new.txt");
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Botany\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Botany\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Botany\\record.txt");
		}
		
	else if(dpt=="Chemistry")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Chemistry\\new.txt");
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Chemistry\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Chemistry\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Chemistry\\record.txt");
		}
	else if(dpt=="Computer-Science")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Computer-Science\\new.txt");
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Computer-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Computer-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Computer-Science\\record.txt");
		}
	else if(dpt=="English")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\English\\new.txt");
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\English\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\English\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\English\\record.txt");
		}
		else if(dpt=="Islamiyat")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Islamiyat\\new.txt");
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Islamiyat\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Islamiyat\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Islamiyat\\record.txt");
		}
		else if(dpt=="Physics")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Physics\\new.txt");
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Physics\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Physics\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Physics\\record.txt");
		}
			else if(dpt=="Political-Science")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Political-Science\\new.txt");
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Political-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Political-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Political-Science\\record.txt");
		}
		
			else if(dpt=="Urdu")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Urdu\\new.txt");
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Urdu\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Urdu\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Urdu\\record.txt");
		}
		
			else if(dpt=="Zoology")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Zoology\\new.txt");
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Zoology\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Zoology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Zoology\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Biotechnology\\new.txt");
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		file.close();
		remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Biotechnology\\record.txt");
		rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Biotechnology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Biotechnology\\record.txt");
		}
	else if(dpt=="Botany")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Botany\\new.txt");
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Botany\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Botany\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Botany\\record.txt");
		}
		
	else if(dpt=="Chemistry")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Chemistry\\new.txt");
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Chemistry\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Chemistry\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Chemistry\\record.txt");
		}
	else if(dpt=="Computer-Science")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Computer-Science\\new.txt");
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Computer-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Computer-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Computer-Science\\record.txt");
		}
	else if(dpt=="English")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\English\\new.txt");
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\English\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\English\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\English\\record.txt");
		}
		else if(dpt=="Islamiyat")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Islamiyat\\new.txt");
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Islamiyat\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Islamiyat\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Islamiyat\\record.txt");
		}
		else if(dpt=="Physics")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Physics\\new.txt");
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Physics\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Physics\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Physics\\record.txt");
		}
			else if(dpt=="Political-Science")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Political-Science\\new.txt");
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Political-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Political-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Political-Science\\record.txt");
		}
		
			else if(dpt=="Urdu")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Urdu\\new.txt");
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Urdu\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Urdu\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Urdu\\record.txt");
		}
		
			else if(dpt=="Zoology")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Zoology\\new.txt");
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Zoology\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Zoology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Zoology\\record.txt");
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
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Biotechnology\\new.txt");
			dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt1.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt1>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
		dpt1.close();
		file.close();
		remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Biotechnology\\record.txt");
		rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Biotechnology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Biotechnology\\record.txt");
		}
	else if(dpt=="Botany")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Botany\\new.txt");
			dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt2.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt2>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt2.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Botany\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Botany\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Botany\\record.txt");
		}
		
	else if(dpt=="Chemistry")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Chemistry\\new.txt");
			dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt3.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt3>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt3.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Chemistry\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Chemistry\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Chemistry\\record.txt");
		}
	else if(dpt=="Computer-Science")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Computer-Science\\new.txt");
			dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt4.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt4>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt4.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Computer-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Computer-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Computer-Science\\record.txt");
		}
	else if(dpt=="English")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\English\\new.txt");
			dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt5.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt5>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt5.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\English\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\English\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\English\\record.txt");
		}
		else if(dpt=="Islamiyat")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Islamiyat\\new.txt");
			dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt6.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt6>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt6.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Islamiyat\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Islamiyat\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Islamiyat\\record.txt");
		}
		else if(dpt=="Physics")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Physics\\new.txt");
			dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt7.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt7>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt7.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Physics\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Physics\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Physics\\record.txt");
		}
			else if(dpt=="Political-Science")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Political-Science\\new.txt");
			dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt8.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt8>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt8.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Political-Science\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Political-Science\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Political-Science\\record.txt");
		}
		
			else if(dpt=="Urdu")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Urdu\\new.txt");
			dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt9.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt9>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt9.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Urdu\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Urdu\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Urdu\\record.txt");
		}
		
			else if(dpt=="Zoology")
		{
			ofstream file("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Zoology\\new.txt");
			dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;
			while(!dpt10.eof())
			{
				if(std_id!=id)
				{
				file<<std_id<<"\t"<<std_fname<<"\t"<<std_lname<<"\t"<<std_gender<<"\t"<<std_adrs<<"\t"<<std_mbl_no_1<<"\t"<<gardian_id<<"\t"<<gardian_mbl_no<<"\t"<<std_department<<endl;			
				}
				else
				{
					flag++;
					cout<<"\t\t\t\tData Deleted\n\n";
				}
				dpt10>>std_id>>std_fname>>std_lname>>std_gender>>std_adrs>>std_mbl_no_1>>gardian_id>>gardian_mbl_no>>std_department;			
			}
			dpt10.close();
			file.close();
			remove("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Zoology\\record.txt");
			rename("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Zoology\\new.txt","C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2024\\Zoology\\record.txt");
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

