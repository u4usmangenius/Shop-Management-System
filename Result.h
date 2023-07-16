#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class Result:public Admission{
	//here m1, are marks per each subject
	float m1,totmarks,totsubmarks,countsub;
	float cgpa;
	public:
		Result();
		void res_per_semester();
		void res_per_course();
		void res_per_semester_details(string,string,string);
		void res_view();
};
Result::Result()
{
	m1=0;
	totmarks=totsubmarks=countsub=0;
}
void Result::res_view()
{
	int i=0;
	while(i>=0)
	{
		string ch;
		cout<<"\t\t\t\tEnter 1 for check result per any semester "<<endl<<endl;
		cout<<"\t\t\t\tEnter 2 for check result complete course "<<endl<<endl;
		cout<<"\t\t\t\tEnter 3 for exit"<<endl<<endl;
		cout<<"\t\t\t\tEnter:";cin>>ch;
		if(ch=="1")
		{
			res_per_semester();
		}
		else if(ch=="2")
		{
			res_per_course();
		}
		else if(ch=="3")
		{
			cout<<"\t\t\t\tExiting from this Result Function\n\n";
			break;
		}
		else 
		{
			cout<<"\t\t\t\tInvalid Choice\n\n";
		}
		string choic;
		cout<<"\t\t\t\tContinue to this Result Check Function:?\n\n\t\t\t\tpress 1:";cin>>choic;
		if(choic=="1")
		{
			i++;
		}
		else
		{
			i=-1;
		}
	}
}
void Result::res_per_course()
{
	cout<<"\t\t\t\tYet No Badge is completed\n\n";
	cout<<"\t\t\t\tSo There is no Result for complete course\n\n";
}
void Result::res_per_semester()
{
	char sem[100],dpt[100],badge[100];
	cout<<"\t\t\t\tEnter Your Semester Number in format \n\n\t\t\t\t\t'Semester-1'\n\n\t\t\t\t else not supported.\n\n";
	cout<<"\t\t\t\tEnter:";
	cin.getline(sem,100);cout<<endl;
	cout<<"\t\t\t\tEnter your badge year between 2020 to 2023:\n\n";
	cout<<"\t\t\t\tEnter:";
	cin.getline(badge,100);cout<<endl;
	cout<<"\t\t\t\tEnter your Department name:\n\n";
	cout<<"\t\t\t\tEnter:";
	cin.getline(dpt,100);cout<<endl;
	res_per_semester_details(sem,badge,dpt);
}
void Result::res_per_semester_details(string sem,string badge,string dpt)
{
	string read_subject;	
	ifstream read_2020,read_2021,read_2022,read_2023;
	if(badge<"2020" or badge>"2023")
	{
		cout<<"\t\t\t\tInvalid Badge So no Record for |"<<badge<<"|.\n\n";
		return;
	}
	cout<<"\t\t\t\tEnter Your Marks\n\n\t\t\t\tYour Total Marks are 60 per subject\n\n";
	if(dpt=="Biotechnology")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Biotechnology\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Biotechnology\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Biotechnology\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Biotechnology\\subject per semester.txt",ios::in);
	}
	else if(dpt=="Computer-Science")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Computer-Science\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Computer-Science\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Computer-Science\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Computer-Science\\subject per semester.txt",ios::in);		
	}
	else if(dpt=="Botany")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Botany\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Botany\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Botany\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Botany\\subject per semester.txt",ios::in);		
	}
	else if(dpt=="Chemistry")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Chemistry\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Chemistry\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Chemistry\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Chemistry\\subject per semester.txt",ios::in);		
	}
	else if(dpt=="English")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\English\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\English\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\English\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\English\\subject per semester.txt",ios::in);		
	}
	else if(dpt=="Islamiyat")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Islamiyat\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Islamiyat\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Islamiyat\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Islamiyat\\subject per semester.txt",ios::in);		
	}
	else if(dpt=="Physics")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Physics\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Physics\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Physics\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Physics\\subject per semester.txt",ios::in);		
	}
	else if(dpt=="Political-Science")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Political-Science\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Political-Science\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Political-Science\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Political-Science\\subject per semester.txt",ios::in);		
	}
	else if(dpt=="Urdu")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Urdu\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Urdu\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Urdu\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Urdu\\subject per semester.txt",ios::in);		
	}
	else if(dpt=="Zoology")
	{
		read_2020.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2020\\Zoology\\subject per semester.txt",ios::in);
		read_2021.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2021\\Zoology\\subject per semester.txt",ios::in);
		read_2022.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2022\\Zoology\\subject per semester.txt",ios::in);
		read_2023.open("C:\\Users\\Usman Chaudhary\\Desktop\\college management system\\record\\2023\\Zoology\\subject per semester.txt",ios::in);		
	}
	else 
	{
		cout<<"\t\t\t\tInvalid Department\n\n";
		return;
	}
	if(badge=="2020")
	{

		if(sem=="Semester-1")
		{
			read_2020>>read_subject;//ye is lye ha ky semester 1 wali string ignore ho jaye
			while(!read_2020.eof())
			{
				read_2020>>read_subject;
				if(read_subject=="Semester-2")
				{
					break;
				}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 || m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
//					break;
				}
			}
		}
		else if(sem=="Semester-2")
		{
			int flag=0,i=0;
			while(!read_2020.eof())
			{
				read_2020>>read_subject;
				if(flag==0 && read_subject=="Semester-2")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-3")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-3")
		{
			int flag=0,i=0;
			while(!read_2020.eof())
			{
				read_2020>>read_subject;
				if(flag==0 && read_subject=="Semester-3")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-4")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}					
				}
			}
		}
		else if(sem=="Semester-4")
		{
			int flag=0,i=0;
			while(!read_2020.eof())
			{
				read_2020>>read_subject;
				if(flag==0 && read_subject=="Semester-4")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-5")
					{
						break;
					}
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}					
				}
			}
		}
		else if(sem=="Semester-5")
		{
			int flag=0,i=0;
			while(!read_2020.eof())
			{
				read_2020>>read_subject;
				if(flag==0 && read_subject=="Semester-5")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-6")
					{
						break;
					}
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}					
				}
			}
		}
		else if(sem=="Semester-6")
		{
			int flag=0,i=0;
			while(!read_2020.eof())
			{
				read_2020>>read_subject;
				if(flag==0 && read_subject=="Semester-6")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-7")
					{
						break;
					}
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-7")
		{
			int flag=0,i=0;
			while(!read_2020.eof())
			{
				read_2020>>read_subject;
				if(flag==0 && read_subject=="Semester-7")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-8")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}			
				}
			}
		}
		else if(sem=="Semester-8")
		{
			int flag=0,i=0;
			while(!read_2020.eof())
			{
				read_2020>>read_subject;
				if(flag==0 && read_subject=="Semester-8")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else
		{
			cout<<"\t\t\t\tInvalid Semester Number or Record\n\n"<<endl;
		}
	}
	else if(badge=="2021")
	{

		if(sem=="Semester-1")
		{
			read_2021>>read_subject;//ye is lye ha ky semester 1 wali string ignore ho jaye
			while(!read_2021.eof())
			{
				read_2021>>read_subject;
				if(read_subject=="Semester-2")
				{
					break;
				}
			cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}
			}
		}
		else if(sem=="Semester-2")
		{
			int flag=0,i=0;
			while(!read_2021.eof())
			{
				read_2021>>read_subject;
				if(flag==0 && read_subject=="Semester-2")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-3")
					{
						break;
					}
			cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}			
				}
			}
		}
		else if(sem=="Semester-3")
		{
			int flag=0,i=0;
			while(!read_2021.eof())
			{
				read_2021>>read_subject;
				if(flag==0 && read_subject=="Semester-3")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-4")
					{
						break;
					}
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}					
				}
			}
		}
		else if(sem=="Semester-4")
		{
			int flag=0,i=0;
			while(!read_2021.eof())
			{
				read_2021>>read_subject;
				if(flag==0 && read_subject=="Semester-4")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-5")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}					
				}
			}
		}
		else if(sem=="Semester-5")
		{
			int flag=0,i=0;
			while(!read_2021.eof())
			{
				read_2021>>read_subject;
				if(flag==0 && read_subject=="Semester-5")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-6")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-6")
		{
			int flag=0,i=0;
			while(!read_2021.eof())
			{
				read_2021>>read_subject;
				if(flag==0 && read_subject=="Semester-6")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-7")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-7")
		{
			int flag=0,i=0;
			while(!read_2021.eof())
			{
				read_2021>>read_subject;
				if(flag==0 && read_subject=="Semester-7")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-8")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}			
				}
			}
		}
		else if(sem=="Semester-8")
		{
			int flag=0,i=0;
			while(!read_2021.eof())
			{
				read_2021>>read_subject;
				if(flag==0 && read_subject=="Semester-8")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}			
				}
			}
		}
		else
		{
			cout<<"\t\t\t\tInvalid Semester Number or Record\n\n"<<endl;
		}
	}
	else if(badge=="2022")
	{

		if(sem=="Semester-1")
		{
			read_2022>>read_subject;//ye is lye ha ky semester 1 wali string ignore ho jaye
			while(!read_2022.eof())
			{
				read_2022>>read_subject;
				if(read_subject=="Semester-2")
				{
					break;
				}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}
			}
		}
		else if(sem=="Semester-2")
		{
			int flag=0,i=0;
			while(!read_2022.eof())
			{
				read_2022>>read_subject;
				if(flag==0 && read_subject=="Semester-2")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-3")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}			
				}
			}
		}
		else if(sem=="Semester-3")
		{
			int flag=0,i=0;
			while(!read_2022.eof())
			{
				read_2022>>read_subject;
				if(flag==0 && read_subject=="Semester-3")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-4")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-4")
		{
			int flag=0,i=0;
			while(!read_2022.eof())
			{
				read_2022>>read_subject;
				if(flag==0 && read_subject=="Semester-4")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-5")
					{
						break;
					}
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-5")
		{
			int flag=0,i=0;
			while(!read_2022.eof())
			{
				read_2022>>read_subject;
				if(flag==0 && read_subject=="Semester-5")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-6")
					{
						break;
					}
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-6")
		{
			int flag=0,i=0;
			while(!read_2022.eof())
			{
				read_2022>>read_subject;
				if(flag==0 && read_subject=="Semester-6")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-7")
					{
						break;
					}
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}			
				}
			}
		}
		else if(sem=="Semester-7")
		{
			int flag=0,i=0;
			while(!read_2022.eof())
			{
				read_2022>>read_subject;
				if(flag==0 && read_subject=="Semester-7")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-8")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-8")
		{
			int flag=0,i=0;
			while(!read_2022.eof())
			{
				read_2022>>read_subject;
				if(flag==0 && read_subject=="Semester-8")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}		
				}
			}
		}
		else
		{
			cout<<"\t\t\t\tInvalid Semester Number or Record\n\n"<<endl;
		}
	}
	else if(badge=="2023")
	{

		if(sem=="Semester-1")
		{
			read_2023>>read_subject;//ye is lye ha ky semester 1 wali string ignore ho jaye
			while(!read_2023.eof())
			{
				read_2023>>read_subject;
				if(read_subject=="Semester-2")
				{
					break;
				}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}
			}
		}
		else if(sem=="Semester-2")
		{
			int flag=0,i=0;
			while(!read_2023.eof())
			{
				read_2023>>read_subject;
				if(flag==0 && read_subject=="Semester-2")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-3")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-3")
		{
			int flag=0,i=0;
			while(!read_2023.eof())
			{
				read_2023>>read_subject;
				if(flag==0 && read_subject=="Semester-3")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-4")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-4")
		{
			int flag=0,i=0;
			while(!read_2023.eof())
			{
				read_2023>>read_subject;
				if(flag==0 && read_subject=="Semester-4")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-5")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}			
				}
			}
		}
		else if(sem=="Semester-5")
		{
			int flag=0,i=0;
			while(!read_2023.eof())
			{
				read_2023>>read_subject;
				if(flag==0 && read_subject=="Semester-5")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-6")
					{
						break;
					}
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-6")
		{
			int flag=0,i=0;
			while(!read_2023.eof())
			{
				read_2023>>read_subject;
				if(flag==0 && read_subject=="Semester-6")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-7")
					{
						break;
					}
					cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-7")
		{
			int flag=0,i=0;
			while(!read_2023.eof())
			{
				read_2023>>read_subject;
				if(flag==0 && read_subject=="Semester-7")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
					if(read_subject=="Semester-8")
					{
						break;
					}
				cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else if(sem=="Semester-8")
		{
			int flag=0,i=0;
			while(!read_2023.eof())
			{
				read_2023>>read_subject;
				if(flag==0 && read_subject=="Semester-8")
				{
					i++;flag++;continue;
				}
				if(i==1)
				{
			cout<<"\t\t\t\tEnter marks for subject code | "<<read_subject<<" |:";cin>>m1;
				if(m1>=0 && m1<=60)
				{
					totmarks=totmarks+m1;countsub++;	
				}
				else
				{
					cout<<"\t\t\t\tInvalid marks\n\n";
					cout<<"\t\t\t\tYou can not get your result\n\n\t\t\t\tas you did not provide marks according to our rules\n\n";
					cout<<"\t\t\t\tGood Bye\n\n";
					break;
				}				
				}
			}
		}
		else
		{
			cout<<"\t\t\t\tInvalid Semester Number or Record\n\n"<<endl;
		}
	}
	else
	{
		cout<<"No other badge is added yet\n\n";
	}
	totsubmarks=60*countsub;
	//formula to calculate cgpa is (obtained total subejcts marks*credit hours(4))/total marks;
	float cgpa=(totmarks*4)/totsubmarks;
	cout<<"\t\t\t\tYour cgpa for | "<<sem<<" | is "<<cgpa<<endl<<endl;
	//for badge 2021
	
	
}
