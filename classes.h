#include <iostream> 
#include <conio.h> 
#include <stdlib.h>
using namespace std;

class BST {
	int carno,price,rent;
	string name,color,speed;
	BST *left, *right;
	
public:
	BST();

	BST(int,string,int,string,string,int);

	BST* Insert(BST*, int,string,int,string,string,int);
	void Inorder(BST*);
	void update(BST*,int);
	int rent_car_display(BST*,int);
	int pay_rent(int);
	int InorderReader(BST*);
	BST*deleteInBST(BST*,int);
	BST*inorderSucc(BST*);
	void insertAll();
	void mainmenu();
	void menu();
	void car_rent();
	void Rent_Menu();
	int login();
};
static int total_rent;
BST *global_root;

