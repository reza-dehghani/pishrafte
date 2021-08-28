#include<iostream>
#include<conio.h>

using namespace std;

class Point
{
	float x, y;
public:
	Point(float x, float y)
	{
		x = x;
		y = y;
	}
	/************* copy constructor *******************/
	Point(const Point &p2)
	{
		x = p2.x;
		y = p2.y;
	}
	/***************************/
	void negetive()
	{
		x = -x;
		y = -y;
	}
	void varon()
	{
		x = 1 / x;
		y = 1 / y;
	}
	void place()
	{
		if (x == 0 && y == 0)
			cout << "Origin of coordinates";
		else if (x >= 0 && y >= 0)
			cout << "The first quarter";
		else if (x <= 0 && y >= 0)
			cout << "The second quarter";
		else if (x <= 0 && y <= 0)
			cout << "The third quarter";
		else if (x >= 0 && y <= 0)
			cout << "The fourth quarter";
		_getch();
	}
	void getX()
	{
		cout << "Enter x : ";
		cin >> x;
		system("cls");
	}
	void getY()
	{
		cout << "Enter y : ";
		cin >> y;
		system("cls");
	}
	void print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
		_getch();
		system("cls");
	}
};
void main()
{
	bool t = true;
	char c;
	Point p1(0 , 0);
	Point p2 = p1;
	p2.getX();
	p2.getY();
	while (t == true)
	{
		system("cls");
		cout << "Choose an option : \n";
		cout << "1. For negetive\n";
		cout << "2. For varon\n";
		cout << "3. For place x & y\n";
		cout << "4. For new x & y\n";
		cout << "Press any key to Exit....\n";
		c = _getch();
		switch (c)
		{
		case '1': p2.negetive();
			p2.print();
			break;
		case '2': p2.varon();
			p2.print();
			break;
		case '3': p2.place();
			break;
		case '4': p2.getX();
			p2.getY();
			break;
		default: t = false;
		}
	}
}