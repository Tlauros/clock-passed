#include <iostream>
using namespace std;

int main(int hour , int minutes ,int minuteshesab, int second) {
	cout << "ENTER YOUR HOUR : ";
	cin >> hour;
	cout << "-----------------------------------" << endl;
	cout << "ENTER YOUR MINUTES : ";
	cin >> minutes;
	cout << "-----------------------------------" << endl;
	//MOHASEBE

	minuteshesab = hour * 60 + minutes;
	second = minuteshesab * 60;

	cout << "minute passed : " << minuteshesab << endl;
	cout << "second passed : " << second << endl;
	return 0;

}
