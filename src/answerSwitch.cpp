#include "hider.hpp"
void answerSwitch(int until,int after){
		//this is the function that give us the answer 
		//it is count the balance and trouth it give us answer
		int res=(until+after)%7;
		switch(res){
			case 1:
				cout << "Monday";
				break;
			case 2:
				cout << "Tuesday";
				break;
			case 3:
				cout << "Wednesday";
				break;
			case 4:
				cout << "Thursday";
				break;
			case 5:
				cout << "Friday";
				break;
			case 6:
				cout << "Saturday";
				break;
			case 0:
				cout << "Sunday";
				break;
		}
}
