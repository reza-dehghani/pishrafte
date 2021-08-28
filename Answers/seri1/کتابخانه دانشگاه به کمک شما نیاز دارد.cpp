// نوشتن ساختار کتاب
// ایجاد نمونه از ساختار برای کتاب ها
// نوشتن برنامه main
// تست کتاب ها منو برنامه

#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip> // برای چاپ بهتر اطلاعات کتاب در کنسول

int number;

#define number 9999


using namespace std;

struct book {
	bool status;
	string name;
	string author;
	string translator;
	long long shabak;
	string pub;
	int year;
	long int no;
};

//functions
void addbook();
void printbook();

int main(){
	int i =0;
	book* list = new book[number];
	
	//اضافه کردن کتاب
	addbook();
	
	// چاپ کتاب
	printbook();
	
	
	return 0;
}

void addbook(){
		cout<<"Enter NO of book: ";
	cin>> list[i].no;
	cout<<"Enter name of book: ";
	cin>>list[i].name;
	cout<<"Enter status (if has 1 else 0)";
	cin>>list[i].status;
	cout<<"Enter author(s)"; 
	cin>>list[i].author;
	cout<<"Enter translator(s)";
	cin>> list[i].translator;
	cin.ignore();
	cout<<"Enter shabak"; 
	cin>>list[i].shabak;
	cout<<"Enter pub"; 
	cin>>list[i].pub;
	cout<<"Enter year";
 	cin>>list[i].year;
	i++;
}

void printbook(){
		for(int j =0 ; j<i; j++){
		cout<<" NO: " << list[j].no << "\t Name: " << list[j].name << "\t status: " << list[j].status << "\t author(s): " << list[j].author
		<< "\t translator(s): " << list[j].translator << "\t ShabakNo: " << list[j].shabak << "\t Pub: " << list[j].pub << "\t year of print: " << list[j].year << endl;
	}
}