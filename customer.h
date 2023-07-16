//	Customer Area



#include<iostream>
#include<strings.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
class customer:public admins{
	string cnic,nam,adrs;
	public:
		string data;
		customer *next;
		void customer_purchase();
		void purchases();
		int purchase(int);
		void add_to_cart(string,string,int,int,int,int);
		int  payment(int);
		void reduce_data();
		void push(string);
		string pop();
		void displayy();
};	
customer *head2=NULL;
void customer::push(string dat)
{
	customer *new_node=new customer();
	new_node->data=dat;
	new_node->next=head2;
	head2=new_node;
}
string customer::pop()
{
	if(head2==NULL)
	{
		cout<<"\t\t\t\tstack Underflow\n\n";
	}
	else
	{
		string n;
		n=head2->data;
//		cout<<"\t\t\t\tPopped Element is:"<<head2->data<<endl<<endl;
		head2=head2->next;
		return n;
	}
}
void customer::displayy()
{
	if(head2==NULL)
	{
		cout<<"\t\t\t\tStack is Empty\n\n";
	}
	else
	{
		customer *ptr;
		ptr=head2;
		cout<<"\t\t\t\tStack Elements are\n\n";
		while(ptr!=NULL)
		{
			cout<<"\t\t\t\t"<<ptr->data<<endl<<endl;
			ptr=ptr->next;
		}
	}

}
void customer::customer_purchase()
{
	string choice;
	customer *cstmer;
	int i=1;
	while(i>0)
	{	
		cout<<"\n\t\t\t\tEnter 1 for display all Shop products...\n\n";
		cout<<"\t\t\t\tEnter 2 for purchasing any products...\n\n";
		cout<<"\t\t\t\tEnter 3 for exit from shop...\n\n";
		cout<<"\t\t\t\t**Note**\n\n";
		cout<<"\t\t\t\tYou can only purchase your product in given quantity\n\n";
		cout<<"\t\t\t\tEnter Your Choice:";
		cin>>choice;

		if(choice=="1")
		{
			display();
		}
		else if(choice=="2")
		{
			purchases();
		}
		else if(choice=="3")
		{
			cout<<"\t\t\t\tExiting From Shop--->Ok...\n"<<endl;
			return;
		}
		string customer_choice;
		cout<<"\t\t\t\tDo you want to Purchase or Display any product again?press Y/y:";
		cin>>customer_choice;
		if(customer_choice=="y" || customer_choice=="Y" )
		{
			cstmer->customer_purchase();
			i++;
		}
		else
		{
			i=0;
		}
	}
}
void customer::purchases()
{
	cout<<"\t\t\t\tFirst Let we know about yourself\n\n\t\t\t\tProvide Your Following Details\n\n"<<endl;
	cout<<"\t\t\t\tEnter Your Address:";cin.ignore();cin>>adrs;
	cout<<"\t\t\t\tEnter Your Name:";cin>>nam;
	cout<<"\t\t\t\tEnter Your CNIC:";cin>>cnic;
	cout<<"\t\t\t\tHave a look in our Market and add to cart your required products\n\n";
	customer *c;
	push(adrs);
	push(nam);
	push(cnic);
	//isko pop neechy waly function me kia ha jahan agr wo payment pay krdy ga to quantity reduce aur uska record
	//store in file	
	cout<<"\t\t\t\tYou have following products available\n\n";
//	displayy(); // it displays stack push elements
	display();
	int price=0;
	int j=0;
	price=purchase(j);
	int i;
	while(i>0)
	{
		string ch;
		cout<<"\t\t\t\tDo You want to purchase another product\n\n";
		cout<<"\t\t\t\tEnter 1:";cin>>ch;
		if(ch=="1")
		{
		i=1;j++;//first time this loop will chaly gi and j=1 & then increment
		price=purchase(j);
		}
		else
		{
			i=-1;
		}
	}
	cout<<"\t\t\t\tYour Purchase is almost done\n\n";
	string p_id="",p_name="";int temp=-1,cart_quantity=0;j++;price=0;
	add_to_cart(p_id,p_name,cart_quantity,j, price,temp);	
}

