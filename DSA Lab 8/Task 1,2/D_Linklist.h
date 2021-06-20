
struct node
{
	int data;
	node * next;
	node *prev;
};

class D_Linklist
{
protected:
	node * head;
	node * tail;
public:
	virtual void add_node_tail(int)=0;
	virtual void add_node_aftervalue(int,int)=0;
	virtual void remove_node(int) = 0;
	virtual void display()=0;
	virtual void addnodeHead(int data) = 0;
	virtual int count() = 0;
	virtual void sortascending() = 0;
	virtual void sortDescending() = 0;
	virtual ~D_Linklist()
	{
		head = nullptr;
		tail = nullptr;
	}
};