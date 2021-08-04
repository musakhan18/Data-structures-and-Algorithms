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

	void m_tree()
	{
		node* current = root;
		Mirroring(current);

	}
	void inorder()
	{
		node* temp = root;
		in_order(temp);
	}

	void PrintLeft()
	{
		node*temp = root;
		while (temp!=nullptr)
		{
			cout << temp->data << " ";
			temp = temp->left;
		}
		cout << endl;
		/*print(temp);*/
	}

private:
	
	void Mirroring(node*current)
	{
		if (current == nullptr)
		{
			return;
		}
		else
		{
			swap(current->left, current->right);
			Mirroring(current->left);
			Mirroring(current->right);
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
			cout << temp->data <<" ";
			in_order(temp->right);
		}
	}

	void print(node* temp)
	{
		if (temp==nullptr)
		{
			return;
		}
		else
		{
			cout << temp->data << " ";
			print(temp->left);
		}
	}

};