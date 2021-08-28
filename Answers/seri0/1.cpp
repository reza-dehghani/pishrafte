#define n  3

#include <iostream>
#include <string>
using namespace std;


struct contact{
	string name;
	string lname;
	string number;
};


int main(){
	contact temp;
	string name, lname, number;
	contact* contact1 = new contact[n];
	for (int i =0 ; i<3 ; i++){
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter last name: ";
			cin>>lname;
			cout<<"Enter number: ";
			cin>>number;
			contact1[i].name = name;
			contact1[i].lname = lname;
			contact1[i].number = number;
	}
	for(int i =0 ; i<2 ; i++){
		for(int j =i+1 ; j < 3 ; j++){
			if(contact1[i].lname > contact1[j].lname){
				temp = contact1[i];
				contact1[i] = contact1[j];
				contact1[j] = temp;
			}
		}
	}
	for(int i =0 ; i<3 ; i++){
		cout<<"#"<<i+1<<": "<< contact1[i].lname<<"\t"<<contact1[i].name<<"\t"<<contact1[i].number<<endl;
	}
	return 0;
}