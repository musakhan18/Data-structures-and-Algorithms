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

	void deleteleaf(int data)
	{
		node* current = root;
		node* g_parent = root;
		node* parent = root;
		while (true)
		{
			if (current->data == data || current == nullptr)
			{
				break;
			}
			g_parent = parent;
			parent = current;
			if (current->data > data)
			{
				current = current->left;
			}
			else
			{
				current = current->right;
			}
		}

		if(current!=nullptr)
		{
			bool flag = false;

			

			if (current->left == nullptr || current->right == nullptr)
			{
				cout << "Deleting a node with one child" << endl;
				if (parent->left == current)
				{

					if (current->right == nullptr)
					{
						parent->left = current->left;
					}
					else
					{
						parent->left = current->right;
					}
				}
				else if (parent->right == current)
				{
					if (current->right == nullptr)
					{
						parent->right = current->left;
					}
					else
					{
						parent->right = current->right;
					}
				}
			}

			else if (current->left != nullptr && current->right != nullptr)
			{
				cout << "Deleting a node with Two childs" << endl;
				if (current == root)
				{
					cout << "Deleting Root" << endl;
					node* current2 = current;
					current2 = current2->left;
					while (current2 != nullptr && current2->right != nullptr)
					{
						current2 = current2->right;
					}

					root = current2;
					current2->right = current->right;
					current2->left = current->left;
					node* current3 = current->left;
					while (current3->right != current2)
					{
						current3 = current3->right;
					}
					current3->right = nullptr;
				}
				else
				{
					node* current2 = current;
					current2 = current2->left;
					while (current2 != nullptr && current2->right != nullptr)
					{
						current2 = current2->right;
					}
					if (parent->left == current)
					{

						parent->left = current2;
						current2->right = current->right;
						if (current->left->left != nullptr)
						{
							current2->left = current2->left;
						}
						else
						{
							current2->left = current->left;
							if (current2->left == current2)
							{
								current2->left = nullptr;
							}
						}
						node* current3 = current->left;
						while (current3 != nullptr && current3->right != current2)
						{
							current3 = current3->right;
						}
						if (current3 != nullptr)
						{
							current3->right = nullptr;
						}
					}
					else if (parent->right == current)
					{
						cout << "parent right data:" << parent->right->data << " " << current2->data << endl;
						parent->right = current2;
						current2->right = current->right;
						if (current->left->left != nullptr)
						{
							current2->left = current2->left;
						}
						else
						{
							current2->left = current->left;
							if (current2->left == current2)
							{
								current2->left = nullptr;
							}
						}
						node* current3 = current->left;
						while (current3 != nullptr && current3->right != current2)
						{
							current3 = current3->right;
						}
						if (current3 != nullptr)
						{
							current3->right = nullptr;
						}
					}
				}
			}

			if (current->left == nullptr && current->right == nullptr && current != root)
			{
				cout << "Deleting a leaf Node" << endl;

				if (parent->left == nullptr)
				{
					flag = true;
					if (parent->right->data == data)
					{
						parent->right = nullptr;
					}
				}
				else if (parent->right == nullptr)
				{
					flag = true;
					if (parent->left->data == data)
					{
						parent->left = nullptr;
					}
				}
				if (flag != true)
				{
					if (parent->left->data == data)
					{
						parent->left = nullptr;
					}
					else if (parent->right->data == data)
					{
						parent->right = nullptr;
					}
				}
			}

			if (current->left == nullptr && current->right == nullptr && current == root)
			{
				cout << "Deleting root Node" << endl;
				root = nullptr;
				current = nullptr;
			}
		}
	}

	void preorder()
	{
		node* temp = root;
		pre_order(temp);
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
	node* search(int data)
	{
		node* current = root;
		node* g_parent = root;
		node* parent = root;
		while (true)
		{
			if (current->data == data || current == nullptr)
			{
				break;
			}
			g_parent = parent;
			parent = current;
			if (current->data > data)
			{
				current = current->left;
			}
			else
			{
				current = current->right;
			}
		}
		return current;
	}
};