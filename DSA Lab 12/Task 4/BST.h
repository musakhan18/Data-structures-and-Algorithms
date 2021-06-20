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

	int count()
	{
		node* current = root;
		int c = leaf(current);
		return c;
	}
	
private:
	int leaf(node*current)
	{
		if (current == nullptr)
		{
			return 0;
		}
		else
		{
			if (current->left != nullptr || current->right != nullptr)
			{
				return leaf(current->left) + leaf(current->right);
			}
			else
			{
				return 1;
			}
		}
	}
};