#include "RBT.h"
#include <fstream>


bool RBT::is_empty()
{
	if (root == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int RBT::count()
{
	Node* current = root;
	int c = leaf(current);
	return c;
}

int RBT::leaf(Node* current)
{
	if (current == nullptr)
	{
		return 0;
	}
	else
	{
		if (current->leftChild != nullptr || current->rightChild != nullptr)
		{
			return leaf(current->leftChild) + leaf(current->rightChild);
		}
		else
		{
			return 1;
		}
	}
}

void RBT::preorder()
{
	Node* temp = root;
	cout << "root " << temp->data << "   " << temp->colour << endl;
	pre_order(temp);
}

void RBT::postorder()
{
	Node* temp = root;
	cout << "root " << temp->data << "   " << temp->colour << endl;
	post_order(temp);
}

void RBT::inorder()
{
	Node* temp = root;
	cout << "root " << temp->data << "   " << temp->colour << endl;
	in_order(temp);
}

void RBT::pre_order(Node* temp)
{
	if (temp == nullptr)
	{
		return;
	}
	else
	{
		cout << temp->data << "   " << temp->colour << endl;
		pre_order(temp->leftChild);
		pre_order(temp->rightChild);
	}
}

void RBT::post_order(Node* temp)
{
	if (temp == nullptr)
	{
		return;
	}
	else
	{
		post_order(temp->leftChild);
		post_order(temp->rightChild);
		cout << temp->data << "   " << temp->colour << endl;
	}
}

void RBT:: in_order(Node* temp)
{
	if (temp == nullptr)
	{
		return;
	}
	else
	{
		in_order(temp->leftChild);
		cout << temp->data<<"   "<<temp->colour << endl;
		in_order(temp->rightChild);
	}
}

int RBT::height()
{
	Node* current = root;
	int h = max(current);
	return h;
}

int RBT:: max(Node* current)
{
	Node* current2 = current;
	if (current == nullptr)
	{
		return 0;
	}

	else
	{
		current = current->leftChild;
		int L = max(current);
		current2 = current2->rightChild;
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

Node* RBT::check(Node* kaka)
{
	Node* parent = FindParent(kaka->data);
	bool f = 0;
	while (parent != nullptr)
	{
		parent = FindParent(kaka->data);
		if (parent != nullptr && parent->colour == 'r' && kaka->colour == 'r')
		{
			f = 1;
			break;
		}
		else
		{
			kaka = parent;
		}
	}
	if (f==0)
	{
		return nullptr;
	}
	else
	{
		return kaka;
	}
}


void RBT::inorderTraversal()
{
	cout << "root  " << root->data << endl;
	inorderTraversalCode(root);
}
void RBT::inorderTraversalCode(Node* temp)
{
	if (temp != nullptr)
	{
		inorderTraversalCode(temp->leftChild);
		cout << temp->data << " " << temp->colour << endl;
		//cout << temp->colour << endl;
		inorderTraversalCode(temp->rightChild);
	}
}


Node* RBT::FindParent(int val)
{
	if (is_empty())
	{
		cout << "Tree is empty" << endl;
		return 0;
	}
	else
	{
		Node* temp = root;
		/*cout << "\nnode:" << val << endl;*/
		if (val == root->data)
		{
			
			return nullptr;
		}
		while (1)
		{
			if (val > temp->data)
			{
				if (temp->rightChild->data == val&&temp->rightChild!=nullptr)
				{
					return temp;
					break;
				}
				else
				{
					temp = temp->rightChild;
				}
			}
			else if (val < temp->data)
			{
				/*if (temp->leftChild == nullptr)
				{
					break;
				}*/
				if (temp->leftChild->data == val)
				{
					return temp;
					break;
				}
				else
				{
					temp = temp->leftChild;
				}

			}

		}
	}
}
void RBT::rightsinglerotate(Node*n_node)
{
	/*cout << "\nkaka  " << n_node->data;*/
	Node* p_ = FindParent(n_node->data);
	
	Node* gp_ = FindGrandParent(n_node->data);

	Node* ggp_ = FindParent(gp_->data);

	Node* un = FindUncle(n_node->data);
	if (gp_ != nullptr && ggp_->rightChild == gp_)
	{
		ggp_->rightChild = p_;
		p_->rightChild = gp_;
		p_->colour = 'b';
		gp_->colour = 'r';
		gp_->leftChild = nullptr;
	}
	else if (gp_ != nullptr && ggp_->leftChild == gp_)
	{
		ggp_->leftChild = p_;
		p_->rightChild = gp_;
		p_->colour = 'b';
		gp_->colour = 'r';
		gp_->leftChild = nullptr;
	}
	if (gp_==root)
	{
		root = p_;
	}


}

void RBT:: LeftdoubleRotation(Node* Child)
{
	cout << "\nchild:" << Child->data;
	Node* Parent = FindParent(Child->data);
	Node* G_Parent = FindGrandParent(Child->data);
	Node* T = Parent;
	//Parent = Child;
	//Child = T;
	G_Parent->rightChild =Child;
	Child->rightChild = Parent;
	Parent->leftChild = nullptr;
	//Child->leftChild = nullptr;
	cout << "    " << Parent->data << endl;
       leftsinglerotate(Parent);
}


void RBT::RighttdoubleRotation(Node* Child)
{
	cout << "\nchild:" << Child->data;
	Node* Parent = FindParent(Child->data);
	Node* G_Parent = FindGrandParent(Child->data);
	Node* T = Parent;
	//Parent = Child;
	//Child = T;
	G_Parent->leftChild = Child;
	Child->leftChild = Parent;
	Parent->rightChild = nullptr;
	//Child->leftChild = nullptr;
	cout << "    " << Parent->data << endl;
	rightsinglerotate(Parent);
}


void RBT::leftsinglerotate(Node* n_node)
{
	Node* p_ = FindParent(n_node->data);
	cout << "\np:" << p_->data;
	
	Node* gp_ = FindGrandParent(n_node->data);
		cout << "\ngp:" << gp_->data;
	Node* ggp_ = FindParent(gp_->data);
	cout << "\nggp:" << ggp_->data;

	Node* un = FindUncle(n_node->data);
	if (gp_ != nullptr && ggp_->rightChild == gp_)
    {
		cout <<"\nin\n";
		ggp_->rightChild = p_;
		p_->leftChild = gp_;
		p_->colour = 'b';
		if (gp_->colour == 'b')
			gp_->colour = 'r';
		else
			gp_->colour = 'b';
		gp_->rightChild = nullptr;
    }
	else if (gp_ != nullptr && ggp_->leftChild == gp_)
	{
		cout << "\nin1\n";
		ggp_->leftChild = p_;
		p_->leftChild = gp_;
		p_->colour = 'b';
		if (gp_->colour == 'b')
			gp_->colour = 'r';
		else
			gp_->colour = 'b';
		gp_->rightChild = nullptr;
	}
	if (gp_ == root)
	{
		root = p_;
	}

}



Node* RBT::FindGrandParent(int val)
{
	if (is_empty())
	{
		cout << "Tree is Empty" << endl;
		return 0;
	}
	else
	{
		Node* temp = nullptr;
		int x = 0;
		temp = FindParent(val);
		if (temp == nullptr)
		{
			
			return nullptr;
		}
		else
		{
			temp = FindParent(temp->data);
			if (temp == nullptr)
			{
				
				return nullptr;
			}
			else
			{
				return temp;
			}

		}
	}
}

Node* RBT::FindUncle(int val)
{
	if (is_empty())
	{
		cout << "Tree is empty" << endl;
		return nullptr;
	}
	else
	{
		Node* GP =  FindGrandParent(val);
		if (GP != nullptr)
		{
			Node* temp1 = nullptr;
			temp1 = FindParent(val);
			if (GP->rightChild == temp1&&GP->leftChild!=nullptr)
			{
				return GP->leftChild;
			}
			else if (GP->leftChild == temp1 && GP->rightChild != nullptr)
			{
				return GP->rightChild;
			}
			else
			{
				return nullptr;
			}
		}
	}
}


void RBT::RBTinsertionCode(Node* p, int dat)
{
	Node* newNode = new Node;
	newNode->leftChild = nullptr;
	newNode->rightChild = nullptr;
	newNode->data = dat;
	newNode->colour = 'r';

	if (is_empty())
	{
		root = newNode;
		newNode->colour = 'b';
	}
	else
	{
		Node* temp1 = p;
		while (true)
		{
			if (dat < temp1->data)
			{
				if (temp1->leftChild == nullptr)
				{
					if (dat < temp1->data)
					{
						temp1->leftChild = newNode;
						break;
					}
				}
				temp1 = temp1->leftChild;
			}
			else if (dat > temp1->data)
			{
				if (temp1->rightChild == nullptr)
				{
					if (dat > temp1->data)
					{
						temp1->rightChild = newNode;
						break;
					}
				}
				temp1 = temp1->rightChild;
			}
		}
	}

	
	
	while (true)
	{
		Node* Parent = FindParent(newNode->data);
		Node* G_Parent = FindGrandParent(newNode->data);
		Node* Uncle = FindUncle(newNode->data);

			if (Uncle != nullptr && G_Parent != nullptr)
			{
				if (Parent->colour == 'r' && Uncle->colour == 'r' && G_Parent == root)
				{
					Parent->colour = 'b';
					Uncle->colour = 'b';
				}
				if (Parent->colour == 'r' && Uncle->colour == 'r' && G_Parent != root)
				{
					Parent->colour = 'b';
					Uncle->colour = 'b';
					G_Parent->colour = 'r';
				}
			}

			else if (Parent != nullptr && Parent->colour == 'r' && (Uncle == nullptr || Uncle->colour == 'b') && G_Parent != root)
			{
				
				if (G_Parent->leftChild == Parent && Parent->leftChild == newNode)
				{
					
					rightsinglerotate(newNode);
				}
				else if (G_Parent->rightChild == Parent && Parent->rightChild == newNode)
				{
					
					leftsinglerotate(newNode);
				}
				else if (G_Parent->leftChild == Parent && Parent->rightChild == newNode)
				{
				
					RighttdoubleRotation(newNode);
				}
				else if (G_Parent->rightChild == Parent && Parent->leftChild == newNode)
				{
				
					LeftdoubleRotation(newNode);
				}
			}
			Node* t = nullptr;
			Node* temp = FindParent(newNode->data);
			if(temp!=nullptr)
			{
				 t = check(temp);
			}
		
		if (t == nullptr)
		{
			break;
		}
		else
		{
			newNode = t;
		
		}
		

	}

}