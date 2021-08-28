

/**
 * simple corona Kit
 *
 * @autor ali kesht kar
 */

#include<iostream>
#include<conio.h>

using namespace std;

class Kit {
	int tab, sorfe, khastegi;
	bool nil;
	
	public:
		int getTab() {return tab + 1;}
		int getSorfe() {return sorfe + 1;}
		int getKhastegi() {return khastegi + 1;}

		bool setTab(int n) {
			if (n < 0 || n > 2) return false;
			tab = n;
			nil = false;
			return true;
		}

		bool setSorfe(int n) {
			if (n < 0 || n > 2) return false;
			sorfe = n;
			nil = false;
			return true;
		}

		bool setKhastegi(int n) {
			if (n < 0 || n > 2) return false;
			khastegi = n;
			nil = false;
			return true;
		}

		bool isNull() {
			return nil!=false;
		}

		int calculate() {
			if ((tab + sorfe + khastegi) >= 4) return 2;
			if ((tab + sorfe + khastegi) >= 2) return 1;
			return 0;
		}
};

int main()
{
	bool error = false;
	char ch = '\0';
	int temp1, temp2, temp3, i=0;
	Kit* kit = new Kit[100];
	
	while (true) {
		
		system("cls");
		cout << "\n\n\t--\tWelcome to the Corona Recognition Program\t--";
		cout << "\n\t--\t(c) By Ali Kesht Kar\t\t\t\t--\t\n\n";
		cout << "\t*\t 1- new Test\n";
		cout << "\t*\t 2- view history\n";
		cout << "\t*\t 3- exit\n";

		ch = _getch();
		system("cls");
		if (ch=='1') {
			error = false; do {
				system("cls");
				cout << "\n";
				if (error)
				cout << "\t******** adad bayad bein 1 & 3 bashad !!! ********";
				cout << "\n\n\tbaraye sheddat Tab az 1 ta 3 yek adad vared konid: ";
				cin >> temp1;
				error = temp1 > 3 || temp1 < 1;
			} while (error);

			error = false; do {
				system("cls");
				cout << "\n";
				if (error)
				cout << "\t******** adad bayad bein 1 & 3 bashad !!! ********";
				cout << "\n\n\tbaraye sheddat Sorfe az 1 ta 3 yek adad vared konid: ";
				cin >> temp2;
				error = temp2 > 3 || temp2 < 1;
			} while (error);

			error = false; do {
				system("cls");
				cout << "\n";
				if (error)
				cout << "\t******** adad bayad bein 1 & 3 bashad !!! ********";
				cout << "\n\n\tbaraye sheddat Khastegi az 1 ta 3 yek adad vared konid: ";
				cin >> temp3;
				error = temp3 > 3 || temp3 < 1;
			} while (error);
			
			kit[i].setTab(--temp1);
			kit[i].setSorfe(--temp2);
			kit[i].setKhastegi(--temp3);
			temp1 = kit[i].calculate();
			i++;
			
			cout << "\n\n\t******** Vaziat Shoma ********\n\n\t";
			if (temp1==2) cout << "Shoma mashkook be corona hastid";
			else if (temp1==1) cout << "Shoma mosta'ed ebtela be corona hastid";
			else cout << "Shoma hich neshani az corona nadarid";
			_getch();
		}
		else if (ch=='2') {
			cout << "  #\t\tTab\tSorfe\tKhastegi\t\tNatije" << "\n";
			cout << "-----------------------------------------------------------------" << "\n";
			for (int j = 0; !kit[j].isNull(); j++){
				cout << " (";
				cout << j+1 << ")\t\t";
				cout << kit[j].getTab() << "\t";
				cout << kit[j].getSorfe() << "\t";
				cout << kit[j].getKhastegi() << "\t";
				cout << "\t\t";
				temp1 = kit[j].calculate();
				if (temp1==2) cout << "mashkook";
				else if (temp1==1) cout << "mosta'ed";
				else cout << "salem";

				cout << "\n";
			}
			_getch();
		}
		else if (ch=='3') {
			break;
		}
	}

	delete[] kit;
	return 0;
}


