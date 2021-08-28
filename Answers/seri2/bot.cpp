#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class bot
{
	string name;
	float vazn;
	float ghad;
	int age;
	int cheshm;
	int vaziat;
public:
	void read()
	{
		cout<<"enter name:";
		cin>>name;
		cout<<"enter vazn:";
		cin>>vazn;
		cout<<"enter ghad:";
		cin>>ghad;
		cout<<"enter sen:";
		cin>>age;
		cout<<"enter a number for rang cheshm (1 for ghermez 2 for sefid 3 for zard):";
		cin>>cheshm;
		cout<<"enter a number for halat robat (1 for sleep 2 for istade):";
		cin>>vaziat;
	}
	void dast()
	{
		if(vaziat==1)
			cout<<name<<" *(nayaz be sharg darad)*\n";
		if(cheshm==1)
			cout<<name<<" asabani ast & ";
		else if(cheshm==2)
			cout<<name<<" normal ast &  ";
		else if(cheshm==3)
			cout<<name<<" shad ast &  ";
		else cout<<name<<" halati nadarad &  ";
		
		cout<<name<<" darad tashvigh mikonad !\n\n ";
	}
	void pa()
	{
		if(vaziat==1)
			cout<<name<<" *(nayaz be sharg darad)*\n";
		if(cheshm==1)
			cout<<name<<" asabani ast & ";
		else if(cheshm==2)
			cout<<name<<" normal ast &  ";
		else if(cheshm==3)
			cout<<name<<" shad ast &  ";
		else cout<<name<<" halati nadarad &  ";
		cout<<name<<" darad harekat mikonad ! \n\n";
	}
	void sar()
	{
		if(vaziat==1)
			cout<<name<<" *(nayaz be sharg darad)*\n";
		if(cheshm==1)
			cout<<name<<" asabani ast & ";
		else if(cheshm==2)
			cout<<name<<" normal ast &  ";
		else if(cheshm==3)
			cout<<name<<" shad ast &  ";
		else cout<<name<<" halati nadarad &  ";
		cout<<name<<" movafegh ast ! \n\n";
}
};
void main()
{
	bot robot;
	int x=0;
	robot.read();
	while(x>=0)
	{
	cout<<"enter \t 1 for dast \t 2 for pa \t 3 for sar \tand any key for exit\n";
	cin>>x;
	if(x==1)
		robot.dast();
	else if(x==2)
		robot.pa();
	else if(x==3)
		robot.sar();
	else 
	{
		cout<<"error!";
		getch();
		return;
	}
	}
	getch();
}