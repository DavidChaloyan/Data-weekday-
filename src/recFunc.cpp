#include "hider.hpp"
void recFunc(){
	//insert day,month and year.
	int day,month,year;
	cout << "***********************************************************************"<<endl;
	cout << "please enter day" << endl; cin >> day;
	cout << "please enter month" << endl; cin >> month;
	cout << "please enter year" << endl; cin >> year;
       
        //funition that count finnaly.
	finallyF(year,month,day);
	string answer;
	cout << "do you want to count another day?|yes or no|"; cin >> answer;
	if(answer=="yes") {
		recFunc();
	} else {
		cout << "Thanks!";
	}
}
