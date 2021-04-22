struct node{
	int data;
	node *next;
};

class LinkList{
protected:
	node * head;
	node * tail;
	int Curr_size;
public:
	virtual void add_node_tail(int)=0;
	virtual void remove_from_head()=0;
	virtual void remove_from_tail() = 0;
	virtual void add_node_head(int) = 0;
	virtual bool Is_empty() = 0;
	virtual void display()=0;
	virtual int front() = 0;
	virtual int back() = 0;
};