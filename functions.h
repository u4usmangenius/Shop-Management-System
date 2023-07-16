#include <iostream> 
#include <conio.h> 
#include <stdlib.h>
using namespace std;
BST ::BST()
{
 	carno=0;
	left=NULL;
	right=NULL;
}
BST ::BST(int ncarno,string nam,int pric,string colr,string sped,int rentt)
{
	carno= ncarno;
	price=pric;
	name=nam;
	color=colr;
	speed=sped;
	rent=rentt;
	left = right = NULL;
}

BST* BST ::Insert(BST* root, int ncorno,string car_name,int pric,string colr,string sped,int rentt)
{
	if (!root) {
		return new BST(ncorno,car_name,pric,colr,sped,rentt);
	}
	if (ncorno > root->carno) {

		root->right = Insert(root->right, ncorno,car_name,pric,colr,sped,rentt);
	}
	else if (ncorno < root->carno){
		root->left = Insert(root->left, ncorno,car_name,pric,colr,sped,rentt);
	}

	return root;
}

void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	
	Inorder(root->left);
	cout << root->carno <<"\t"<<root->name<<"     \t"<<root->price<<"    \t";
	cout<<root->color<<"     \t"<<root->speed<<"     \t"<<root->rent<< endl;
	Inorder(root->right);
}
void BST ::update(BST* root,int value)
{
	if (!root) {
		return;
	}
	
	update(root->left,value);
	if(root->carno==value)
	{
		cout<<"hellllo"<<endl;
		int carno,pric,rentt;
		string name,color,speed;
		cout<<"Enter new car id/car_number:";cin>>carno;
		cout<<"Enter new car name:";cin>>name;
		cout<<"Enter new car price:";cin>>pric;
		cout<<"Enter new car color:";cin>>color;
		cout<<"Enter new car speed:";cin>>speed;
		cout<<"Enter new car rent per day:";cin>>rentt;
		root-> carno = carno ;
		root-> name = name ;
		root-> price = pric;
		root-> color = color ;
		root-> speed = speed ;
		root-> rent = rentt ;
		return;
		
	}
	update(root->right,value);
}
int BST::rent_car_display(BST *root,int value)
{
	if (!root) {
		return 0;
	}
	rent_car_display(root->left,value);
	if(root->carno==value)
	{
		BST b;
		int check_rent,rnt,days;
	cout<<"\n\nYou have selected following car see details-->\n\n";
	cout <<"with car ID= " <<root->carno  <<"         \t\t"<<"with car Name= "<<root->name<<"\n";
	cout<<"with car color= "<<root->color <<"     \t\t"<<"with car speed= ";
	cout<<root->speed<<"\n\n\t\t   ***with Rent="<<root->rent<<"***"<< endl<<endl<<endl;
	cout<<"Enter number of days for taking car at rent:";cin>>days;
		total_rent=days*root->rent;
		cout<<"Total rent====>=::"<<total_rent<<endl;
		cout<<"Check Your Rent:"<<total_rent<<endl;
		cout<<"Please Payment your Rent"<<endl<<endl;
		check_rent=b.pay_rent(total_rent);
		string chc;
		if(check_rent!=total_rent)
		{
			cout<<"Please pay your complete rent else you can't\ntake car at rent\n";
			cout<<"OR press 1 to leave the shop:";cin>>chc;
			if(chc=="1")
			{
				return 0;
			}
			else
			{
			b.pay_rent(total_rent);
			}
	}

	
		return 0;	
	}
	rent_car_display(root->right,value);
}
int BST::pay_rent(int rent)
{
	BST b;
	int receive_rent;
	cout<<"Please pay your Total Rent Amount:";
	cin>>receive_rent;
	if(receive_rent==rent ) 
	{
		cout<<"\nThankyou for paying your Rent\n\nYou can take care at rent"<<endl<<endl;
	}
	else if(receive_rent>rent)
	{
		cout<<"\nPlease Pay the amount equal to total rent:"<<endl<<endl;
		b.pay_rent(rent);		
	}
	else
	{
		cout<<"\nSorry You have insufficient balance to pay total rent:"<<endl<<endl;		
	}
	return receive_rent;
}
int BST ::InorderReader(BST* root)
{
	if (!root) {
		return root->carno;
	}
	
	InorderReader(root->left);
	InorderReader(root->right);
}

