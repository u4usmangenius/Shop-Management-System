#include<iostream>
#include <iomanip>
#include <stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;
class admins
{
	
	public://neechy waly ko public is lye kia ha kyunky customer ko bhi neechy wali ids dikhani hen
		string ID,name,category;
		double prePrice;
		int quantity;
//		admins *head;
		admins *next;
	
		void admin();
		void add();
		void push(string,string,string,double,int);
		void adding_to_linklist_from_file();
		void display();
		void search();
		void modify();
		void delet();
		void adding_to_file_fom_linklist();
		void categories();
		void add_newcategory();
		void display_category();
		void custmer_list();
};
admins *head=NULL;
void admins::admin()
{
	admins *admn;
	string ch;
	int i=1;
	while(i>0)
	{	
		cout<<"\t\t\t\t**************************************************"<<endl<<endl;
		cout<<"\t\t\t\t||                 Admin Portal                 ||"<<endl<<endl;
		cout<<"\t\t\t\t**************************************************"<<endl<<endl;
		cout<<"\t\t\t\tEnter 1 for Add a Product  "<<endl<<endl;
		cout<<"\t\t\t\tEnter 2 to display all products   "<<endl<<endl;
		cout<<"\t\t\t\tEnter 3 for Delete a particular product item"<<endl<<endl;
		cout<<"\t\t\t\tEnter 4 for search by ID/Category"<<endl<<endl;
		cout<<"\t\t\t\tEnter 5 for Customers List "<<endl<<endl;
		cout<<"\t\t\t\tEnter 6 for display all categories"<<endl<<endl;
		cout<<"\t\t\t\tEnter 7 for add a new category	"<<endl<<endl;
		cout<<"\t\t\t\tEnter 8 for display linklist products	"<<endl<<endl;
		cout<<"\t\t\t\tEnter 9 for exit	"<<endl<<endl;
							
		cout<<"\nEnter Your choice >>>";   cin>>ch;		
		if(ch=="1")
		{
			admn->add();
		}
		else if(ch=="2")
		{
			admn->display();
		}
		else if(ch=="3")
		{
			admn->delet();
		}
		else if(ch=="4")
		{
			admn->search();
		}
		else if(ch=="5")
		{
			admn->custmer_list();
		}
		else if(ch=="6")
		{
			admn->display_category();
		}
		else if(ch=="7")
		{
			admn->add_newcategory();
		}
		else if(ch=="8")
		{
			admn->display();
		}
		else if(ch=="9"){
			break;
		}
		else 
		{
			cout<<"\t\t\t\t**Admin** You have provided only above facilities"<<endl;
			cout<<"\t\t\t\tSo you have not much choices...\n"<<endl;
		}
		string choice;
		cout<<"\t\t\t\tDo you want to use again admin portal?,press y:";
			cin>>choice;
			if(choice=="y" || choice=="Y" )
			{
				i++;
			}
			else
			{
				i=0;
			}
	}
}
void admins::push(string id,string nam,string catog,double price,int quant)
{
	admins *last=head;
	admins *nod=new admins();
	nod->ID=id;nod->name=nam;nod->category=catog;nod->prePrice=price;nod->quantity=quant;
	if(head==NULL)
	{
		head=nod;
	}
	else
	{
		while(last->next!=NULL)
    	{
			last=last->next;
    	}
        last->next=nod;
	}
}
void admins::add()
{
//	printlist();
	admins *t,admn;
	ofstream shop;
	shop.open("shop.txt",ios::app);
	ifstream shop_read("shop.txt",ios::in);
	ifstream catgry("categories.txt",ios::in);
	string catog,valid_catogry;
	cout<<"\t\t\t\tEnter the category in which you want to insert your product:"<<endl;
	t->display_category();
	cout<<"\t\t\t\tEnter:";
	cin>>catog;
	catgry>>valid_catogry;
	while(!catgry.eof())
	{
		if(catog==valid_catogry)
		{
			cout<<"\t\t\t\tYou entered a valid category\nSo you can add product\n\n";
			cout<<"\t\t\t\tin the same category you entered...\n"<<endl;
			break;
		}
		catgry>>valid_catogry;
	}
	string choice;
	if(catog!=valid_catogry)
	{
		cout<<"\t\t\t\t**Admin**The category is not exist in your DATABASE\n\n";
		cout<<"\t\t\t\tIf you want to add product in same category then\n\n";
		cout<<"\t\t\t\tYou need to put category, if you want press y:";
		cin>>choice;
		if(choice=="y" || choice=="Y")
		{
			t->add_newcategory();
		}
		else
		{
			return;
		}
		choice="abc";
	}
	string ID;
	cout<<"\t\t\t\ttEnter product ID:";
	cin>>ID;
	shop_read>>admn.ID>>admn.category>>admn.name>>admn.prePrice>>admn.quantity;
	while(!shop_read.eof())
	{
		if(ID==admn.ID )
		{
			cout<<"\t\t\t\tThis ID alread exist---\n\n";
			cout<<"\t\t\t\tSo this function is re-running---\n\n";
			add();
			return;
		}
	shop_read>>admn.ID>>admn.category>>admn.name>>admn.prePrice>>admn.quantity;
	}
	admn.ID=ID;
	cout<<"\t\t\t\tEnter product Name:";
	cin>>admn.name;
	cout<<"\t\t\t\tEnter product price:";
	cin>>admn.prePrice;
	cout<<"\t\t\t\tEnter product quantity:";
	cin>>admn.quantity;
	ifstream read_shop_again("shop.txt",ios::in);
	shop<<admn.ID <<"\t"<<catog<<"\t"<<admn.name<<"\t"<<admn.prePrice<<"\t"<<admn.quantity<<endl;
	shop.close();
	shop_read.close();
	cout<<"\t\t\t\tThe category named**"<<catog<<"**product is inserted.\n"<<endl;
	push(admn.ID,admn.name,catog,admn.prePrice,admn.quantity);
	display();
}
void admins::adding_to_linklist_from_file()
{		
	admins admn;
    const char separator    = ' ';
    const int nameWidth     = 6;
    const int numWidth      = 8;

	ifstream shop;
	shop.open("shop.txt",ios::in);
	if(!shop)
	{
		cout<<"\t\t\t\tError in opening file\n"<<endl;
		return;
	}

	cout<<"\n";
	shop>>admn.ID>>admn.category >>admn.name>>admn.prePrice>>admn.quantity;
	while(!shop.eof())
	{
	//	adding existing file data to node and we will display it from node
	//	i have called to printlist function for displaying values from linklist at this function end line
		push(admn.ID,admn.name,admn.category,admn.prePrice,admn.quantity);
		shop>>admn.ID>> admn.category >>admn.name>>admn.prePrice>>admn.quantity;
	}
	shop.close();
	cout<<endl<<endl;

}
void admins::display()
{
	const char separator    = ' ';
    const int nameWidth     = 6;
    const int numWidth      = 8;
    cout << left << setw(numWidth)  << setfill(separator) << "ID";
    cout << left << setw(nameWidth) << setfill(separator) << "\tCategory";
    cout << left << setw(nameWidth) << setfill(separator) << "\tName";
    cout << left << setw(nameWidth) << setfill(separator) <<  "\t"  << "ProPrice";
    cout << left << setw(nameWidth) << setfill(separator) << "\t" << "Quantity";
	cout<<endl<<endl;
	admins*n=head;
	int flag=0;
	while(n!=NULL)
	{
		flag=1;
	    cout << left << setw(numWidth) << setfill(separator) << n->ID <<"\t";
	    cout << left << setw(numWidth) << setfill(separator) << n->category <<"\t";
	    cout << left << setw(numWidth) << setfill(separator) << n->name<<"\t";
	    cout << left << setw(numWidth) << setfill(separator) << n->prePrice <<"\t";
	    cout << left << setw(numWidth) << setfill(separator) << n->quantity <<"\t";
		cout<<endl<<endl;
		n=n->next;
	}
	if(flag==0)
	{
		cout<<"\t\t\t\tNo Runtime Valu is inserted\n\n";
	}
}
void admins::display_category()
{
	admins *admn;
	string catog;
//	char catog[5][100];
	ifstream categories;
	categories.open("categories.txt",ios::app);
	cout<<"\t\t\t\tCategories are as follows\n\n";
	categories>>catog;
	while(!categories.eof())
	{
		cout<<catog<<endl;
		
		categories>>catog;
	}

}
void admins::categories()
{
	int i=0;
	admins *admn;
	string choic="abc";
	cout<<"\t\t\t\t**ADMIN**\n\n";
	cout<<"\t\t\t\tDo you want to add another category? press y:";
		cin>>choic;
		if(choic=="y" || choic=="Y")
		{
			admn->add_newcategory();
			choic="abc";
			cout<<"\t\t\t\tNow do you want use this function? press y:";
			cin>>choic;
			if(choic=="y" || choic=="Y")
			{
				choic="abc";
				admn->categories();
			}
			else
			{
				return;
			}
		}
		
		//	cout<<"Enter product cateogry:";
//	cin>>a.category;
//	a.add(a.category);
	
}
void admins::add_newcategory()
{
	string catog;
	ofstream category("categories.txt",ios::app);
	cout<<"\t\t\t\tEnter New Product Category:";
	cin>>catog;
	category<<catog<<endl;
	cout<<"\t\t\t\tNew Product category is inserted...\n\n";
	return;
}
void admins::search()
{
	admins *n;
	n=head;
	admins a;
	string srch;
	cout<<"\t\t\t\tEnter ID to Search\n"<<endl;
	cout<<"\t\t\t\tOR Enter Category to Search\n"<<endl;
	cout<<"\t\t\t\tEnter:";
	cin>>srch;
	int flag=0;
	cout<<"\t\t\t\t";
	cout<<"ID\tName\t\tCategory\tPrice\tQuantity\n\n";
	if(n==NULL)
	{
		return;
	}
	else
	{
		while(n!=NULL)
		{
			if(n->ID==srch || n->category==srch)
			{
//				cout<<"\t\t\t\tYour Search is Found\n\n";
//	 ooper wali line ko comnt is lye kia qky agr ham search by category kren to aik category ki kafi products
//hon gi to sbhi ko display rakhny ky lye aesa kia
				cout<<"\t\t\t\t";
				cout<<n->ID<<"\t"<<n->name<<"\t"<<n->category<<"\t"<<n->prePrice <<"\t"<<n->quantity <<"\t";
				cout<<endl<<endl;
				flag=1;
//				break;
			}
			n=n->next;
		}
	}
	if(flag==0)
	{
		cout<<"\t\t\t\tYour Search Not Found\n\n";
	}
	return;
	
}

