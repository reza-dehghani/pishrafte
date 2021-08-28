#include <iostream>
#include <string>
using namespace std;

class employee {
	string name;
	long int code;
	int salary, hours;
public:
	employee(string name, long int code) {
		employee::name = name;
		employee::code = code;
	}
	void getinfo(int salary, int hours) {
		employee::salary = salary;
		employee::hours = hours;
	}
	void get_salary() 
	{
		cout << salary << "$";
	}
	bool add_sal()
	{
		if (employee::salary < 500) {
			employee::salary += 10;
			return 1;
		}
		else
			return 0;
	}

	bool AddWork()
	{
		if (employee::hours > 6) {
			employee::salary += 5;
			return 1;
		}
		else return 0;
	}

	void print() {
		cout << "\nName: " << name << "\nID: " << code << "\nsalary: " << salary << "\nworking hours of today: " << hours;
	}
};

int main()
{
	employee master_emp("Hadi Nemati", 123456);
	master_emp.getinfo(90, 10);
	master_emp.print();
	cout << endl;
	
	if (master_emp.add_sal()) 
	{
		cout << "succussfully added 10$ beacuse of less salary.";
	}
	if (master_emp.AddWork())
	{
		cout << "\nsuccussfully added 5$ beacuse of overtime.";
	}

	cout << "\nNew value is = ";
	master_emp.get_salary();
	cout << endl;
	return 0;
}