BST *BST::inorderSucc(BST*root)
{
	BST *curr=root;
	while
	(	curr && curr->left!=NULL)
	{
		curr=curr->left;
	}
	return curr;
}
BST*BST::deleteInBST(BST*root,int key)
{
	if(key<root->carno)
	{
		root->left=deleteInBST(root->left,key);
	}	
	else if(key>root->carno)
	{
		root->right=deleteInBST(root->right,key);
	}
	else
	{
		if(root->left==NULL)
		{
			BST *temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			BST *temp=root->left;
			free(root);
			return temp;
		}
		//usman agr kuch mzeed add kro to idhar krna mat bholna
		BST *temp=inorderSucc(root->right);
		root->carno=temp->carno;
		root->name=temp->name;
		root->price=temp->price;
		root->color=temp->color;
		root->speed=temp->speed;
		root->rent=temp->rent;
		root->right=deleteInBST(root->right,temp->carno);
	}
	return root;
}
void BST::insertAll()
{
	cout << "CAR-ID" <<"\t"<<"CAR-Name"<<"     \t"<<"CAR-Price"<<"    \t";
	cout<<"CAR-Color"<<"     \t"<<"CAR-Speed"<<"     \t"<<"CAR-Rent"<< endl;
	BST b,*root=global_root;
	b.Insert(root, 30,"gli",40000,"yellow","130km/h",3000);
	b.Insert(root, 20,"Hyundia",30000,"blue","220km/h",2000);
	b.Insert(root, 40,"civic",20000,"orange","100km/h",4000);
	b.Insert(root, 70,"corola",60000,"white","150km/h",5000);
	b.Insert(root, 60,"motrola",12000,"red","180km/h",6000);
	b.Insert(root, 80,"cheaper",45000,"yellow","250km/h",8000);
	b.Insert(root, 100,"leaper",45000,"green","110km/h",9000);
	b.Insert(root, 110,"teaper",54000,"blue","70km/h",1000);
	b.Insert(root, 90,"heaper",32000,"blue","140km/h",7000);	
	b.Inorder(root);

}
void BST::Rent_Menu()
{
	BST b;
	string ch,choice;
	int i=1;
	while(i>0)
	{
//		cout<<"this is rental system menu\n";
		cout<<"Enter 1 for rent a car:"<<endl;
		cout<<"Enter 2 display all cars:"<<endl;
		cout<<"Enter 3 for exist"<<endl;
		cout<<"Enter choice:";cin>>choice;
		if(choice=="1")
		{
			b.car_rent();
		} 
		else if(choice=="2")
		{
			b.insertAll();
		}
		else if(choice=="3")
		{
			return;
		}
		else 
		{
			cout<<"Do you want to continue to use this function,press 1";cin>>ch;
			if(ch=="1")
			{
				i=1;
			}
			else
			{
				break;
			}
		}
	}
	
}
void BST::car_rent()
{
	BST b;
	cout<<"\t\t\t<<<<<<------------------------------------------->>>>>>>\n";
	cout<<"\t\t\t\tYou have following available cars\n";
	cout<<"\t\t\t\tplease see and select one of them"<<endl;
	cout<<"\t\t\t<<<<<<-------------------------------------------->>>>>>>\n";
	b.insertAll();
	cout<<endl<<endl;
	int id,res;
	cout<<"Enter ID for selecting any car from above:";
	cin>>id;
	res=b.rent_car_display(global_root,id);
	if(res==0)
	{
		string ch;
//		cout<<"Sorry The Car with "<<id<<" does not exist in our shop"<<endl<<endl;
		cout<<"Do you want to check for another car,press 1:";cin>>ch;
		if(ch=="1")
		{
			b.car_rent();
		}
		else
		{
			return;
		}
	}
}
int BST::login()
{
	string username,name,password,pass;
	username="usman",password="1234";
	cout<<"Enter user name:";
	cin>>name;
	cout<<"Enter user password:";
	cin>>pass;
	if(name==username && password==pass)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void BST::menu()
{
	
	int i=1,logging_in;
	BST *root=global_root,*find,b;
	logging_in=b.login();
	if(logging_in!=1)
	{
		cout<<"\nSorry You entered invalid password"<<endl;
		cout<<"You are not an admin"<<endl;
		cout<<"Enter Correct Login's for next time"<<endl<<endl;
		return;
	}
	else
	{
		cout<<"\nYou entered correct logins so you can use admin functions\n\n";
	}
	string choice,ch;
			int id;
	while(i>0)
	{
		cout<<"Enter 1 for insertall"<<endl;
		cout<<"Enter 2 for dlelte"<<endl;
		cout<<"Enter 3 for update"<<endl;
		cout<<"Enter 4 for exit"<<endl;
		cout<<"------Enter--------::";
		cin>>choice;
		if(choice=="1")
		{
			b.insertAll();
		}
		//data run time pr hi aaye ga aur run time pr hi delete hoga agr display kye
		//begair delete or update kro gy to nahi hoga because all is run timee
		else if(choice=="2")
		{
			cout<<"Enter carno/id to delete:";
			cin>>id;
//			b.InorderReader(global_root);
			BST *check;
			check=b.deleteInBST(global_root,id);
			if(check==NULL)
			{
				cout<<"Sorry the car with "<<id<<" does not exist"<<endl;
				return;
			}
			b.Inorder(global_root);
		}
		else if(choice=="3")
		{
			cout<<"669"<<endl;
			int id;
			cout<<"Enter a value to update:";
			cin>>id;
//usman value update ho gae ha congratulations but the issue is that update hony ky bad
//jb ham dobara displayall krty hen to wo udhar updated wali value aur jisko update kia
//gya hota ha wo dono hi show hoti hen because all is at run time and when it is reexecuted
//then update hony wali aur update ho jany wali dono values hi show hoti hen so don't worry
//it's all at runtime....<<<---Be Smile--->>>
			b.update(global_root,id);
			b.Inorder(global_root);
		}
		else if(choice=="4")
		{
			break;
		}		
		else
		{
			cout<<"Do you want to continue,press Y/y:";cin>>ch;
			if(ch=="y" || ch=="Y")
			{
				i=1;
			}
			else
			{
				i=0;
			}
		}
	}
}
void BST::mainmenu()
{
	BST b;string choice,ch;int i=1;
	while(i>0)
	{
		cout<<"Enter 1 for Admin Menu"<<endl;
		cout<<"Enter 2 for Rent Menu"<<endl;
		cout<<"Enter 3 for Exit"<<endl;
		cout<<"<<<----Enter---->>>:";cin>>choice;
		if(choice=="1")
		{
			b.menu();	
		}
		else if(choice=="2")
		{
			b.Rent_Menu();
		}
		else if(choice=="3")
		{
			break;
		}
		else
		{
			cout<<"Do you want to continue to use <<-Mainmenu->>\n";
			cout<<"Press Y/y:";cin>>ch;
			if(ch=="y" || ch=="Y")
			{
				i=1;
				choice="hello";
			}
			else
			{
				i=0;
			}
		}
	}
}

