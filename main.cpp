#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	while(true)
	{
		int somay=1+rand()%100;
		cout<<"chuong trinh choi game \n";
		int solandoan=0;
		bool iswin=false;
		do
		{
			cout<<"may da chon mot so[1...100] moi ban doan so\n";
			int songuoi;
			cin>>songuoi;
			solandoan++;
			cout<<"ban doan lan thu"<<solandoan<<endl;
			if(songuoi==somay)
			{
				cout<<"hahah ban da doan dung roi"<<"so cua may="<<somay<<endl;
				iswin=true;
				break;//thang roi thi phai thoat 
			}
			else
			{
				if(songuoi>somay)
				{
					cout<<"ban da doan sai roi so nguoi>somay"<<endl;
				}
				else
				{
					cout<<"ban da doan sai roi so nguoi<somay"<<endl;
				}
				if(solandoan==7)
				{
					break;
				}
			}
		}while(true);
		if(iswin!=true)
		{
			cout<<"game over\n";
			cout<<"so cua may="<<somay;
		}
		cout<<"choi tiep khong em(c,k)";
		char c;
		cin>>c;
		if(c=='k')
		{
			break;
		}
	}
	cout<<"goobey";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