void admins::modify()
{
	cout<<"\t\t\t\tYour modify function is running..\n"<<endl;

}
void admins::delet()
{
	admins *temp,*n;
	n=temp=head;
	admins *a;
	char srch[100];
	cout<<"\t\t\t\tEnter ID to Delete\n"<<endl;
	cout<<"\t\t\t\tEnter:";
	cin.ignore();
	cin.getline(srch,100);
	int flag=0;
	if(n==NULL)
	{
		return;
	}	
	if(n->ID==srch)
	{
		flag=1;
		temp=n;
//head =head->next kren gy kyunky hamara asal head jo ha wo head ha jo ky ooper ooper publoc lia howa na ky "n"...
		head=head->next;
		delete(temp);
//		return;
	}
	else
	{
		while(n->next!=NULL)
		{
			if(n->next->ID==srch)
			{
				temp=n->next;
				n->next=n->next->next;
				delete(temp);
				flag=1;
				break;
			}
			n=n->next;
		}
	}
	cout<<endl;
	if(flag==0)
	{
		cout<<"\t\t\t\tYour ID Not Found\n\n";
	}
	else
	{
		cout<<"\t\t\t\tDeleted -->Done<--"<<endl<<endl;
	}
	a->adding_to_file_fom_linklist();
}
void admins::adding_to_file_fom_linklist()
{
	ofstream shop("new.txt",ios::app);
	admins *n;
	n=head;
	while(n!=NULL)
	{
		shop<<n->ID <<"\t"<<n->category<<"\t"<<n->name<<"\t"<<n->prePrice<<"\t"<<n->quantity<<endl;
		n=n->next;
	}
	shop.close();
	remove("shop.txt");
	rename("new.txt","shop.txt");
}
void admins::custmer_list()
{
	ifstream file("customer.txt",ios::in);
	string id,name,adrs,purchase;
	file>>id>>name>>adrs>>purchase;
	cout<<"\t\t\t\tID\t\tName\t\t\tAddress\t\t\tPurchases\n\n";
	while(!file.eof())
	{
		cout<<"\t\t\t\t"<<id<<"\t\t"<<name<<"\t\t\t"<<adrs<<"\t\t"<<purchase<<"\n\n";
		file>>id>>name>>adrs>>purchase;
	}
	cout<<"\t\t\t\tYour cstomer_list function is running..\n"<<endl;	
}
