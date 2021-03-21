#include<iostream>
#include<conio.h>

using namespace std;

void linear_search(int L[], int n, int item);
void input();
void Display();

void main()
{
	Display();

	_getch();
}
void linear_search(int L[], int n, int item)
{
	int flag = 1;

	for (int i = 0; i < n; i++)
	{
		cout << L[i] << endl;
	}

	for (int i = 0; i < n; i++)
	{
		if (L[i] == item)
		{
			flag = 0;
			cout << "Output Find!" << endl;

		}

	}

	if (flag == 1)
	{
		cout << "Invalid Output!" << endl;
	}



}

void input()
{
	int L[] = { 1, 2, 3, 4, 5 }, n, item;
	int a = 0;

	cout << "Enter The Lenght of Array" << endl;
	cin >> n;
	int temp = 0;
	temp = n;
	L[temp];

	cout << "Enter The Number Of Array" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> L[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << L[i] << endl;
	}
	while (a != -1)
	{


		cout << "Which Number You Want To find Out:";
		cin >> item;

		linear_search(L, n, item);

		cout << "Enter -1 For Exit" << endl;
		cin >> a;
	}

}

void Display()
{
	input();
}