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

			cout << temp->data << " \n";

			in_order(temp->right);
		}
	}
public:
	node* insert(node* root1, int data)
	{
		node* newnode = new node();
		newnode->left = nullptr;
		newnode->right = nullptr;
		newnode->data = data;
		if (root1 == nullptr)
		{

			root1 = newnode;
		}
		else
		{
			if (data < root1->data)
			{

				root1->left = insert(root1->left, data);
			}
			else
			{

				root1->right = insert(root1->right, data);
			}
		}
		root = root1;
		return root1;
	}

	void inorder()
	{
		node* temp = root;
		in_order(temp);
	}
};