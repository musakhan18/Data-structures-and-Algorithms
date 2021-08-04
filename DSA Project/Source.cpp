#include "RBT.h"
int Menu();
int main()
{

	RBT a;
	bool f = 0;
	do
	{
		int c = Menu();
		if (c==1)
		{
			int x;
			cout << "Enter value to insert: "; cin >> x;
			a.RBTinsertion(x);
			cout << "Value added Successfully" << endl << endl;
		}
		if (c==2)
		{
		


			cout << "In Order Traversal" << endl;
			cout << "-------------------" << endl;
			a.inorder();
			cout << endl;
		}
		if (c==3)
		{
			cout << "Post Order Traversal" << endl;
			cout << "---------------------" << endl;
			a.postorder();
			cout << endl;
		}
		if (c==4)
		{
			cout << "Pre Order Traversal" << endl;
			cout << "--------------------" << endl;
			a.preorder();
			cout << endl;
		}
		if (c==5)
		{
			cout << "Height of Tree: " << a.height() << endl << endl;
		}
		if (c==6)
		{
			cout << "Number of leaf Nodes: " << a.count() << endl << endl;
		}
		if (c==7)
		{
			cout << "\t\t       ************************** Good Bye *************************" << endl;
			f = 1;
		}
	} while (f==0);


}


int Menu()
{
	cout << "\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "\t\t\t************************** MENU **************************" << endl;
	cout << "\t\t\t*** 1-> Insert a value into the red black tree.        ***" << endl;
	cout << "\t\t\t*** 2-> Display In - order traversal of the RB tree.   ***" << endl;
	cout << "\t\t\t*** 3-> Display Post - order traversal of the RB tree. ***" << endl;
	cout << "\t\t\t*** 4-> Display Pre - order traversal of the RB tree.  ***" << endl;
	cout << "\t\t\t*** 5-> Display the height of the RB tree.             ***" << endl;
	cout << "\t\t\t*** 6-> Display the count of leaf nodes in RB tree.    ***" << endl;
	cout << "\t\t\t*** 7-> ******************* Exit *************************" << endl;
	cout << "\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	int c;
	cin >> c;
	cout << endl;
	return c;
}
