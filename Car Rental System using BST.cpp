#include <iostream> 
#include <conio.h> 
#include <stdlib.h>
#include "classes.h"
#include "functions.h"
using namespace std;
int main()
{
	BST b, *root = NULL;
	global_root=root = b.Insert(root, 50,"glx",50000,"green","120km/h",5450);
	b.mainmenu();

	getch();
}


