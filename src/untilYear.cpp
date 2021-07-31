#include "hider.hpp"
int untilYear(int year){
        //function that calculate days since 1810 y until your input year
	int res=0;
 	for(int fy=1810;fy<year;fy++){
		//this is determine is this year retreat year or not
		if(fy%4==0 && (fy%100!=0 || fy%400==0)){
			res+=366;
		} else {
			res+=365;
		}
	}
	return res;
}
