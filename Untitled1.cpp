#include <iostream>
using namespace std;
int main(){	
int a;
int n;
int c;
int b;
while(a!=n){
	cout<<"vui long nhap so nguyen: ";
	cin>>c;
	for(int i=2;i<c;i++)
		if(c%i==0){
			b=1;
		}
		else{
		b=2;
		}
		if (b==1){
		
		cout<<"ka so nguyen to\n";}
		else{
			cout<<"k phai la so nguyen to\n";
		}
	}
	
	




return 0;
}
