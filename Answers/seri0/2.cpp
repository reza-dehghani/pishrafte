#include <iostream>
using namespace std;

//ماتریس ها رو از کاربر بگیریم

//حاصلضرب

//ترانهاده حاصلضرب رو بدست بیاریم


int main(){
	int p, n , q, t;
	cout<<"Enter p (satrhay matrix A): ";
	cin>>p;
	cout<<"Enter n(soton matrix A): ";
	cin >> n;
	
	while(1){
        cout<<" Tedad satr haye matris B : ";
        cin>>t;
        if(n == t)
			break;
        cout<<"tedad stoon ha az matris A bayad ba tedad satr ha az matris B barabar bashad.\n dobare vared konid\n";
    }
    cout<<" Tedad sotoon haye matris B ra vared konid : ";
    cin>>q;
	
	int **a = new int*[p];
	for(int i =0 ; i < p; i++)
		a[i] = new int[n];
		
	int **b = new int*[n];
	for(int i =0; i<n ; i++)
		b[i] = new int[q];
	
	int **r = new int*[p];
	for(int i =0; i<p ; i++)
		r[i] = new int[q];
	
	for(int i=0 ; i<p ; i++)
		for(int j=0; j < n ; j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin >> a[i][j];
		}
		
		for(int i=0 ; i<n ; i++)
		for(int j=0; j < q ; j++){
			cout<<"b["<<i<<"["<<j<<"]: ";
			cin >> b[i][j];
		}
		
		cout<<endl;
		for (int i =0 ; i<p ; i++)
		{
			for(int j = 0 ; j<q ; j++){
				r[i][j] = 0;
				for(int k =0 ; k< n ; k++){
					r[i][j] += a[i][k] * b[k][j];
			}
				cout<<' '<<"r["<<i<<"["<<j<<"]: "<<r[i][j]<<'\t';
			}
			cout<<endl;
		}
		cout<<"Matrix Taranahade= \n";
		
		
		for (int i =0 ; i<q ; i++){
			for(int j = 0 ; j<p ; j++){
				cout<<' '<<"r["<<j<<"["<<i<<"]: "<<r[j][i]<<'\t';
			}
			cout<<endl;
		}
	
	for(int i = 0; i < n; i++)
	{
		delete[] a[i],b[i],r[i];
	}
	delete[] a , b , r;
	
	return 0;
}