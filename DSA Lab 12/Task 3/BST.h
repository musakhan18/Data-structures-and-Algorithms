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
	int max(node* current)
	{
		node* current2 = current;
		if (current == nullptr)
		{
			return 0;
		}

		else
		{
			current = current->left;
			int L = max(current);
			current2 = current2->right;
			int R = max(current2);

			if (L > R)
			{
				L++;
				return L;
			}
			else
			{
				R++;
				return R;
			}
		}
	}

public:
	BST()
	{
		root = nullptr;
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

	int height()
	{
		node* current = root;
		int h = max(current);
		return h + 1;
	}
};