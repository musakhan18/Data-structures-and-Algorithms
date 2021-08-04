struct node{
	int data;
	node *next;
};

class C_linklist
{
protected:
	node * head;
	node *tail;
public:
	virtual void add_node_head(int)=0;
	virtual void add_node_tail(int) = 0;
	virtual void remove_from_head()=0;
	virtual void remove_from_tail() = 0;
	virtual void display()=0;
};