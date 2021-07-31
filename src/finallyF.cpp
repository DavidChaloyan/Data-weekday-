#include "hider.hpp"
void finallyF(int year,int month,int day){


	//this condition determine are your input data is correct? 
	if(year<=1810 || month < 1 || month >12 || day <1 || day >31){
		cout << "please enter correct data";
	} else {  
		  //this condition determine in that year how many days have fabrary 
	          if((year%4==0 && (year%100!=0 || year%400==0)) && month == 2 && day > 29){
			cout << "This year febrary has 29 days";
	            //this condition determine in that year retreat or not 
		  } else if(year%4!=0 && month == 2 && day >28){
 				    cout << "this is retreat year";
	            } else {		
				//this is the count functions
				int untilyear=untilYear(year);
				int afteryear=afterYear(day,month,year);
				cout << "*****************************"<<endl;
				cout << "Answer = ";
				answerSwitch(untilyear,afteryear);
				cout << endl;
				cout << "*****************************"<<endl;
		      } 
	  }
}
