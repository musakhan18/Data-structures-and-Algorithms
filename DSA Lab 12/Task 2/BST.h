#pragma once
#include<iostream>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;;
};
class BST
{
protected:
	node* root;
public:
	BST()
	{
		root= nullptr;
	}

	void insert(int data)
	{
		node* newnode = new node();
		newnode->left = nullptr;
		newnode->right = nullptr;
		newnode->data = data;
		if (root == nullptr)
		{
			root = newnode;
		}

		else
		{
			node* temp1 = root;
			while (true)
			{
				if (data < temp1->data)
				{
					if (temp1->left == nullptr)
					{
						if (data < temp1->data)
						{
							temp1->left = newnode;
							break;
						}
					}
					temp1 = temp1->left;
				}
				else
				{
					if (temp1->right == nullptr)
					{
						if (data > temp1->data)
						{
							temp1->right = newnode;
							break;
						}
					}
					temp1 = temp1->right;
				}
			}
		}
	}

	void preorder()
	{
		node* temp = root;
		pre_order(temp);
	}

	void postorder()
	{
		node* temp = root;
		post_order(temp);
	}

	void inorder()
	{
		node* temp = root;
		in_order(temp);
	}
	
private:

	void pre_order(node* temp)
	{
		if (temp == nullptr)
		{
			return;
		}
		else
		{
			cout << temp->data << endl;
			pre_order(temp->left);
			pre_order(temp->right);
		}
	}

	void post_order(node* temp)
	{
		if (temp == nullptr)
		{
			return;
		}
		else
		{
			post_order(temp->left);
			post_order(temp->right);
			cout << temp->data << endl;
		}
	}

	void in_order(node* temp)
	{
		if (temp == nullptr)
		{
			return;
		}
		else
		{
			in_order(temp->left);
			cout << temp->data << endl;
			in_order(temp->right);	
		}
	}

};