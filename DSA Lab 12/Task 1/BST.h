#pragma once
#include<iostream>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};
class BST
{
protected:
	node* root;
private:
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

	void searching(node* current, int data)
	{
		if (current != nullptr)
		{
			if (data == current->data && current != nullptr)
			{
				cout << "Element Found: " << data << endl;
				return;
			}
			else if (data < current->data && current != nullptr)
			{
				current = current->left;
				searching(current, data);
			}
			else if (data > current->data && current != nullptr)
			{
				current = current->right;
				searching(current, data);
			}
		}
		else
		{
			cout << "Data Not found: " << data << endl;
		}
	}

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
					if (temp1->left==nullptr)
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

	void inorder()
	{
		node* temp = root;
		in_order(temp);
	}

	void search(int data)
	{
		node* current = root;
		searching(current, data);
	}
};