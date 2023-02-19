#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	float mesafe=0;
	int zaman=0;
	float hiz=0;
	cout<<"Gidilecek mesafeye gore hiz hesaplayan program";
	
	cout<<"\n gidilecek mesafe (m): ";
	cin >>mesafe;
	cout<<"Gittiginiz mesafeniz (m): "<<mesafe;
	
	cout<<"\n varis zamani (sn): ";
	cin >>zaman;
	cout<<"Varis zamaniniz : "<<zaman;
	
	hiz=(float) mesafe / zaman;
	cout<<"\n Hiziniz : "<<hiz<<" m/s olmalidir.";
	
	
	
	return 0;
}
