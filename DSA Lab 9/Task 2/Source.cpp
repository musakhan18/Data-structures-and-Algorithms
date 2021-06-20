#include"MyDlist.h"
#include<iostream>
using namespace std;

int main()
{
	MyDlist* obj = new MyDlist();
	MyDlist* obj1 = new MyDlist();
	obj->add_node_tail(3);
	obj->add_node_tail(2);
	obj->add_node_tail(4);
	obj->add_node_tail(6);
	obj->add_node_tail(8);
	cout << "Linked List" << endl;
	cout << "------------" << endl;
	obj->display();


	cout << "Sorted Insert" << endl;
	cout << "--------------" << endl;
	obj->sortedInsert(27);
	obj->display();


	cout << "Count of elements in the Link List: " << obj->count() << endl << endl;
	
	cout << "Value at nth Postion: " << obj->GetNth(3) << endl << endl;

	cout << "After Inserting value Nth Position" << endl;
	cout << "-----------------------------------" << endl;
	cout << "Linked List" << endl;
	cout << "------------" << endl;
	obj->insertNth(3, 4);
	obj->display();

	cout << "Poped Value: " << obj->Pop() << endl << endl;

	cout << "Reversed Linked List" << endl;
	cout << "---------------------" << endl;
	obj->reverse();
	cout << "Linked List" << endl;
	cout << "------------" << endl;
	obj->display();

	cout << "Insert Sort" << endl;
	cout << "------------" << endl;
	cout << "Linked List" << endl;
	cout << "------------" << endl;
	obj->insertsort(10);
	obj->display();

	obj1->add_node_tail(9);
	obj1->add_node_tail(8);
	obj1->add_node_tail(1);
	obj1->add_node_tail(7);
	obj1->add_node_tail(6);
	obj1->add_node_tail(5);
	obj->addnodeHead(4);
	cout << "New Link List:" << endl;
	cout << "---------------" << endl;
	obj1->display();

	cout << "Appende List" << endl;
	cout << "-------------" << endl;
	obj->append(obj, obj1);
	cout << "After Append Link List 2" << endl;
	cout << "-------------------------" << endl;
	obj1->display();

	cout << "Count of Elements in Appended Link List: " << obj->count() << endl << endl;

	cout << "After Removal of Duplicates" << endl;
	cout << "----------------------------" << endl;
	obj->RemoveDuplicates();
	obj->display();

	cout << "Elements left After removal of Duplicates: " << obj->count() << endl<<endl;

	obj1->add_node_tail(4);
	obj1->add_node_tail(3);
	obj1->add_node_tail(2);

	cout << "Link List 2" << endl;
	cout << "------------" << endl;
	obj1->display();

	cout << "Shuffle Merge" << endl;
	cout << "--------------" << endl;
	obj->shuffleMerge(obj, obj1);
}