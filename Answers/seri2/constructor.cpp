#include <iostream>
#include <conio.h>
using namespace std;

class Date
{
	int day,month,year;
public:
	Date(int d,int m,int y)
	{
		if (y < 0 || m < 1 || m > 12 || d < 1 || (m < 7 && d > 31) || (m > 6 && m < 12 && d > 30) || (m == 12 && d > 29))
            abort();
		day=d;
		month=m;
		year=y;
	}
	~Date()
	{
		cout<<"distroide object";
	}
	void print_date(); 
};


void Date::print_date()
{
    cout << year << '/' << month << '/' << day << endl;
}

void main()
{
	int d,m,y;
	cin>>d>>m>>y;
	Date deadline(d,m,y);
	deadline.print_date();
	getch();
};