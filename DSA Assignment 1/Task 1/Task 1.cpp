#include <iostream>
#include<fstream>
#include<string>
#include"myStack.h"
using namespace std;

int GetSize(char*);
int** Make2D(int);
int** SolveMaze(int, int[4][4]);
void display(int ,int**);

int main()
{
	char* Fname = new char[20]{ 'T','e','x','t','.','t','x','t','\0' };

	ifstream file;
	file.open(Fname);
	if (file)
	{
		const int s = GetSize(Fname);
		int maze[4][4];
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				file >> maze[i][j];
			}
		}
		file.close();

		cout << "Maze" << endl;
		cout << "-----" << endl;
		for (int i = 0; i < s; i++)
		{
			for (int j = 0; j < s; j++)
			{
				cout << maze[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		int** sol = SolveMaze(s, maze);

		display(s, sol);
	}
	else
	{
		cout << "Error" << endl;
		cout << "File don't open" << endl;
	}
}

int GetSize(char* Fname)
{
	ifstream file;
	file.open(Fname);
	string str;
	int s = 0;
	while (getline(file, str))
	{
		s++;
	}
	return s;
}

int** Make2D(int s)
{
	int** arr = new int* [s];
	for (int i = 0; i < s; i++)
	{
		arr[i] = new int[s];
	}
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			arr[i][j] = 0;
		}
	}
	return arr;
}

void display(int s, int** arr)
{
	ofstream fout;
	fout.open("output.txt");
	cout << "Solution" << endl;
	cout << "---------" << endl;
	fout << "Solution" << endl;
	fout << "---------" << endl;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			cout << arr[i][j] << " ";
			fout << arr[i][j] << " ";
		}
		cout << endl;
		fout << endl;
	}
	cout << endl;
	cout << "Data successfully saved in file!!" << endl;
}

int** SolveMaze(int s, int maze[4][4])
{
	int** sol = Make2D(s);
	int x_com = 0;
	int y_com = 0;
	myStack X_Components(100);
	myStack Y_Components(100);
	X_Components.AddElement(x_com);
	Y_Components.AddElement(y_com);

	while (!X_Components.IsEmpty()&& !Y_Components.IsEmpty())
	{
		//right
		if (maze[x_com][y_com + 1] == 1)
		{
			maze[x_com][y_com] = -1;
			sol[x_com][y_com] = 2;
			X_Components.AddElement(x_com);
			Y_Components.AddElement(y_com);
			y_com++;
		}
		//left
		else if (maze[x_com][y_com - 1] == 1)
		{
			maze[x_com][y_com] = -1;
			sol[x_com][y_com] = 2;
			X_Components.AddElement(x_com);
			Y_Components.AddElement(y_com);
			y_com--;
		}
		//down
		else if (maze[x_com + 1][y_com] == 1)
		{
			maze[x_com][y_com] = -1;
			sol[x_com][y_com] = 2;
			X_Components.AddElement(x_com);
			Y_Components.AddElement(y_com);
			x_com++;
		}
		//up
		else if (maze[x_com - 1][y_com] == 1)
		{
			maze[x_com][y_com] = -1;
			sol[x_com][y_com] = 2;
			X_Components.AddElement(x_com);
			Y_Components.AddElement(y_com);
			x_com--;
		}
		else
		{
				if (maze[x_com - 1][y_com] == -1)
				{
					maze[x_com][y_com] = 0;
					y_com = Y_Components.RemoveElement();
					x_com = X_Components.RemoveElement();
				}
				else if (maze[x_com + 1][y_com] == -1)
				{
					maze[x_com][y_com] = 0;
					y_com = Y_Components.RemoveElement();
					x_com = X_Components.RemoveElement();
				}
				else if (maze[x_com][y_com - 1] == -1)
				{
					maze[x_com][y_com] = 0;
					y_com = Y_Components.RemoveElement();
					x_com = X_Components.RemoveElement();
				}
				X_Components.RemoveElement();
				Y_Components.RemoveElement();
			sol[s - 1][s - 1] = 2;
		}
	}
	
	return sol;
}