int customer::purchase(int j)
{
	string p_name,p_id;
	int p_quant,cart_quantity;
//	char p_id[100][100];
	cout<<"\t\t\t\tEnter ID to purchase that product\n\n";
	cout<<"\t\t\t\tEnter:";
	cin>>p_id;
	int price=0;
//	cin>>p_id[0];
//	string 
	cout<<"\t\t\t\tEnter Product Name:";cin>>p_name;
	admins *n;
	n=head;
	int check=0,flag=0;
	while(n!=NULL)
	{
		if(p_id==n->ID && p_name==n->name)
		{
			flag=1;
			cout<<"\t\t\t\tProduct Exist with quantity|"<<n->quantity<<"|\n\n";
			cout<<"\t\t\t\tEnter Product Quantity:";cin>>p_quant;
			if(p_quant>0 && p_quant<=n->quantity)
			{
				cart_quantity=p_quant;
				check=1;
				price=p_quant*n->prePrice;
				n->quantity=n->quantity-p_quant;//usmaaan
			}
			else
			{
				cout<<"\t\t\t\tInvalid Quantity\n\n";
			}
			break;
		}
		n=n->next;
	}
	if(flag==0)
	{
		cout<<"\t\t\t\tProduct is Not Available\n\n";
	}
	if(check==1)//ye is lye kia agr product with customer required quantity is available then add to cart
	{
		int temp=1;
		add_to_cart(p_id,p_name,cart_quantity,j,price,temp);
	}
	return price;

}
void customer::add_to_cart(string p_id,string p_name,int cart_quantity,int j,int price,int temp)
{
	static int tot_price;
	static int pric[100];
	pric[j]=price;
	static string ch,i_id[100],n_name[100];static int q_quant[100];
	if(temp!=-1)
	{
		i_id[j]=p_id;
		n_name[j]=p_name;
		q_quant[j]=cart_quantity;
		tot_price=tot_price+price;
	}
	if(temp==-1)
	{
		for(int k=0;k<j;k++)//k<=j me = is lye remove kia kyunky j me last pr jb isi function ko call kia gya ha to j me aik extra increment ha
		{
			if(i_id[k]=="" || n_name[k]=="")
			{
				continue;
			}
		cout<<"\t\t\t\tID is|"<<i_id[k];
		cout<<"\tName is|"<<n_name[k]<<"|\n\n\t\t\t\tprice is|"<<pric[k]<<"\tquantity=|"<<q_quant[k]<<"|\n\n";
		}
		cout<<"\t\t\t\tEnter 1 for payment cart\n\n";
		cout<<"\t\t\t\tPress any other key for destroying your cart\n\n";
		cout<<"\t\t\t\tEnter:";cin>>ch;
		if(ch=="1")
		{
			int ata=payment(tot_price);
			if(ata==1)
			{
				admins *a;
				a->adding_to_file_fom_linklist();
				//ab idhar quantity kam hony ky bad products with remaining quantities file me re-qrite ho jyen gi
				//agr ap chahty ho ky quantity 0 hony pr us product ko delete kr den to ye apko krna hoga
				ofstream customer("customer.txt",ios::app);
				string ans=pop();   // displayy();
				customer<<ans;
				ans=pop();
				customer<<"\t"<<ans;
				ans=pop();
				customer<<"\t"<<ans<<"\ttotal_purchase="<<tot_price<<endl; //pop();//as now stack is empty
				customer.close();
			}
			else
			{
				return;
			}
		}
		else 
		{
			return;
		}
	}	
}
int customer::payment(int tot_price)
{
	int k=1;
	while(k>0)
	{		
		int flag=0;
		cout<<"\t\t\t\tTotal Price = |"<<tot_price<<"|\n\n";
		int input_price;
		cout<<"\t\t\t\tProvide Your Total Payment\n\n";
		cout<<"\t\t\t\tEnter:";
		cin>>input_price;
		if(input_price==tot_price)
		{
			flag=1;
			cout<<"\t\t\t\tdone\n\n";
			return 1;
		}
		else
		{
			cout<<"\t\t\t\tinvalid payment\n\n";
		}
		string ch;
		if(flag==0)
		{
			cout<<"\t\t\t\tPlease Enter Your Payment again\n\n";
			cout<<"\t\t\t\tPress 1 for repayment or else leave\n\n";
			cout<<"\t\t\t\tand you cart will be destroyed\n\n";
			cout<<"\t\t\t\tEnter:";cin.ignore();cin>>ch;cout<<endl;
		}
		if(ch=="1")
		{
			k=1;
		}
		else
		{
			k=0;
		}
	}
	return 0;
}
