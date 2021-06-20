bool isPalindrome()
{
	int s = 0;
	node* temp = head;
	while (temp != nullptr)
	{
		s++;
		temp = temp->next;
	}

	char t;
	node* temp1 = head;
	node* temp2 = head;
	bool flag = 0;
	bool p = 1;
	int c = 0;
	bool w = 0;
	while (flag == 0 || c < s)
	{
		w = 0;
		temp1 = head;
		while (w == 0)
		{
			if (temp1->next == nullptr)
			{
				t = temp1->data;
				temp1 = nullptr;
				w = 1;
				break;
			}
			temp1 = temp1->next;
		}
		if (t != temp2->data)
		{
			p = 0;
			flag = 1;
			break;
		}
		c++;
		temp2 = temp2->next;
	}
	return p;
}